#pragma once
#include "CoreMinimal.h"
#include "EUWorksUGCMatchingUGCType.generated.h"

UENUM(BlueprintType)
enum class EUWorksUGCMatchingUGCType : uint8 {
    Items,
    Items_Mtx,
    Items_ReadyToUse,
    Collections,
    Artwork,
    Videos,
    Screenshots,
    AllGuides,
    WebGuides,
    IntegratedGuides,
    UsableInGame,
    ControllerBindings,
    GameManagedItems,
    All = 0xFE,
};

