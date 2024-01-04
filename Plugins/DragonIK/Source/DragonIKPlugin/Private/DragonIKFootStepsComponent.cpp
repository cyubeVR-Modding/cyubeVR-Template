#include "DragonIKFootStepsComponent.h"

UDragonIKFootStepsComponent::UDragonIKFootStepsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->read_this = TEXT("A description on how to use the dragonik footsteps component");
    this->foot_enter_height = 18.00f;
    this->foot_exit_height = 20.00f;
}



