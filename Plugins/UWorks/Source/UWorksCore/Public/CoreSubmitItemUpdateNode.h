#pragma once
#include "CoreMinimal.h"
#include "UWorksUGCUpdateHandle.h"
#include "SubmitItemUpdateDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "CoreSubmitItemUpdateNode.generated.h"

class UCoreSubmitItemUpdateNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmitItemUpdateDelegate Completed;
    
    UCoreSubmitItemUpdateNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubmitItemUpdateNode* SubmitItemUpdateNode(FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    
};

