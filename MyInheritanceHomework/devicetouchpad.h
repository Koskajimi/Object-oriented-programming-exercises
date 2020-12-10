#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"

class DeviceTouchPad : public DeviceBaseClass
{
public:
    DeviceTouchPad();
    void setTouchpadSensitivity();
    short getTouchpadSensitivity();

private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
