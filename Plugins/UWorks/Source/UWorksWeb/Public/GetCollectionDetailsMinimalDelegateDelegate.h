#pragma once
#include "CoreMinimal.h"
#include "GetCollectionDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCollectionDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

