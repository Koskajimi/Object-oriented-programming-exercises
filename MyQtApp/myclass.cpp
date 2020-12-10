#include "myclass.h"

MyClass::MyClass()
{
    int myIntVariable = 15;

    qDebug()<<"Hello";
    QString objectQString = "Hello Qstring";

    qDebug()<<objectQString;

    objectQString.setNum(myIntVariable);
    qDebug()<<objectQString;


}

void MyClass::myPrintList()
{

    QList<int> muuttuja ={1, 2, 3};
    for (int i =0; i< muuttuja.size(); ++i)
    {
        qDebug()<<muuttuja.at(i);
    }

    QList<QString> lista ={"yksi", "kaksi", "kolme"};
    QString str;

    foreach (str, lista)
    {
        qDebug()<<str;
    }
}
void MyClass::myPrintStack()
{
    QStack<int> pino;
        pino.push(4);
        pino.push(5);
        pino.push(6);

        while (!pino.isEmpty())
            qDebug()<<pino.pop();
}

void MyClass::printMyDirectoryContent()
{
    qDebug()<<QDir("C:/Qt").entryList()<<endl;

}

