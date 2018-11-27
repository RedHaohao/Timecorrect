#include "timecorrect.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TimeCorrect w;
	w.show();
	return a.exec();
}
