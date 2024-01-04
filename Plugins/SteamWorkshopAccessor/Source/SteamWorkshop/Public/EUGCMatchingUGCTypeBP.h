#pragma once
#include "CoreMinimal.h"
#include "EUGCMatchingUGCTypeBP.generated.h"

UENUM(BlueprintType)
enum class EUGCMatchingUGCTypeBP : uint8 {
    T_Items,
    T_Items_Mtx,
    T_Items_ReadyToUse,
    T_Collections,
    T_Artwork,
    T_Videos,
    T_Screenshots,
    T_AllGuides,
    T_WebGuides,
    T_IntegratedGuides,
    T_UsableInGame,
    T_ControllerBindings,
    T_GameManagedItems,
    T_All = 255,
};

