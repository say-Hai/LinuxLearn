#include "mainwindow.h"

#pragma execution_character_set("utf-8")
mainwindow::mainwindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("TCP - 客户端");
	m_tcp = new QTcpSocket(this);

	connect(m_tcp, &QTcpSocket::readyRead, [=]()
		{
			QByteArray recvMsg = m_tcp->readAll();
			ui.record->appendPlainText("服务器say:" + recvMsg);
		});

	// 检测是否和服务器是否连接成功了
	connect(m_tcp, &QTcpSocket::connected, this, [=]()
		{
			ui.record->appendPlainText("恭喜, 连接服务器成功!!!");
		});
	// 检测服务器是否和客户端断开了连接
	connect(m_tcp, &QTcpSocket::disconnected, this, [=]()
		{
			ui.record->appendPlainText("服务器已经断开了连接, ...");
			ui.connectServer->setEnabled(true);
			ui.disconnect->setEnabled(false);
		});
}

mainwindow::~mainwindow()
{}

void mainwindow::on_connectServer_clicked()
{
	QString ip = ui.addrEdit->text();
	unsigned short port = ui.portEdit->text().toInt();

	m_tcp->connectToHost(QHostAddress(ip), port);
	ui.connectServer->setEnabled(false);
	ui.disconnect->setEnabled(true);
}

void mainwindow::on_sendMsg_clicked()
{
	QString sendMsg = ui.msg->toPlainText();
	m_tcp->write(sendMsg.toUtf8());
	ui.record->appendPlainText("客户端Say: " + sendMsg);
	ui.msg->clear();
}

void mainwindow::on_disconnect_clicked()
{
	m_tcp->close();
	ui.connectServer->setEnabled(true);
	ui.disconnect->setEnabled(false);
}