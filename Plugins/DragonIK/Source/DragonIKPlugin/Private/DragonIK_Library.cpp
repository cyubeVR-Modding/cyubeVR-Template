#include "DragonIK_Library.h"

UDragonIK_Library::UDragonIK_Library() {
}

FTransform UDragonIK_Library::QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget) {
    return FTransform{};
}

FRotator UDragonIK_Library::LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection) {
    return FRotator{};
}

FRotator UDragonIK_Library::LookAtRotation_V3(FVector Source, FVector Target, FVector UpVector) {
    return FRotator{};
}

FRotator UDragonIK_Library::CustomLookRotation(FVector lookAt, FVector upDirection) {
    return FRotator{};
}


