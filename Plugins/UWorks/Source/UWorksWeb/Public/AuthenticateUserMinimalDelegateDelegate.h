#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAuthenticateUserMinimalDelegate, bool, bSuccessful, const FString&, Content);

