/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit_Send;
    QTextEdit *textEdit_Read;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_clearPendingFrameList;
    QPushButton *pushButton_SendARandomMessage;
    QPushButton *pushButton_Stop;
    QTextEdit *textEdit_CanPlugin;
    QTextEdit *textEdit_CanInterface;
    QPushButton *pushButton_Connect;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButtonSendAPresenceReq;
    QPushButton *pushButtonSendADataReq;
    QSpinBox *spinBoxDataReqSdcsId;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(833, 386);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit_Send = new QTextEdit(centralWidget);
        textEdit_Send->setObjectName(QStringLiteral("textEdit_Send"));
        textEdit_Send->setGeometry(QRect(20, 20, 321, 351));
        textEdit_Send->setReadOnly(true);
        textEdit_Read = new QTextEdit(centralWidget);
        textEdit_Read->setObjectName(QStringLiteral("textEdit_Read"));
        textEdit_Read->setGeometry(QRect(490, 20, 321, 351));
        textEdit_Read->setReadOnly(true);
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName(QStringLiteral("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(380, 290, 75, 23));
        pushButton_clearPendingFrameList = new QPushButton(centralWidget);
        pushButton_clearPendingFrameList->setObjectName(QStringLiteral("pushButton_clearPendingFrameList"));
        pushButton_clearPendingFrameList->setGeometry(QRect(350, 350, 131, 23));
        pushButton_SendARandomMessage = new QPushButton(centralWidget);
        pushButton_SendARandomMessage->setObjectName(QStringLiteral("pushButton_SendARandomMessage"));
        pushButton_SendARandomMessage->setGeometry(QRect(350, 250, 131, 31));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(380, 320, 75, 23));
        textEdit_CanPlugin = new QTextEdit(centralWidget);
        textEdit_CanPlugin->setObjectName(QStringLiteral("textEdit_CanPlugin"));
        textEdit_CanPlugin->setGeometry(QRect(360, 40, 104, 31));
        textEdit_CanInterface = new QTextEdit(centralWidget);
        textEdit_CanInterface->setObjectName(QStringLiteral("textEdit_CanInterface"));
        textEdit_CanInterface->setGeometry(QRect(360, 100, 104, 31));
        pushButton_Connect = new QPushButton(centralWidget);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));
        pushButton_Connect->setGeometry(QRect(360, 140, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 20, 81, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 80, 81, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 140, 31, 23));
        pushButtonSendAPresenceReq = new QPushButton(centralWidget);
        pushButtonSendAPresenceReq->setObjectName(QStringLiteral("pushButtonSendAPresenceReq"));
        pushButtonSendAPresenceReq->setGeometry(QRect(360, 170, 111, 31));
        pushButtonSendADataReq = new QPushButton(centralWidget);
        pushButtonSendADataReq->setObjectName(QStringLiteral("pushButtonSendADataReq"));
        pushButtonSendADataReq->setGeometry(QRect(345, 210, 91, 31));
        spinBoxDataReqSdcsId = new QSpinBox(centralWidget);
        spinBoxDataReqSdcsId->setObjectName(QStringLiteral("spinBoxDataReqSdcsId"));
        spinBoxDataReqSdcsId->setGeometry(QRect(440, 210, 42, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 10, 21, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        textEdit_Read->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_Start->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButton_clearPendingFrameList->setText(QApplication::translate("MainWindow", "Clear pendingFrameList", Q_NULLPTR));
        pushButton_SendARandomMessage->setText(QApplication::translate("MainWindow", "Send A Random", Q_NULLPTR));
        pushButton_Stop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Can Plugin:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Can Interface:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        pushButtonSendAPresenceReq->setText(QApplication::translate("MainWindow", "Send A PreReq", Q_NULLPTR));
        pushButtonSendADataReq->setText(QApplication::translate("MainWindow", "Send DatReq", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
