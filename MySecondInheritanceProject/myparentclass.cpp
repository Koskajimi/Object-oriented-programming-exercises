#include "myparentclass.h"


void MyParentClass::setValue(short paramValue)
{
    myParentPrivateMemberVariable = paramValue;
}
short MyParentClass::getValue()
{
    return myParentPrivateMemberVariable;
}
