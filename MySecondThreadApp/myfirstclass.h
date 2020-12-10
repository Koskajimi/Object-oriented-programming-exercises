#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include <QThread>
#include <QDebug>


class MyFirstClass : public QThread
{
public:
    MyFirstClass();

protected:
    virtual void run() override;
};

#endif // MYFIRSTCLASS_H
