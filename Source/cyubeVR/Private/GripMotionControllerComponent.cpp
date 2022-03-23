#include "GripMotionControllerComponent.h"
#include "Net/UnrealNetwork.h"
#include "GS_Default.h"

class UPrimitiveComponent;
class UObject;
class AActor;
class USceneComponent;

void UGripMotionControllerComponent::UpdatePhysicsHandleTransform_BP(const FBPActorGripInformation& GrippedActor, const FTransform& NewTransform) {
}

bool UGripMotionControllerComponent::UpdatePhysicsHandle_BP(const FBPActorGripInformation& Grip, bool bFullyRecreate) {
    return false;
}

void UGripMotionControllerComponent::TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport) {
}

bool UGripMotionControllerComponent::TeleportMoveGrippedComponent(UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips) {
    return false;
}

bool UGripMotionControllerComponent::TeleportMoveGrippedActor(AActor* GrippedActorToMove, bool bTeleportPhysicsGrips) {
    return false;
}

bool UGripMotionControllerComponent::TeleportMoveGrip(FBPActorGripInformation& Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport) {
    return false;
}

bool UGripMotionControllerComponent::SetUpPhysicsHandle_BP(const FBPActorGripInformation& Grip) {
    return false;
}

void UGripMotionControllerComponent::SetSocketTransform(UObject* ObjectToSocket, const FTransform_NetQuantize RelativeTransformToParent) {
}

bool UGripMotionControllerComponent::SetPhysicsHandleSettings(const FBPActorGripInformation& Grip, const FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn) {
    return false;
}

void UGripMotionControllerComponent::SetPausedTransform(const FBPActorGripInformation& Grip, const FTransform& PausedTransform, bool bTeleport) {
}

void UGripMotionControllerComponent::SetGripStiffnessAndDamping(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping) {
}

void UGripMotionControllerComponent::SetGripRelativeTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewRelativeTransform) {
}

void UGripMotionControllerComponent::SetGripPaused(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsPaused, bool bNoConstraintWhenPaused) {
}

void UGripMotionControllerComponent::SetGripLateUpdateSetting(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripLateUpdateSettings NewGripLateUpdateSetting) {
}

void UGripMotionControllerComponent::SetGripHybridLock(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsLocked) {
}

void UGripMotionControllerComponent::SetGripCollisionType(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripCollisionType NewGripCollisionType) {
}

void UGripMotionControllerComponent::SetGripAdditionTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewAdditionTransform, bool bMakeGripRelative) {
}

void UGripMotionControllerComponent::SetCustomPivotComponent(USceneComponent* NewCustomPivotComponent) {
}

void UGripMotionControllerComponent::Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform) {
}
bool UGripMotionControllerComponent::Server_SendControllerTransform_Validate(FBPVRComponentPosRep NewTransform) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Retain_Implementation(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo, const FTransform_NetQuantize& NewRelativeTransform) {
}
bool UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Retain_Validate(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo, const FTransform_NetQuantize& NewRelativeTransform) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Implementation(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo) {
}
bool UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Validate(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifyLocalGripRemoved_Implementation(uint8 GripID, const FTransform_NetQuantize& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity) {
}
bool UGripMotionControllerComponent::Server_NotifyLocalGripRemoved_Validate(uint8 GripID, const FTransform_NetQuantize& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifyLocalGripAddedOrChanged_Implementation(const FBPActorGripInformation& newGrip) {
}
bool UGripMotionControllerComponent::Server_NotifyLocalGripAddedOrChanged_Validate(const FBPActorGripInformation& newGrip) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifyHandledTransaction_Implementation(uint8 GripID) {
}
bool UGripMotionControllerComponent::Server_NotifyHandledTransaction_Validate(uint8 GripID) {
    return true;
}

void UGripMotionControllerComponent::Server_NotifyDropAndSocketGrip_Implementation(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies) {
}
bool UGripMotionControllerComponent::Server_NotifyDropAndSocketGrip_Validate(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies) {
    return true;
}

bool UGripMotionControllerComponent::RemoveSecondaryAttachmentPoint(UObject* GrippedObjectToRemoveAttachment, float LerpToTime) {
    return false;
}

bool UGripMotionControllerComponent::RemoveSecondaryAttachmentFromGrip(const FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime) {
    return false;
}

void UGripMotionControllerComponent::PostTeleportMoveGrippedObjects() {
}

void UGripMotionControllerComponent::OnRep_ReplicatedControllerTransform() {
}

void UGripMotionControllerComponent::OnRep_LocalTransaction(TArray<FBPActorGripInformation> OriginalArrayState) {
}

void UGripMotionControllerComponent::OnRep_LocallyGrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState) {
}

void UGripMotionControllerComponent::OnRep_GrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState) {
}

void UGripMotionControllerComponent::NotifyDropAndSocket_Implementation(const FBPActorGripInformation& NewDrop, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies) {
}

void UGripMotionControllerComponent::NotifyDrop_Implementation(const FBPActorGripInformation& NewDrop, bool bSimulate) {
}

void UGripMotionControllerComponent::NewControllerProfileLoaded() {
}

bool UGripMotionControllerComponent::HasGrippedObjects() {
    return false;
}

bool UGripMotionControllerComponent::GripObjectByInterface(UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalBoneToGripName, FName OptionalSnapToSocketName, bool bIsSlotGrip) {
    return false;
}

bool UGripMotionControllerComponent::GripObject(UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip) {
    return false;
}

bool UGripMotionControllerComponent::GripControllerIsTracked() const {
    return false;
}

bool UGripMotionControllerComponent::GripComponent(UPrimitiveComponent* ComponentToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip) {
    return false;
}

bool UGripMotionControllerComponent::GripActor(AActor* ActorToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip) {
    return false;
}

FTransform UGripMotionControllerComponent::GetPivotTransform_BP() {
    return FTransform{};
}

FVector UGripMotionControllerComponent::GetPivotLocation_BP() {
    return FVector{};
}

void UGripMotionControllerComponent::GetPhysicsVelocities(const FBPActorGripInformation& Grip, FVector& AngularVelocity, FVector& LinearVelocity) {
}

bool UGripMotionControllerComponent::GetPhysicsHandleSettings(const FBPActorGripInformation& Grip, FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsOut) {
    return false;
}

bool UGripMotionControllerComponent::GetPhysicsConstraintForce(const FBPActorGripInformation& Grip, FVector& AngularForce, FVector& LinearForce) {
    return false;
}

bool UGripMotionControllerComponent::GetIsSecondaryAttachment(const USceneComponent* ComponentToCheck, FBPActorGripInformation& Grip) {
    return false;
}

bool UGripMotionControllerComponent::GetIsObjectHeld(const UObject* ObjectToCheck) {
    return false;
}

bool UGripMotionControllerComponent::GetIsHeld(const AActor* ActorToCheck) {
    return false;
}

bool UGripMotionControllerComponent::GetIsComponentHeld(const UPrimitiveComponent* ComponentToCheck) {
    return false;
}

void UGripMotionControllerComponent::GetHandType(EControllerHand& NewHand) {
}

void UGripMotionControllerComponent::GetGrippedObjects(TArray<UObject*>& GrippedObjectsArray) {
}

void UGripMotionControllerComponent::GetGrippedComponents(TArray<UPrimitiveComponent*>& GrippedComponentsArray) {
}

void UGripMotionControllerComponent::GetGrippedActors(TArray<AActor*>& GrippedActorArray) {
}

void UGripMotionControllerComponent::GetGripMass(const FBPActorGripInformation& Grip, float& Mass) {
}

bool UGripMotionControllerComponent::GetGripDistance_BP(FBPActorGripInformation& Grip, FVector ExpectedLocation, float& CurrentDistance) {
    return false;
}

void UGripMotionControllerComponent::GetGripByObject(FBPActorGripInformation& Grip, UObject* ObjectToLookForGrip, EBPVRResultSwitch& Result) {
}

void UGripMotionControllerComponent::GetGripByID(FBPActorGripInformation& Grip, uint8 IDToLookForGrip, EBPVRResultSwitch& Result) {
}

void UGripMotionControllerComponent::GetGripByComponent(FBPActorGripInformation& Grip, UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch& Result) {
}

void UGripMotionControllerComponent::GetGripByActor(FBPActorGripInformation& Grip, AActor* ActorToLookForGrip, EBPVRResultSwitch& Result) {
}

void UGripMotionControllerComponent::GetControllerDeviceID(FXRDeviceId& DeviceID, EBPVRResultSwitch& Result, bool bCheckOpenVROnly) {
}

void UGripMotionControllerComponent::GetAllGrips(TArray<FBPActorGripInformation>& GripArray) {
}

bool UGripMotionControllerComponent::DropObjectByInterface(UObject* ObjectToDrop, uint8 GripIDToDrop, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity) {
    return false;
}

bool UGripMotionControllerComponent::DropObject(UObject* ObjectToDrop, uint8 GripIDToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity) {
    return false;
}

bool UGripMotionControllerComponent::DropGrip(const FBPActorGripInformation& Grip, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity) {
    return false;
}

bool UGripMotionControllerComponent::DropComponent(UPrimitiveComponent* ComponentToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity) {
    return false;
}

bool UGripMotionControllerComponent::DropAndSocketObject(const FTransform_NetQuantize& RelativeTransformToParent, UObject* ObjectToDrop, uint8 GripIDToDrop, USceneComponent* SocketingParent, FName OptionalSocketName, bool bWeldBodies) {
    return false;
}

bool UGripMotionControllerComponent::DropAndSocketGrip(const FBPActorGripInformation& GripToDrop, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies) {
    return false;
}

bool UGripMotionControllerComponent::DropActor(AActor* ActorToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity) {
    return false;
}

bool UGripMotionControllerComponent::DestroyPhysicsHandle_BP(const FBPActorGripInformation& Grip) {
    return false;
}

FTransform UGripMotionControllerComponent::CreateGripRelativeAdditionTransform_BP(const FBPActorGripInformation& GripToSample, const FTransform& AdditionTransform, bool bGripRelative) {
    return FTransform{};
}

FTransform UGripMotionControllerComponent::ConvertToGripRelativeTransform(const FTransform& GrippedActorTransform, const FTransform& InTransform) {
    return FTransform{};
}

FTransform UGripMotionControllerComponent::ConvertToControllerRelativeTransform(const FTransform& InTransform) {
    return FTransform{};
}

void UGripMotionControllerComponent::Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject, uint8 GripID) {
}

bool UGripMotionControllerComponent::BP_IsLocallyControlled() {
    return false;
}

bool UGripMotionControllerComponent::BP_HasGripMovementAuthority(const FBPActorGripInformation& Grip) {
    return false;
}

bool UGripMotionControllerComponent::BP_HasGripAuthorityForObject(const UObject* ObjToCheck) {
    return false;
}

bool UGripMotionControllerComponent::BP_HasGripAuthority(const FBPActorGripInformation& Grip) {
    return false;
}

bool UGripMotionControllerComponent::AddSecondaryAttachmentToGrip(const FBPActorGripInformation& GripToAddAttachment, USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName) {
    return false;
}

bool UGripMotionControllerComponent::AddSecondaryAttachmentPoint(UObject* GrippedObjectToAddAttachment, USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName) {
    return false;
}

void UGripMotionControllerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGripMotionControllerComponent, GrippedObjects);
    DOREPLIFETIME(UGripMotionControllerComponent, LocallyGrippedObjects);
    DOREPLIFETIME(UGripMotionControllerComponent, LocalTransactionBuffer);
    DOREPLIFETIME(UGripMotionControllerComponent, ReplicatedControllerTransform);
    DOREPLIFETIME(UGripMotionControllerComponent, ControllerNetUpdateRate);
    DOREPLIFETIME(UGripMotionControllerComponent, bSmoothReplicatedMotion);
    DOREPLIFETIME(UGripMotionControllerComponent, bReplicateWithoutTracking);
}

UGripMotionControllerComponent::UGripMotionControllerComponent() {
    this->DefaultGripScriptClass = UGS_Default::StaticClass();
    this->DefaultGripScript = NULL;
    this->bOffsetByHMD = false;
    this->VelocityCalculationType = EVRVelocityType::VRLOCITY_Default;
    this->bSampleVelocityInWorldSpace = false;
    this->VelocitySamples = 30;
    this->bOffsetByControllerProfile = true;
    this->bAlwaysSendTickGrip = false;
    this->ControllerNetUpdateRate = 100.00f;
    this->bSmoothReplicatedMotion = false;
    this->bReplicateWithoutTracking = false;
    this->bUseWithoutTracking = false;
}

