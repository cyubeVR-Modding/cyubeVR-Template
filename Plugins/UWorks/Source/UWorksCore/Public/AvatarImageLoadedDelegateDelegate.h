#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "AvatarImageLoadedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvatarImageLoadedDelegate, FUWorksSteamID, SteamID, UTexture2D*, Image);

