#pragma once
#include "CoreMinimal.h"
#include "GetUserInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUserInfoDelegate, bool, bSuccessful, const FString&, Content);

