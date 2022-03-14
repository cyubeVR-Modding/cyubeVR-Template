#pragma once
#include "CoreMinimal.h"
#include "SubscribePublishedFileMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSubscribePublishedFileMinimalDelegate, bool, bSuccessful, const FString&, Content);

