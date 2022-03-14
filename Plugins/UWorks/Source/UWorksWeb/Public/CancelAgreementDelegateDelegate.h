#pragma once
#include "CoreMinimal.h"
#include "CancelAgreementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCancelAgreementDelegate, bool, bSuccessful, const FString&, Content);

