#include "VRExpansionFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UPrimitiveComponent;
class UObject;
class USplineComponent;
class USplineMeshComponent;
class AActor;
class UGripMotionControllerComponent;
class USceneComponent;

void UVRExpansionFunctionLibrary::UpdatePeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter, FVector newSample) {
}

void UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(USplineComponent* LaserSplineComponent, TArray<USplineMeshComponent*> LaserSplineMeshComponents, FVector InStartLocation, FVector InEndLocation, FVector InForward, float LaserRadius) {
}

void UVRExpansionFunctionLibrary::SetObjectsIgnoreCollision(UPrimitiveComponent* Prim1, FName OptionalBoneName1, UPrimitiveComponent* Prim2, FName OptionalBoneName2, bool bIgnoreCollision) {
}

void UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter, FVector InRawValue, const float DeltaTime, FVector& SmoothedValue) {
}

void UVRExpansionFunctionLibrary::RotateAroundPivot(FRotator RotationDelta, FVector OriginalLocation, FRotator OriginalRotation, FVector PivotPoint, FVector& NewLocation, FRotator& NewRotation, bool bUseOriginalYawOnly) {
}

void UVRExpansionFunctionLibrary::ResetPeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter) {
}

void UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(FBPEuroLowPassFilter& TargetEuroFilter) {
}

void UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw) {
}

FVector_NetQuantize100 UVRExpansionFunctionLibrary::MakeVector_NetQuantize100(FVector InVector) {
    return FVector_NetQuantize100{};
}

FVector_NetQuantize10 UVRExpansionFunctionLibrary::MakeVector_NetQuantize10(FVector InVector) {
    return FVector_NetQuantize10{};
}

FVector_NetQuantize UVRExpansionFunctionLibrary::MakeVector_NetQuantize(FVector InVector) {
    return FVector_NetQuantize{};
}

FTransform_NetQuantize UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(FVector Location, FRotator Rotation, FVector Scale) {
    return FTransform_NetQuantize{};
}

void UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(FVector lastAverage, FVector newSample, FVector& newAverage, int32 numSamples) {
}

void UVRExpansionFunctionLibrary::LowPassFilter_Exponential(FVector lastAverage, FVector newSample, FVector& newAverage, float sampleFactor) {
}

bool UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame() {
    return false;
}

bool UVRExpansionFunctionLibrary::IsInVREditorPreview() {
    return false;
}

FVector UVRExpansionFunctionLibrary::GetPeak_PeakLowPassFilter(FBPLowPassPeakFilter& TargetPeakFilter) {
    return FVector{};
}

EBPHMDWornState UVRExpansionFunctionLibrary::GetIsHMDWorn() {
    return EBPHMDWornState::Unknown;
}

bool UVRExpansionFunctionLibrary::GetIsHMDConnected() {
    return false;
}

bool UVRExpansionFunctionLibrary::GetIsActorMovable(AActor* ActorToCheck) {
    return false;
}

EBPHMDDeviceType UVRExpansionFunctionLibrary::GetHMDType() {
    return EBPHMDDeviceType::DT_OculusHMD;
}

FRotator UVRExpansionFunctionLibrary::GetHMDPureYaw(FRotator HMDRotation) {
    return FRotator{};
}

bool UVRExpansionFunctionLibrary::GetHandFromMotionSourceName(FName MotionSource, EControllerHand& hand) {
    return false;
}

void UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(FName SlotType, UPrimitiveComponent* Component, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName) {
}

void UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(FName SlotType, AActor* Actor, FVector WorldLocation, float MaxRange, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName) {
}

bool UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(const FBPActorGripInformation& A, const FBPActorGripInformation& B) {
    return false;
}

FTransform_NetQuantize UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(const FTransform& InTransform) {
    return FTransform_NetQuantize{};
}

UGripMotionControllerComponent* UVRExpansionFunctionLibrary::Conv_GripPairToMotionController(const FBPGripPair& GripPair) {
    return NULL;
}

uint8 UVRExpansionFunctionLibrary::Conv_GripPairToGripID(const FBPGripPair& GripPair) {
    return 0;
}

FVector_NetQuantize100 UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize100(const FVector& InVector) {
    return FVector_NetQuantize100{};
}

FVector_NetQuantize10 UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize10(const FVector& InVector) {
    return FVector_NetQuantize10{};
}

FVector_NetQuantize UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize(const FVector& InVector) {
    return FVector_NetQuantize{};
}

void UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(const FTransform_NetQuantize& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale) {
}

FRotator UVRExpansionFunctionLibrary::BPQuat_FindBetween(FVector Vec1, FVector Vec2) {
    return FRotator{};
}

USceneComponent* UVRExpansionFunctionLibrary::AddSceneComponentByClass(UObject* Outer, TSubclassOf<USceneComponent> Class, const FTransform& ComponentRelativeTransform) {
    return NULL;
}

UVRExpansionFunctionLibrary::UVRExpansionFunctionLibrary() {
}

