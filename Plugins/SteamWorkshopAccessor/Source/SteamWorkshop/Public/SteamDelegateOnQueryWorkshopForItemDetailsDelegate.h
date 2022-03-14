#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForItemDetailsResult.h"
#include "SteamDelegateOnQueryWorkshopForItemDetailsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnQueryWorkshopForItemDetails, FQueryWorkshopForItemDetailsResult, Result);

