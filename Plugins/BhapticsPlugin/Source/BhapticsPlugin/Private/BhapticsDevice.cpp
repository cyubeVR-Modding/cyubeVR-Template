#include "BhapticsDevice.h"

FBhapticsDevice::FBhapticsDevice() {
    this->Position = 0;
    this->Connected = false;
    this->Paired = false;
    this->Battery = 0;
    this->AudioJackIn = false;
}

