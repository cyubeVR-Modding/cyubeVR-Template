#include "BPAdvGripPhysicsSettings.h"

FBPAdvGripPhysicsSettings::FBPAdvGripPhysicsSettings() {
    this->bUsePhysicsSettings = false;
    this->PhysicsConstraintType = EPhysicsGripConstraintType::AccelerationConstraint;
    this->PhysicsGripLocationSettings = EPhysicsGripCOMType::COM_Default;
    this->bTurnOffGravityDuringGrip = false;
    this->bSkipSettingSimulating = false;
    this->LinearMaxForceCoefficient = 0.00f;
    this->AngularMaxForceCoefficient = 0.00f;
    this->bUseCustomAngularValues = false;
    this->AngularStiffness = 0.00f;
    this->AngularDamping = 0.00f;
}

