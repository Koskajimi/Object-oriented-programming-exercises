#include "mysecondclass.h"

MySecondClass::MySecondClass()
{

}
void MySecondClass::run()
{
    for(short i=0;i<10;i++)
    {
        qDebug()<<"Second thread ="<<i;
        msleep(2000);
    }
    qDebug()<< "Second thread finished";
}
