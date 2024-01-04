#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksFavoriteFlags.h"
#include "FavoritesListChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FFavoritesListChangedDelegate, const FString&, IP, int32, QueryPort, int32, ConnectionPort, int32, AppID, const TArray<EUWorksFavoriteFlags>&, Flags, bool, bAdd, FUWorksSteamID, SteamID);

