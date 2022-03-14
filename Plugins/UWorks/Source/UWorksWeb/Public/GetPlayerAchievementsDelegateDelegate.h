#pragma once
#include "CoreMinimal.h"
#include "GetPlayerAchievementsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPlayerAchievementsDelegate, bool, bSuccessful, const FString&, Content);

