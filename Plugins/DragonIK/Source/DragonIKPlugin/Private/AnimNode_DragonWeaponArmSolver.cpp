#include "AnimNode_DragonWeaponArmSolver.h"

FAnimNode_DragonWeaponArmSolver::FAnimNode_DragonWeaponArmSolver() {
    this->Physweapon_Component_Tag = 0;
    this->arm_twist_axis = ETwist_Type_DragonIK::ENUM_PoseAxisTwist;
    this->Let_Arm_Twist_With_Hand = false;
    this->Enable_Interpolation = false;
    this->Interpolation_Speed = 0.00f;
    this->DisplayLineTrace = false;
}

