#pragma once
#include "CoreMinimal.h"
#include "GetUserAgreementInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUserAgreementInfoDelegate, bool, bSuccessful, const FString&, Content);

