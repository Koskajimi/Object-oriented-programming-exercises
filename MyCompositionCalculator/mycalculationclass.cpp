#include "mycalculationclass.h"

MyCalculationClass::MyCalculationClass()
{

}
double MyCalculationClass::pluslasku(double parameterOne, double parameterTwo)
{
    double plusresult;
    plusresult = parameterOne + parameterTwo;
    return plusresult;

}
double MyCalculationClass::miinuslasku(double parameterOne, double parameterTwo)
{
    double miinusresult;
    miinusresult = parameterOne - parameterTwo;
    return miinusresult;
}
double MyCalculationClass::kertolasku(double parameterOne, double parameterTwo)
{
    double kertoresult;
    kertoresult = parameterOne * parameterTwo;
    return kertoresult;
}
double MyCalculationClass::jakolasku(double parameterOne, double parameterTwo)
{
    double jakoresult;
    jakoresult = parameterOne / parameterTwo;
    return jakoresult;
}

MyCalculationClass::~MyCalculationClass()
{

}
