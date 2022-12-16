#include <QtWidgets/QApplication>
#include <qaxfactory.h>
#include <QTimer>
#include "ActiveQt_Server.h"
#include "OutputHelper.h"

QList<OutputHelper*> OutputHelper::objectList;

QAXFACTORY_BEGIN("{3c98a247-ec4a-4d68-9e1a-2a3aedc7dbad}", "{309f8ae0-9631-4d76-8362-6de86fd2e279}")
QAXCLASS(OutputHelper)
QAXFACTORY_END()

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	if (QAxFactory::isServer()) {
		qDebug() << "QAxFactory::isServer";
		return a.exec();
	}
	qDebug() << "QAxFactory::startServer = " << QAxFactory::startServer();
	qDebug() << "QAxFactory::isServer = " << QAxFactory::isServer();

	OutputHelper output;
	qDebug() << "QAxFactory::registerActiveObject = " << QAxFactory::registerActiveObject(&output);

	//QTimer* time;
	//time = new QTimer();
	//time->setInterval(500);
	//time->start();

	ActiveQtServer Instance;
	Instance.show();

	QObject::connect(&Instance, &ActiveQtServer::isclose,
		[=]()
		{
			qDebug() << "QAxFactory::stopServer = " << QAxFactory::stopServer();
			QApplication::exit();
		});
	return a.exec();
}