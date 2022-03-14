#pragma once
#include "CoreMinimal.h"
#include "GameServerChangeRequestedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameServerChangeRequestedDelegate, const FString&, Server, const FString&, Password);

