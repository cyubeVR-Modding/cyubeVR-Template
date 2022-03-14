#include "UWorksControllerAnalogActionData.h"

FUWorksControllerAnalogActionData::FUWorksControllerAnalogActionData() {
    this->Mode = EUWorksControllerSourceMode::None;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->bActive = false;
}

