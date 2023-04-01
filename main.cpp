#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo("Hello Ngocanhnu!");
    return a.exec();
}
