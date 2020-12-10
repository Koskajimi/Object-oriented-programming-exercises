#include "mytimetouithreadclass.h"

MyTimeToUIThreadClass::MyTimeToUIThreadClass()
{

}
void MyTimeToUIThreadClass::run()
{
    QString systemtime;
    for (i=0;i<10;i++)
    {
        systemtime = objectQTime->currentTime().toString();
        qDebug()<<systemtime;
        msleep(100);
    }

    qDebug()<<"MyTimeToUIThreadClass run() function finished!";
}
