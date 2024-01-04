#include "AnimNode_DragonAimSolver.h"

FAnimNode_DragonAimSolver::FAnimNode_DragonAimSolver() {
    this->Use_FName_Bone_Input = false;
    this->Use_Separate_Targets = false;
    this->Override_Hand_Rotation = false;
    this->enable_head_aim = false;
    this->bAllowHandStretching = false;
    this->reach_instead = false;
    this->Aggregate_Hand_Body = false;
    this->Let_Arm_Twist_With_Hand = false;
    this->pole_system_input = EPole_System_DragonIK::ENUM_SinglePoleSystem;
    this->arm_twist_axis = ETwist_Type_DragonIK::ENUM_PoseAxisTwist;
    this->hand_rotation_method = ERotation_Type_DragonIK::ENUM_AdditiveRotation;
    this->Override_Head_Rotation = false;
    this->Enable_Hand_Interpolation = false;
    this->Hand_Interpolation_Speed = 0.00f;
    this->arm_transform_space = EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem;
    this->Main_Arm_Index = 0;
    this->Lookat_Radius = 0.00f;
    this->Lookat_Clamp = 0.00f;
    this->Limbs_Clamp = 0.00f;
    this->Downward_Dip_Multiplier = 0.00f;
    this->Inverted_Dip_Multiplier = 0.00f;
    this->Vertical_Dip_Treshold = 0.00f;
    this->Side_Move_Multiplier = 0.00f;
    this->Side_Down_Multiplier = 0.00f;
    this->Up_Rot_Clamp = 0.00f;
    this->look_transform_space = EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem;
    this->Lock_Legs = false;
    this->ignore_elbow_modification = false;
    this->ignore_separate_hand_solving = false;
    this->Use_Natural_Method = false;
    this->Head_Use_Separate_Clamp = false;
    this->Is_Head_Accurate = false;
    this->automatic_leg_make = false;
    this->enable_solver = false;
    this->Work_Outside_PIE = false;
    this->Use_Physics_Adaptation = false;
    this->Adaptive_Terrain_Tail = false;
    this->Trace_Channel = TraceTypeQuery1;
    this->Trace_Up_Height = 0.00f;
    this->Trace_Down_Height = 0.00f;
    this->loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp;
    this->Enable_Interpolation = false;
    this->Interpolation_Speed = 0.00f;
    this->Toggle_Interpolation_Speed = 0.00f;
    this->Use_Reference_Forward_Axis = false;
    this->DisplayLineTrace = false;
}

