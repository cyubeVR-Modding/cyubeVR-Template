#include "DragonIKWeaponPhysicsComponent.h"

UDragonIKWeaponPhysicsComponent::UDragonIKWeaponPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->read_this = TEXT("A description on how to use the dragonik weapon handler component");
    this->Max_Arm_Length_Percent = 0.96f;
    this->physanim_tag_index = 1;
    this->Linear_Strength = 500;
    this->Angular_Strength = 500;
    this->Linear_Damp = 50;
    this->Angular_Damp = 50;
    this->Interpolation_Speed = 10;
    this->unfreeze_speed = 1.00f;
    this->is_grabbing = false;
}

void UDragonIKWeaponPhysicsComponent::Weapon_Transform_Override(FTransform Weapon_Transform, bool bShould_Override_Weapon_Transform) {
}

void UDragonIKWeaponPhysicsComponent::Unfreeze_Elbows_Function(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::Release_Weapon(bool should_simulatephysics, bool use_gravity, bool bKeep_Attachment) {
}

void UDragonIKWeaponPhysicsComponent::Release_Hand_Plus_Override(FName hand_bone, FTransform hand_transform, bool override_hand_location, bool Override_Hand_Rotation) {
}

void UDragonIKWeaponPhysicsComponent::Release_Hand_Only(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::Grab_Weapon(UPrimitiveComponent* weapon_mesh_input, FName grabbed_bone, bool simulate_physics, bool use_gravity) {
}

void UDragonIKWeaponPhysicsComponent::Freeze_Elbows_Function(FName hand_bone) {
}

void UDragonIKWeaponPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input) {
}

void UDragonIKWeaponPhysicsComponent::Attach_Hand_Only(FName hand_bone, bool arm_position_recalibrate) {
}


