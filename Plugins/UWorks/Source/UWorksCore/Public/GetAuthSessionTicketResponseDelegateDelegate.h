#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksTicketHandle.h"
#include "GetAuthSessionTicketResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAuthSessionTicketResponseDelegate, FUWorksTicketHandle, AuthTicket, EUWorksResult, Result);

