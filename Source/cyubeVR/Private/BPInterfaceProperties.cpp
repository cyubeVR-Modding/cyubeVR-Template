#include "BPInterfaceProperties.h"

FBPInterfaceProperties::FBPInterfaceProperties() {
    this->bDenyGripping = false;
    this->bAllowMultipleGrips = false;
    this->OnTeleportBehavior = EGripInterfaceTeleportBehavior::TeleportAllComponents;
    this->bSimulateOnDrop = false;
    this->SlotDefaultGripType = EGripCollisionType::InteractiveCollisionWithPhysics;
    this->FreeDefaultGripType = EGripCollisionType::InteractiveCollisionWithPhysics;
    this->SecondaryGripType = ESecondaryGripType::SG_None;
    this->MovementReplicationType = EGripMovementReplicationSettings::KeepOriginalMovement;
    this->LateUpdateSetting = EGripLateUpdateSettings::LateUpdatesAlwaysOn;
    this->ConstraintStiffness = 0.00f;
    this->ConstraintDamping = 0.00f;
    this->ConstraintBreakDistance = 0.00f;
    this->SecondarySlotRange = 0.00f;
    this->PrimarySlotRange = 0.00f;
    this->bIsHeld = false;
}

