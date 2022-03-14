#pragma once
#include "CoreMinimal.h"
#include "GetAssetClassInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAssetClassInfoDelegate, bool, bSuccessful, const FString&, Content);

