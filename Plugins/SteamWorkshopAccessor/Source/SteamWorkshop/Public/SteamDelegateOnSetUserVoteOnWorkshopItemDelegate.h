#pragma once
#include "CoreMinimal.h"
#include "SetUserVoteOnWorkshopItemResult.h"
#include "SteamDelegateOnSetUserVoteOnWorkshopItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnSetUserVoteOnWorkshopItem, FSetUserVoteOnWorkshopItemResult, Result);

