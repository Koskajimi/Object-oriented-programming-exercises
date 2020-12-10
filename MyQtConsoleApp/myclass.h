#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

#include <iostream>
using namespace std;

class MyClass : public QObject
{
    Q_OBJECT
public:
     MyClass(QObject *parent = nullptr);
     ~MyClass();
     void raiseFinishProgramSignal();

signals:
     void finishProgram();
     void myFirstSignal();

public slots:
     void myFirstSlotFunction();
};

#endif // MYCLASS_H
