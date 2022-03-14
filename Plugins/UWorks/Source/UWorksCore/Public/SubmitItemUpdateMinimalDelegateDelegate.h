#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SubmitItemUpdateMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSubmitItemUpdateMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, bool, bUserNeedsToAcceptWorkshopLegalAgreement);

