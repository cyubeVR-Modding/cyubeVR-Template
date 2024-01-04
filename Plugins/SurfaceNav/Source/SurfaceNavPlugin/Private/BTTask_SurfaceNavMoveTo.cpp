#include "BTTask_SurfaceNavMoveTo.h"

UBTTask_SurfaceNavMoveTo::UBTTask_SurfaceNavMoveTo() {
    this->NodeName = TEXT("SurfaceNav Move To");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bStopOnOverlapNeedsUpdate = true;
}


