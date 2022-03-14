#pragma once
#include "CoreMinimal.h"
#include "GetAccountPublicInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAccountPublicInfoDelegate, bool, bSuccessful, const FString&, Content);

