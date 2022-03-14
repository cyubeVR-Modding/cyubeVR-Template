#pragma once
#include "CoreMinimal.h"
#include "EGripInterfaceTeleportBehavior.generated.h"

UENUM(BlueprintType)
enum class EGripInterfaceTeleportBehavior : uint8 {
    TeleportAllComponents,
    DeltaTeleportation,
    OnlyTeleportRootComponent,
    DropOnTeleport,
    DontTeleport,
};

