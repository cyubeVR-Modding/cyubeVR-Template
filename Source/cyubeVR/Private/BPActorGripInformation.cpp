#include "BPActorGripInformation.h"

FBPActorGripInformation::FBPActorGripInformation() {
    this->GripID = 0;
    this->GripTargetType = EGripTargetType::ActorGrip;
    this->GrippedObject = NULL;
    this->GripCollisionType = EGripCollisionType::InteractiveCollisionWithPhysics;
    this->GripLateUpdateSetting = EGripLateUpdateSettings::LateUpdatesAlwaysOn;
    this->bColliding = false;
    this->bIsSlotGrip = false;
    this->GripMovementReplicationSetting = EGripMovementReplicationSettings::KeepOriginalMovement;
    this->bIsPaused = false;
    this->bLockHybridGrip = false;
    this->bOriginalReplicatesMovement = false;
    this->bOriginalGravity = false;
    this->Damping = 0.00f;
    this->Stiffness = 0.00f;
    this->GripDistance = 0.00f;
}

