/********************************************************************************
** Form generated from reading UI file 'timecorrect.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMECORRECT_H
#define UI_TIMECORRECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeCorrectClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TimeCorrectClass)
    {
        if (TimeCorrectClass->objectName().isEmpty())
            TimeCorrectClass->setObjectName(QStringLiteral("TimeCorrectClass"));
        TimeCorrectClass->resize(400, 300);
        centralWidget = new QWidget(TimeCorrectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 220, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 222, 161, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 54, 12));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 89, 331, 31));
        TimeCorrectClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TimeCorrectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TimeCorrectClass->setStatusBar(statusBar);

        retranslateUi(TimeCorrectClass);

        QMetaObject::connectSlotsByName(TimeCorrectClass);
    } // setupUi

    void retranslateUi(QMainWindow *TimeCorrectClass)
    {
        TimeCorrectClass->setWindowTitle(QApplication::translate("TimeCorrectClass", "TimeCorrect", 0));
        pushButton->setText(QApplication::translate("TimeCorrectClass", "\346\240\241\346\227\266", 0));
        label_2->setText(QApplication::translate("TimeCorrectClass", "\345\210\266\344\275\234\350\200\205\357\274\232RedHaohao", 0));
        label->setText(QApplication::translate("TimeCorrectClass", "\345\214\227\344\272\254\346\227\266\351\227\264", 0));
    } // retranslateUi

};

namespace Ui {
    class TimeCorrectClass: public Ui_TimeCorrectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMECORRECT_H
