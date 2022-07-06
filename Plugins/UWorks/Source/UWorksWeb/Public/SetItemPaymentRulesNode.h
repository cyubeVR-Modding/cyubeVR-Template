#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SetItemPaymentRulesDelegateDelegate.h"
#include "UWorksPartnerAccounts.h"
#include "UWorksAssociatedWorkshopFiles.h"
#include "SetItemPaymentRulesNode.generated.h"

class USetItemPaymentRulesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetItemPaymentRulesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetItemPaymentRulesDelegate Completed;
    
    USetItemPaymentRulesNode();
    UFUNCTION(BlueprintCallable)
    static USetItemPaymentRulesNode* SetItemPaymentRulesNode(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

