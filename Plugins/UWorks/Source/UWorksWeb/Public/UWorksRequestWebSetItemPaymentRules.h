#pragma once
#include "CoreMinimal.h"
#include "SetItemPaymentRulesDelegateDelegate.h"
#include "SetItemPaymentRulesMinimalDelegateDelegate.h"
#include "UWorksAssociatedWorkshopFiles.h"
#include "UWorksPartnerAccounts.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebSetItemPaymentRules.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetItemPaymentRulesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetItemPaymentRulesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetItemPaymentRules();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

