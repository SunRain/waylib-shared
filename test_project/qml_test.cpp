#include <QCoreApplication>
#include <QDeadlineTimer>
#include <QDebug>
#include <QGuiApplication>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QVariant>

#include <memory>

static bool createDynamicCreator(QQmlEngine &engine)
{
    QQmlComponent component(&engine);
    component.setData(
        R"QML(
import QtQuick
import WaylibShared.QuickSharedServer

DynamicCreator { objectName: "installed-dynamic-creator" }
)QML",
        QUrl(QStringLiteral("waylibshared-test://qml-import-test.qml")));

    QDeadlineTimer deadline(5000);
    while (component.status() == QQmlComponent::Loading && !deadline.hasExpired()) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
    }

    if (!component.isReady()) {
        qCritical() << "QML component did not become ready; status:" << component.status();
        for (const auto &e : component.errors()) {
            qCritical().noquote() << e.toString();
        }
        return false;
    }

    const std::unique_ptr<QObject> object(component.create());
    if (!object) {
        qCritical() << "DynamicCreator construction failed:" << component.errors();
        return false;
    }
    const QVariant count = object->property("count");
    return object->objectName() == QStringLiteral("installed-dynamic-creator") && count.isValid()
        && count.toInt() == 0;
}

int main(int argc, char **argv)
{
    if (qEnvironmentVariableIsEmpty("QML_IMPORT_PATH")) {
        qCritical() << "Set QML_IMPORT_PATH to the candidate package's QML import directory";
        return 2;
    }
    if (qEnvironmentVariableIsEmpty("QT_QPA_PLATFORM"))
        qputenv("QT_QPA_PLATFORM", "offscreen");

    QGuiApplication app(argc, argv);
    QQmlEngine engine;
    if (!createDynamicCreator(engine)) {
        qCritical() << "The installed QML plugin did not create an empty DynamicCreator";
        return 1;
    }
    qInfo() << "Pure Qt host loaded DynamicCreator with count=0 from the installed QML module";
    return 0;
}
