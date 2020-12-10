#ifndef MYREADFILECLASS_H
#define MYREADFILECLASS_H
#include <iostream>
using namespace std;

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class MyReadFileClass : public QObject
{
    Q_OBJECT
public:
    MyReadFileClass(QObject *parent = nullptr);
    ~MyReadFileClass();
    void raiseFinishProgramSignal();
    void readfile();


signals:
    void finishProgram();
public slots:
};

#endif // MYREADFILECLASS_H
