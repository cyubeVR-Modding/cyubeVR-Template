#pragma once
#include "CoreMinimal.h"
#include "GetServerIPsBySteamIDMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetServerIPsBySteamIDMinimalDelegate, bool, bSuccessful, const FString&, Content);

