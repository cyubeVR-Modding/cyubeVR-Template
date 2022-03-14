#pragma once
#include "CoreMinimal.h"
#include "RequestStoreAuthURLDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestStoreAuthURLDelegate, bool, bSuccessful, const FString&, URL);

