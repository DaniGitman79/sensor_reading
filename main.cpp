#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>
#include <QUrl>

#include "Counter.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Counter counter;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("counter", &counter);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection
    );

    engine.loadFromModule("MiniUiBuild", "Main");

    if (engine.rootObjects().isEmpty()) {
        qDebug() << "QML konnte nicht geladen werden.";
        return -1;
    }

    return app.exec();
}