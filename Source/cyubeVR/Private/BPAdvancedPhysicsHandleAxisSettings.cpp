#include "BPAdvancedPhysicsHandleAxisSettings.h"

FBPAdvancedPhysicsHandleAxisSettings::FBPAdvancedPhysicsHandleAxisSettings() {
    this->Stiffness = 0.00f;
    this->Damping = 0.00f;
    this->MaxForceCoefficient = 0.00f;
    this->bEnablePositionDrive = false;
    this->bEnableVelocityDrive = false;
}

