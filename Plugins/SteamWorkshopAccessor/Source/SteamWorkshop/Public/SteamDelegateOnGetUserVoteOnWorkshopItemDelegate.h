#pragma once
#include "CoreMinimal.h"
#include "GetUserVoteOnWorkshopItemResult.h"
#include "SteamDelegateOnGetUserVoteOnWorkshopItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnGetUserVoteOnWorkshopItem, FGetUserVoteOnWorkshopItemResult, Result);

