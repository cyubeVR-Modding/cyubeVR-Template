#pragma once
#include "CoreMinimal.h"
#include "GetAssetIDDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAssetIDDelegate, bool, bSuccessful, const FString&, Content);

