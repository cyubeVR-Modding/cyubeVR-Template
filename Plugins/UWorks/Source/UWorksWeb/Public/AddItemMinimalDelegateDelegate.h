#pragma once
#include "CoreMinimal.h"
#include "AddItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAddItemMinimalDelegate, bool, bSuccessful, const FString&, Content);

