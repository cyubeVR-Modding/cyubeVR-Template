#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuthenticateUserDelegate, bool, bSuccessful, const FString&, Content);

