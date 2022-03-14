#pragma once
#include "CoreMinimal.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserAgreementInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

