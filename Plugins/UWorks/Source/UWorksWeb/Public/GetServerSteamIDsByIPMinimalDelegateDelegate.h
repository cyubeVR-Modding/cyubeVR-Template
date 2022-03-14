#pragma once
#include "CoreMinimal.h"
#include "GetServerSteamIDsByIPMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetServerSteamIDsByIPMinimalDelegate, bool, bSuccessful, const FString&, Content);

