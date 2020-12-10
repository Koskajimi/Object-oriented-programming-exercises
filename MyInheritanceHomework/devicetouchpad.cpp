#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}
void DeviceTouchPad::setTouchpadSensitivity()
{
    cin>>touchPadSensitivity;
}
short DeviceTouchPad::getTouchpadSensitivity()
{
    return touchPadSensitivity;
}
