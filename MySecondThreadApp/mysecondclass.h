#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H
#include <QThread>
#include <QDebug>


class MySecondClass : public QThread
{
public:
    MySecondClass();

protected:
    virtual void run() override;
};

#endif // MYSECONDCLASS_H
