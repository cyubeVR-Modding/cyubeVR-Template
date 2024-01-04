#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DragonIKWeaponPhysicsComponent.generated.h"

class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKWeaponPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName read_this;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max_Arm_Length_Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 physanim_tag_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Linear_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Angular_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Linear_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Angular_Damp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Interpolation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float unfreeze_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_grabbing;
    
    UDragonIKWeaponPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform);
    
    UFUNCTION(BlueprintCallable)
    void Unfreeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable)
    void Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment);
    
    UFUNCTION(BlueprintCallable)
    void Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation);
    
    UFUNCTION(BlueprintCallable)
    void Release_Hand_Only(FName hand_bone);
    
    UFUNCTION(BlueprintCallable)
    void Grab_Weapon(UPrimitiveComponent* weapon_mesh_input, FName grabbed_bone, bool simulate_physics, bool use_gravity);
    
    UFUNCTION(BlueprintCallable)
    void Freeze_Elbows_Function(FName hand_bone);
    
    UFUNCTION(BlueprintCallable)
    void FirstTimeInitialization(USkeletalMeshComponent* skeleton_input);
    
    UFUNCTION(BlueprintCallable)
    void Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate);
    
};

