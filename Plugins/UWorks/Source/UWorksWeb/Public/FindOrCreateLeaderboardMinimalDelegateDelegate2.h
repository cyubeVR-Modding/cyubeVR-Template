#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFindOrCreateLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

