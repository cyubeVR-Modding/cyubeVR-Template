#pragma once
#include "CoreMinimal.h"
#include "AdjustAgreementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAdjustAgreementDelegate, bool, bSuccessful, const FString&, Content);

