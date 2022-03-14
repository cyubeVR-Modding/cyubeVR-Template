#pragma once
#include "CoreMinimal.h"
#include "GetAssetIDMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAssetIDMinimalDelegate, bool, bSuccessful, const FString&, Content);

