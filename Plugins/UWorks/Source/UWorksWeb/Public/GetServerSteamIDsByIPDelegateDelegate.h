#pragma once
#include "CoreMinimal.h"
#include "GetServerSteamIDsByIPDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetServerSteamIDsByIPDelegate, bool, bSuccessful, const FString&, Content);

