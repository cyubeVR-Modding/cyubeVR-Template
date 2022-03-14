#pragma once
#include "CoreMinimal.h"
#include "SetAppBuildLiveMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetAppBuildLiveMinimalDelegate, bool, bSuccessful, const FString&, Content);

