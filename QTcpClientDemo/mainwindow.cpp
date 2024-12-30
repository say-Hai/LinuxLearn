#include "mainwindow.h"

#pragma execution_character_set("utf-8")
mainwindow::mainwindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("TCP - �ͻ���");
	m_tcp = new QTcpSocket(this);

	connect(m_tcp, &QTcpSocket::readyRead, [=]()
		{
			QByteArray recvMsg = m_tcp->readAll();
			ui.record->appendPlainText("������say:" + recvMsg);
		});

	// ����Ƿ�ͷ������Ƿ����ӳɹ���
	connect(m_tcp, &QTcpSocket::connected, this, [=]()
		{
			ui.record->appendPlainText("��ϲ, ���ӷ������ɹ�!!!");
		});
	// ���������Ƿ�Ϳͻ��˶Ͽ�������
	connect(m_tcp, &QTcpSocket::disconnected, this, [=]()
		{
			ui.record->appendPlainText("�������Ѿ��Ͽ�������, ...");
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
	ui.record->appendPlainText("�ͻ���Say: " + sendMsg);
	ui.msg->clear();
}

void mainwindow::on_disconnect_clicked()
{
	m_tcp->close();
	ui.connectServer->setEnabled(true);
	ui.disconnect->setEnabled(false);
}