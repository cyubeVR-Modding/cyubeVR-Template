#pragma once
#include "CoreMinimal.h"
#include "GetServersAtAddressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetServersAtAddressDelegate, bool, bSuccessful, const FString&, Content);

