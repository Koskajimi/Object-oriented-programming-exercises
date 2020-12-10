#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    cout<<"Olio MyClass luotu"<<endl;
    connect(this, SIGNAL(myFirstSignal()), this, SLOT(myFirstSlotFunction()), Qt::QueuedConnection);
    cout<<"Signaali myFirstSignal() ylos"<<endl;
    emit myFirstSignal();
}
MyClass::~MyClass()
{
    cout<<"Olio MyClass tuhottu"<<endl;
}
void MyClass::raiseFinishProgramSignal()
{
    cout<<"Signaali finishProgram() ylos"<<endl;
    emit finishProgram();
}
void MyClass::myFirstSlotFunction()
{
    cout<<"Ollaan SLOT-jasenfunktiossa myFirstSlotFunction() koska signaali myFirstSignal() suoritettiin"<<endl;
}
