#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForUserItemsResultCustom.h"
#include "SteamDelegateOnQueryWorkshopForUserItemsCustomDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnQueryWorkshopForUserItemsCustom, FQueryWorkshopForUserItemsResultCustom, Result);

