#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EGSTransformOverrideType.h"
#include "BPActorGripInformation.h"
#include "UObject/NoExportTypes.h"
#include "EBPVRResultSwitch.h"
#include "VRGripScriptBase.generated.h"

class AActor;
class UGripMotionControllerComponent;
class USceneComponent;
class UPrimitiveComponent;
class UVRGripScriptBase;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UVRGripScriptBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSTransformOverrideType WorldTransformOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyAutoDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDenyLateUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjectPrePhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjectPostPhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTicking;
    
    UVRGripScriptBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Wants_DenyTeleport(UGripMotionControllerComponent* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool bTickEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGripRelease(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrip(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndPlay(const EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginPlay(UObject* CallingOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, UPARAM(Ref) FTransform& WorldTransform, const FTransform& ParentTransform, UPARAM(Ref) FBPActorGripInformation& Grip, AActor* Actor, UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetParentTransform(bool bGetWorldTransform, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetParentSceneComp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetGripTransform(const FBPActorGripInformation& Grip, const FTransform& ParentTransform);
    
    UFUNCTION(BlueprintCallable)
    static UVRGripScriptBase* GetGripScriptByClass(UObject* WorldContextObject, TSubclassOf<UVRGripScriptBase> GripScriptClass, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void ForceGripToDrop();
    
};

