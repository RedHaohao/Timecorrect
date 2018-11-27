#ifndef TIMECORRECT_H
#define TIMECORRECT_H

#include <QtWidgets/QMainWindow>
#include "ui_timecorrect.h"
#include <QMainWindow>
#include<QDateTime>
namespace Ui {
	class MainWindow;
}
      
class TimeCorrect : public QMainWindow
{
	Q_OBJECT
public:
	TimeCorrect(QWidget *parent = 0);
	void getCurrentTime();
	~TimeCorrect();
private slots:
	void onOkBtnClicked();
	void updateTime();
private:
	Ui::TimeCorrectClass ui;
	QDateTime time;
};


#endif // TIMECORRECT_H
