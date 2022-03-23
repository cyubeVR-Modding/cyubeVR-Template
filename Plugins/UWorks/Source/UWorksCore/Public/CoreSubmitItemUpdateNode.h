#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksUGCUpdateHandle.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SubmitItemUpdateDelegateDelegate.h"
#include "CoreSubmitItemUpdateNode.generated.h"

class UCoreSubmitItemUpdateNode;

UCLASS()
class UWORKSCORE_API UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubmitItemUpdateDelegate Completed;
    
    UCoreSubmitItemUpdateNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    
};

