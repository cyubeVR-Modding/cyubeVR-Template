#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "ServerListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerListDelegate, const TArray<FUWorksServerInfo>&, Servers);

