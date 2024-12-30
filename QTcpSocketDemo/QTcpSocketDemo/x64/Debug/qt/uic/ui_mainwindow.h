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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *portEdit;
    QPushButton *setListen;
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

    void setupUi(QMainWindow *mainwindowClass)
    {
        if (mainwindowClass->objectName().isEmpty())
            mainwindowClass->setObjectName(QString::fromUtf8("mainwindowClass"));
        mainwindowClass->resize(351, 526);
        centralWidget = new QWidget(mainwindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        portEdit = new QLineEdit(widget);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));

        horizontalLayout->addWidget(portEdit);

        setListen = new QPushButton(widget);
        setListen->setObjectName(QString::fromUtf8("setListen"));

        horizontalLayout->addWidget(setListen);


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

        retranslateUi(mainwindowClass);

        QMetaObject::connectSlotsByName(mainwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowClass)
    {
        mainwindowClass->setWindowTitle(QCoreApplication::translate("mainwindowClass", "mainwindow", nullptr));
        label->setText(QCoreApplication::translate("mainwindowClass", "\347\253\257\345\217\243", nullptr));
        setListen->setText(QCoreApplication::translate("mainwindowClass", "\345\220\257\345\212\250\347\233\221\345\220\254\346\234\215\345\212\241", nullptr));
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
