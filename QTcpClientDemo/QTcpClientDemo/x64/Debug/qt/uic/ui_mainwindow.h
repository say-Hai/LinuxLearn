/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *portEdit;
    QPushButton *connectServer;
    QLabel *label_2;
    QLineEdit *addrEdit;
    QPushButton *disconnect;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *record;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *msg;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendMsg;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(342, 560);
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        portEdit = new QLineEdit(widget);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        gridLayout->addWidget(portEdit, 0, 1, 1, 1);

        connectServer = new QPushButton(widget);
        connectServer->setObjectName(QString::fromUtf8("connectServer"));

        gridLayout->addWidget(connectServer, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        addrEdit = new QLineEdit(widget);
        addrEdit->setObjectName(QString::fromUtf8("addrEdit"));

        gridLayout->addWidget(addrEdit, 1, 1, 1, 1);

        disconnect = new QPushButton(widget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));

        gridLayout->addWidget(disconnect, 1, 2, 1, 1);


        verticalLayout_3->addWidget(widget);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        record = new QPlainTextEdit(groupBox);
        record->setObjectName(QString::fromUtf8("record"));

        verticalLayout->addWidget(record);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        msg = new QPlainTextEdit(groupBox_2);
        msg->setObjectName(QString::fromUtf8("msg"));

        verticalLayout_2->addWidget(msg);


        verticalLayout_3->addWidget(groupBox_2);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sendMsg = new QPushButton(widget_2);
        sendMsg->setObjectName(QString::fromUtf8("sendMsg"));

        horizontalLayout_2->addWidget(sendMsg);

        horizontalSpacer_2 = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_2);

        mainwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 342, 23));
        mainwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mainwindowClass->setStatusBar(statusBar);

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QCoreApplication::translate("mainwindowClass", "mainwindow", nullptr));
        label->setText(QCoreApplication::translate("mainwindowClass", "\347\253\257\345\217\243", nullptr));
        connectServer->setText(QCoreApplication::translate("mainwindowClass", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindowClass", "\345\234\260\345\235\200", nullptr));
        disconnect->setText(QCoreApplication::translate("mainwindowClass", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mainwindowClass", "\345\216\206\345\217\262\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("mainwindowClass", "\345\217\221\351\200\201\344\277\241\346\201\257", nullptr));
        sendMsg->setText(QCoreApplication::translate("mainwindowClass", "\345\217\221\351\200\201\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindowClass: public Ui_mainwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
