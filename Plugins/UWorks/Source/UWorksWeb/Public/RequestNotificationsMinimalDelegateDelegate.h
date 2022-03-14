#pragma once
#include "CoreMinimal.h"
#include "RequestNotificationsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestNotificationsMinimalDelegate, bool, bSuccessful, const FString&, Content);

