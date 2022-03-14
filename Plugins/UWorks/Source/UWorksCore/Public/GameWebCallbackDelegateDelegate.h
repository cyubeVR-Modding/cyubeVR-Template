#pragma once
#include "CoreMinimal.h"
#include "GameWebCallbackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameWebCallbackDelegate, const FString&, URL);

