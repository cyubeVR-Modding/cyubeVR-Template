#pragma once
#include "CoreMinimal.h"
#include "GetAppDepotVersionsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppDepotVersionsMinimalDelegate, bool, bSuccessful, const FString&, Content);

