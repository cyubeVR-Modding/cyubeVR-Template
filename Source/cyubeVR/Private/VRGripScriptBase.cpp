#include "VRGripScriptBase.h"
#include "Templates/SubclassOf.h"

class UGripMotionControllerComponent;
class USceneComponent;
class UPrimitiveComponent;
class AActor;
class UObject;
class UVRGripScriptBase;

bool UVRGripScriptBase::Wants_DenyTeleport_Implementation(UGripMotionControllerComponent* Controller) {
    return false;
}

void UVRGripScriptBase::SetTickEnabled(bool bTickEnabled) {
}

void UVRGripScriptBase::OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation) {
}

void UVRGripScriptBase::OnSecondaryGrip_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation) {
}

void UVRGripScriptBase::OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed) {
}

void UVRGripScriptBase::OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) {
}

void UVRGripScriptBase::OnEndPlay_Implementation(const EEndPlayReason::Type EndPlayReason) {
}

void UVRGripScriptBase::OnBeginPlay_Implementation(UObject* CallingOwner) {
}

bool UVRGripScriptBase::IsServer() {
    return false;
}

bool UVRGripScriptBase::HasAuthority() {
    return false;
}

bool UVRGripScriptBase::GetWorldTransform_Implementation(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, const FTransform& ParentTransform, FBPActorGripInformation& Grip, AActor* Actor, UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport) {
    return false;
}

FTransform UVRGripScriptBase::GetParentTransform(bool bGetWorldTransform, FName BoneName) {
    return FTransform{};
}

USceneComponent* UVRGripScriptBase::GetParentSceneComp() {
    return NULL;
}

UObject* UVRGripScriptBase::GetParent() {
    return NULL;
}

AActor* UVRGripScriptBase::GetOwner() {
    return NULL;
}

FTransform UVRGripScriptBase::GetGripTransform(const FBPActorGripInformation& Grip, const FTransform& ParentTransform) {
    return FTransform{};
}

UVRGripScriptBase* UVRGripScriptBase::GetGripScriptByClass(UObject* WorldContextObject, TSubclassOf<UVRGripScriptBase> GripScriptClass, EBPVRResultSwitch& Result) {
    return NULL;
}

void UVRGripScriptBase::ForceGripToDrop() {
}

UVRGripScriptBase::UVRGripScriptBase() {
    this->bIsActive = false;
    this->WorldTransformOverrideType = EGSTransformOverrideType::None;
    this->bDenyAutoDrop = false;
    this->bForceDrop = false;
    this->bDenyLateUpdates = false;
    this->bInjectPrePhysicsHandle = false;
    this->bInjectPostPhysicsHandle = false;
    this->bCanEverTick = false;
    this->bAllowTicking = false;
}

