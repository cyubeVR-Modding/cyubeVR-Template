#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FavoritesListAccountsUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFavoritesListAccountsUpdatedDelegate, EUWorksResult, Result);

