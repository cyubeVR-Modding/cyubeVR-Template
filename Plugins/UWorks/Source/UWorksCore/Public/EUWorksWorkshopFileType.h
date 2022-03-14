#pragma once
#include "CoreMinimal.h"
#include "EUWorksWorkshopFileType.generated.h"

UENUM(BlueprintType)
enum class EUWorksWorkshopFileType : uint8 {
    Community,
    Microtransaction,
    Collection,
    Art,
    Video,
    Screenshot,
    Game,
    Software,
    Concept,
    WebGuide,
    IntegratedGuide,
    Merch,
    ControllerBinding,
    SteamworksAccessInvite,
    SteamVideo,
    GameManagedItem,
    Max,
};

