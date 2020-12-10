#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass objectMyClass;

    objectMyClass.myPrintList();
    objectMyClass.myPrintStack();
    objectMyClass.printMyDirectoryContent();
    return a.exec();
}

