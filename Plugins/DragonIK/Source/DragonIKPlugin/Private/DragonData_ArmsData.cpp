#include "DragonData_ArmsData.h"

FDragonData_ArmsData::FDragonData_ArmsData() {
    this->is_this_right_hand = false;
    this->invert_lower_twist = false;
    this->invert_upper_twist = false;
    this->accurate_hand_rotation = false;
    this->relative_axis = false;
    this->Maximum_Extension = 0.00f;
    this->Minimum_Extension = 0.00f;
    this->Max_Stretch_Ratio = 0.00f;
    this->Stretch_lower_arm_Priorty = 0.00f;
    this->override_limits = false;
    this->Twist_Offset_Reverse = 0.00f;
}

