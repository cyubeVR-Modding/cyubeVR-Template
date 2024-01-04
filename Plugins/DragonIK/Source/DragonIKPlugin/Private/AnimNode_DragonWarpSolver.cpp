#include "AnimNode_DragonWarpSolver.h"

FAnimNode_DragonWarpSolver::FAnimNode_DragonWarpSolver() {
    this->enable_solver = false;
    this->speed_warping_const = 0.00f;
    this->enable_slope_warp = false;
    this->automatic_speed_warping_const = 0.00f;
    this->slope_detection_tolerance = 0.00f;
    this->Warp_Slope_Interpolation = 0.00f;
    this->Trace_Channel = TraceTypeQuery1;
    this->line_trace_downward_height = 0.00f;
    this->line_trace_upper_height = 0.00f;
    this->virtual_leg_width = 0.00f;
    this->virtual_scale = 0.00f;
    this->DisplayLineTrace = false;
    this->Limb_Compression_Intensity = 0.00f;
    this->Hip_Change_Intensity = 0.00f;
}

