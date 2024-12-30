#pragma once

#include <QtWidgets/QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include "ui_mainwindow.h"

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget* parent = nullptr);
	~mainwindow();

private slots:
	void on_connectServer_clicked();

	void on_sendMsg_clicked();

	void on_disconnect_clicked();

private:
	Ui::mainwindowClass ui;
	QTcpSocket* m_tcp;
};
