#include <iostream>
#include "printdata.h"


using namespace std;

int main()
{
    int kokonaisluku = 10;
    double desimaali = 2.1;
    char* teksti = "kikkeli";

    PrintData objectPrintData;

    objectPrintData.print(kokonaisluku);
    objectPrintData.print(desimaali);
    objectPrintData.print(teksti);


    return 0;
}
