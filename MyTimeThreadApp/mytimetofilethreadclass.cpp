#include "mytimetofilethreadclass.h"

MyTimeToFileThreadClass::MyTimeToFileThreadClass()
{

}
void MyTimeToFileThreadClass::run()
{
    QString fileSystemTime;
    QString file = "C:/Qt/MyTime.txt";
    QFile outputFile(file);
    outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

    QString str = "text inside file";

    for(short i=1; i<10; i++)
    {
        fileSystemTime = QTime::currentTime().toString();
        str = fileSystemTime;

        if(!outputFile.isOpen())
        {
            //alert that file did not open
        }

        QTextStream outStream(&outputFile);

        outStream<<str<<endl;
        qDebug()<<"Write operation"<<i<<"done!";

        msleep(1000);
    }
    outputFile.close();
    qDebug()<<"MyTimeToFileThreadClass run() Function finished!";


}
