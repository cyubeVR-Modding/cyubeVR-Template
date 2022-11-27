#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "SubmitItemUpdateDelegateDelegate.h"
#include "SubmitItemUpdateMinimalDelegateDelegate.h"
#include "UWorksUGCUpdateHandle.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreSubmitItemUpdate.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmitItemUpdateDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

