#include "DragonIKPhysicsComponent.h"

UDragonIKPhysicsComponent::UDragonIKPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->physanim_tag_index = 1;
    this->Custom_Root_Bone = TEXT("Pelvis");
    this->individual_bone_selection.AddDefaulted(6);
    this->Influence_Stopping_Bones.AddDefaulted(1);
    this->Linear_Strength = 1000;
    this->Angular_Strength = 1000;
    this->Linear_Damp = 5;
    this->Angular_Damp = 5;
    this->Interpolation_Speed = 10;
    this->parent_child_ragdoll_state = false;
    this->use_auto_blending_logic = true;
    this->Autoblendalpha = 1.00f;
    this->modify_physics_states = false;
    this->Hit_Enable_Speed = 5.00f;
    this->Hit_Disable_Speed = 5.00f;
    this->hit_delay_time = 1.00f;
    this->blend_to_zero = false;
}

void UDragonIKPhysicsComponent::UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp) {
}

void UDragonIKPhysicsComponent::SetInterpolation(int32 inter_value) {
}

void UDragonIKPhysicsComponent::ReleaseAllHandles(bool go_ragdoll) {
}

void UDragonIKPhysicsComponent::ReGrabAllHandles(bool exit_ragdoll) {
}

void UDragonIKPhysicsComponent::PerformActiveRagdoll(float pelvis_mass_override) {
}

void UDragonIKPhysicsComponent::OnHitCallback(const FHitResult& Hit, FName Optional_Override_Hit_Bone_Name, FVector& hit_location, FVector& hit_impulse_direction, FName& hit_bone_name) {
}

void UDragonIKPhysicsComponent::Modify_Reset_Bone_Info(TArray<FName> bone_list) {
}

void UDragonIKPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input) {
}

void UDragonIKPhysicsComponent::Control_Bone_Handle(FName bone_name, FTransform override_transform, bool enable) {
}

void UDragonIKPhysicsComponent::CacheSimulationStates() {
}


