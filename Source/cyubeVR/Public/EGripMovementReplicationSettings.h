#pragma once
#include "CoreMinimal.h"
#include "EGripMovementReplicationSettings.generated.h"

UENUM(BlueprintType)
enum class EGripMovementReplicationSettings : uint8 {
    KeepOriginalMovement,
    ForceServerSideMovement,
    ForceClientSideMovement,
    ClientSide_Authoritive,
    ClientSide_Authoritive_NoRep,
};

