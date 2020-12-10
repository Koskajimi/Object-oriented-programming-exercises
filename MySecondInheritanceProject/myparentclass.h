#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H
#include <iostream>

using namespace std;

class MyParentClass
{
public:
    void setValue(short paramValue);
    short getValue();

private:
    short myParentPrivateMemberVariable;

protected:
    short myParentProtectedMemberVariable;

};

#endif // MYPARENTCLASS_H
