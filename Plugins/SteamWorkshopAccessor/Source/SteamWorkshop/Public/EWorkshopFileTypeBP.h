#pragma once
#include "CoreMinimal.h"
#include "EWorkshopFileTypeBP.generated.h"

UENUM(BlueprintType)
enum class EWorkshopFileTypeBP : uint8 {
    WFT_First,
    WFT_Community = 0x0,
    WFT_Microtransaction,
    WFT_Collection,
    WFT_Art,
    WFT_Video,
    WFT_Screenshot,
    WFT_Game,
    WFT_Software,
    WFT_Concept,
    WFT_WebGuide,
    WFT_IntegratedGuide,
    WFT_Merch,
    WFT_ControllerBinding,
    WFT_SteamworksAccessInvite,
    WFT_SteamVideo,
    WFT_GameManagedItem,
    WFT_Max,
};

