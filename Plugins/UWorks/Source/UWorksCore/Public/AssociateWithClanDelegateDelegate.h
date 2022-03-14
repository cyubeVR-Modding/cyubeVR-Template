#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "AssociateWithClanDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAssociateWithClanDelegate, bool, bSuccessful, EUWorksResult, Result);

