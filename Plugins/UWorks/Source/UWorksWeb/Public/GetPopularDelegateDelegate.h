#pragma once
#include "CoreMinimal.h"
#include "GetPopularDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPopularDelegate, bool, bSuccessful, const FString&, Content);

