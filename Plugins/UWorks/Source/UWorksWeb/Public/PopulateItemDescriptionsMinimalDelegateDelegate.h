#pragma once
#include "CoreMinimal.h"
#include "PopulateItemDescriptionsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPopulateItemDescriptionsMinimalDelegate, bool, bSuccessful, const FString&, Content);

