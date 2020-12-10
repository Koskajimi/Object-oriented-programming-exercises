#include "myreadfileclass.h"

MyReadFileClass::MyReadFileClass(QObject *parent) : QObject(parent)
{

}
MyReadFileClass::~MyReadFileClass()
{

}

void MyReadFileClass::raiseFinishProgramSignal()
{
    emit finishProgram();
}
void MyReadFileClass::readfile()
{
    QFile file("c:/Qt/myFile.txt");

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug()<<"Ei aukea";
        }
        else
        {
          QTextStream in(&file);
          while (!in.atEnd())
            {
                QString line = in.readLine();
                qDebug()<< line;
            }
          file.close();
          emit finishProgram();
        }
}
