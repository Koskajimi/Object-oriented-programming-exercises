#ifndef MYMAINCLASS_H
#define MYMAINCLASS_H
#include "mytimetofilethreadclass.h"
#include "mytimetouithreadclass.h"

#include <QObject>

class MyMainClass : public QObject
{
    Q_OBJECT
public:
    explicit MyMainClass(QObject *parent = nullptr);
    ~MyMainClass();

private:
    MyTimeToFileThreadClass *objectMyTimeToFileThreadClass;
    MyTimeToUIThreadClass *objectMyTimeToUIThreadClass;


signals:
    void finishprogram();
public slots:
 //   void MySlotFunction();
};

#endif // MYMAINCLASS_H
