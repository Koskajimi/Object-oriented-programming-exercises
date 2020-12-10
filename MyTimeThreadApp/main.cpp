#include <QCoreApplication>
#include <iostream>
#include <QObject>
#include "mymainclass.h"
#include "mytimetofilethreadclass.h"
#include "mytimetouithreadclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimeToUIThreadClass objectMyTimeToUIThreadClass;
    objectMyTimeToUIThreadClass.start();

    MyMainClass *objectMyMainClass = new MyMainClass;

  //  QObject::connect(objectMyMainClass, SIGNAL (finishProgram()), &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;
    execReturnValue = a.exec();

    delete objectMyMainClass;
    objectMyMainClass = nullptr;

    return execReturnValue;
}
