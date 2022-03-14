#pragma once
#include "CoreMinimal.h"
#include "IsPlayingSharedGameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FIsPlayingSharedGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

