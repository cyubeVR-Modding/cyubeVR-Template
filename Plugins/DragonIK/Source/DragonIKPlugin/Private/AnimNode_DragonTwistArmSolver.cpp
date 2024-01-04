#include "AnimNode_DragonTwistArmSolver.h"

FAnimNode_DragonTwistArmSolver::FAnimNode_DragonTwistArmSolver() {
    this->pole_system_input = EPole_System_DragonIK::ENUM_SinglePoleSystem;
    this->arm_twist_axis = ETwist_Type_DragonIK::ENUM_PoseAxisTwist;
    this->hand_rotation_method = ERotation_Type_DragonIK::ENUM_AdditiveRotation;
    this->Let_Arm_Twist_With_Hand = false;
    this->allow_arm_stretch = false;
    this->Enable_Interpolation = false;
    this->Interpolation_Speed = 0.00f;
    this->Use_Physics_Adaptation = false;
    this->DisplayLineTrace = false;
}

