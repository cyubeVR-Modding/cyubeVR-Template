#pragma once
#include "CoreMinimal.h"
#include "GetAppListDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppListDelegate, bool, bSuccessful, const FString&, Content);

