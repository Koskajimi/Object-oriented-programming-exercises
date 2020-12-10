#ifndef MYTIMETOUITHREADCLASS_H
#define MYTIMETOUITHREADCLASS_H
#include <QThread>
#include <QDebug>
#include <QTime>
#include <QString>


class MyTimeToUIThreadClass : public QThread
{
public:
    MyTimeToUIThreadClass();

private:
    QString *objectQString;
    QTime *objectQTime;
    int i;

protected:
    virtual void run() override;
};

#endif // MYTIMETOUITHREADCLASS_H
