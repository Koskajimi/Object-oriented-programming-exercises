#include "mymainclass.h"
#include <QObject>

MyMainClass::MyMainClass(QObject *parent) : QObject(parent)
{
    //objectMyTimeToFileThreadClass = new MyTimeToFileThreadClass;
    objectMyTimeToUIThreadClass = new MyTimeToUIThreadClass;

    connect(objectMyTimeToFileThreadClass, SIGNAL(finished()), this, SLOT(mySlotFunction()));
}
MyMainClass::~MyMainClass()
{
    delete objectMyTimeToFileThreadClass;
    objectMyTimeToFileThreadClass = nullptr;

    delete objectMyTimeToUIThreadClass;
    objectMyTimeToUIThreadClass = nullptr;
}
