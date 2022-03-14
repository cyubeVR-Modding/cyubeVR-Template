#include "BPVRWaistTracking_Info.h"

FBPVRWaistTracking_Info::FBPVRWaistTracking_Info() {
    this->WaistRadius = 0.00f;
    this->TrackingMode = EBPVRWaistTrackingMode::VRWaist_Tracked_Front;
    this->TrackedDevice = NULL;
}

