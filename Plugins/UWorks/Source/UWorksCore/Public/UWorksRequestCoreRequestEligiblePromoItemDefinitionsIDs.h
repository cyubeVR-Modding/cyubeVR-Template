#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestEligiblePromoItemDefinitionsIDsMinimalDelegateDelegate.h"
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEligiblePromoItemDefinitionsIDsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& NumEligiblePromoItemsDefinitionsIDs, bool& bCachedData);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

