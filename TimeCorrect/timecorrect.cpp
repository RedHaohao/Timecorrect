#include "timecorrect.h"
#include <QTcpSocket>
#include<QTimer>
#include<Windows.h>
TimeCorrect::TimeCorrect(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	

	getCurrentTime();
	updateTime();

	QTimer *timer = new QTimer(this);
	timer->start(1000);
	connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onOkBtnClicked()));
}

TimeCorrect::~TimeCorrect()
{
	
}



void TimeCorrect::onOkBtnClicked()
{
	
	SYSTEMTIME   st;
	GetLocalTime(&st);
	st.wYear = time.date().year();
	st.wMonth = time.date().month();
	st.wDay = time.date().day();
	st.wHour = time.time().hour();
	st.wMinute = time.time().minute();
	st.wSecond = time.time().second();
	qDebug() << SetLocalTime(&st);


}

void TimeCorrect::updateTime()
{
	time = time.addSecs(1);
	ui.lineEdit->setText(time.toString());
}
void TimeCorrect::getCurrentTime()
{
	QTcpSocket *socket = new QTcpSocket();
	QString temp;
	QFont font("свт╡", 12, BOLD_FONTTYPE);
	QLocale lo(QLocale::C);
	ui.lineEdit->setFont(font);
	ui.lineEdit->setEnabled(false);

	socket->connectToHost("132.163.97.3", 13);
	if (socket->waitForConnected())
	{

		if (socket->waitForReadyRead())
		{

			QString str(socket->readAll());
			str = str.trimmed();
			str = str.section(" ", 1, 2);
			qDebug() << str;
			temp = str;

		}
	}
	time = lo.toDateTime(temp, "yy-MM-dd hh:mm:ss");
	time = time.addYears(100);
	time = time.addSecs(28800);

	ui.lineEdit->setText(time.toString());
}
