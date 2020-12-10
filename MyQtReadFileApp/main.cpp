#include <QCoreApplication>
#include <QFile>
#include "myreadfileclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyReadFileClass *objectMyReadFileClass = new MyReadFileClass;

    QObject::connect(objectMyReadFileClass, SIGNAL (finishProgram()), &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;

    objectMyReadFileClass->readfile();

    execReturnValue = a.exec();

    delete objectMyReadFileClass;
    objectMyReadFileClass = nullptr;

    return execReturnValue;

}
