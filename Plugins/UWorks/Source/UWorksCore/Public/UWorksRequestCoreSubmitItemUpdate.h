#pragma once
#include "CoreMinimal.h"
#include "SubmitItemUpdateMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "SubmitItemUpdateDelegateDelegate.h"
#include "UWorksUGCUpdateHandle.h"
#include "UWorksRequestCoreSubmitItemUpdate.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubmitItemUpdateDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubmitItemUpdateMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSubmitItemUpdate();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksUGCUpdateHandle UGCUpdateHandle, const FString& ChangeNote);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

