#ifndef MYTIMETOFILETHREADCLASS_H
#define MYTIMETOFILETHREADCLASS_H
#include <QThread>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QTime>
#include <QTextStream>
#include <QString>


class MyTimeToFileThreadClass : public QThread
{
public:
    MyTimeToFileThreadClass();

private:
    short i;
    QString *objectQString;
    QTime *objectQTime;
    QFile *objectQFile;
    QTextStream *objectQTextStream;

protected:
    virtual void run() override;
};

#endif // MYTIMETOFILETHREADCLASS_H
