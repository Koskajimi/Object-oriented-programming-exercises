#ifndef MYCLASS_H
#define MYCLASS_H
#include <QDebug>
#include <QString>
#include <QList>
#include <iostream>
#include <QStack>
#include <Qdir.h>
#include <iostream>
using namespace std;


class MyClass
{
public:
    MyClass();
    void myPrintList();
    void myPrintStack();
    void printMyDirectoryContent();
};

#endif // MYCLASS_H
