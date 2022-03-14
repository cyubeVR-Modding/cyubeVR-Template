#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "RequestEncryptedAppTicketMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestEncryptedAppTicketMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

