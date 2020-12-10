#include "devicebaseclass.h"
#include <iostream>
using namespace std;

DeviceBaseClass::DeviceBaseClass()
{

}
void DeviceBaseClass::setDeviceID()
{
    cin>>DeviceID;
}
short DeviceBaseClass::getDeviceID()
{
   return DeviceID;
}
