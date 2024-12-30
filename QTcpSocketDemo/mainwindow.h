#pragma once

#include <QtWidgets/QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QPlainTextEdit>
#include "ui_mainwindow.h"

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget* parent = nullptr);
	~mainwindow();

private slots:
	void on_sendMsg_clicked();

	void on_setListen_clicked();

	void handle_connect();

	void handle_ReadyRead();

	void handle_disconnect();
private:
	Ui::mainwindowClass ui;
	QTcpServer* server;
	QTcpSocket* tcpsock;
};
