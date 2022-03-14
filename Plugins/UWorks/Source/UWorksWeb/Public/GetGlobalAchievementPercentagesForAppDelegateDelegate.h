#pragma once
#include "CoreMinimal.h"
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetGlobalAchievementPercentagesForAppDelegate, bool, bSuccessful, const FString&, Content);

