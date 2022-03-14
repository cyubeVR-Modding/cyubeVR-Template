#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserTicketMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAuthenticateUserTicketMinimalDelegate, bool, bSuccessful, const FString&, Content);

