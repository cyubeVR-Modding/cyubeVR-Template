#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "ServerListUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerListUpdateDelegate, bool, bSuccessful, FUWorksServerInfo, Server);

