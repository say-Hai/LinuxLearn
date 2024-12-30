#include "mainwindow.h"
#pragma execution_character_set("utf-8")
mainwindow::mainwindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("TCP-������");
	server = new QTcpServer(this);
	connect(server, &QTcpServer::newConnection, this, &mainwindow::handle_connect);
}

mainwindow::~mainwindow()
{
	delete server;
	delete tcpsock;
}

void mainwindow::on_sendMsg_clicked()
{
	QString sendMsg = ui.msg->toPlainText();
	tcpsock->write(sendMsg.toUtf8());
	ui.record->appendPlainText("������say:" + sendMsg);
	ui.msg->clear();
}

void mainwindow::on_setListen_clicked()
{
	unsigned short port = ui.portEdit->text().toInt();
	server->listen(QHostAddress::Any, port);
	ui.setListen->setEnabled(false);
}

void mainwindow::handle_connect()
{
	tcpsock = server->nextPendingConnection();
	ui.record->appendPlainText("�ɹ��Ϳͻ��˽������µ�����...");
	connect(tcpsock, &QTcpSocket::readyRead, this, &mainwindow::handle_ReadyRead);
	connect(tcpsock, &QTcpSocket::disconnected, this, &mainwindow::handle_disconnect);
}

void mainwindow::handle_ReadyRead()
{
	QString recvMsg = tcpsock->readAll();
	ui.record->appendPlainText("�ͻ���Say: " + recvMsg);
}

void mainwindow::handle_disconnect()
{
	ui.record->appendPlainText("�ͻ��˶Ͽ�����");
	tcpsock->deleteLater();
}