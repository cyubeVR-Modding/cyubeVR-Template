#pragma once
#include "CoreMinimal.h"
#include "GetPopularMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPopularMinimalDelegate, bool, bSuccessful, const FString&, Content);

