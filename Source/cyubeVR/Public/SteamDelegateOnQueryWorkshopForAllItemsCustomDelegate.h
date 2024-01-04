#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForAllItemsResultCustom.h"
#include "SteamDelegateOnQueryWorkshopForAllItemsCustomDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnQueryWorkshopForAllItemsCustom, FQueryWorkshopForAllItemsResultCustom, Result);

