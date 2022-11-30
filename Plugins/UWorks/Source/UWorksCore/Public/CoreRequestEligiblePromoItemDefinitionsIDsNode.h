#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "CoreRequestEligiblePromoItemDefinitionsIDsNode.generated.h"

class UCoreRequestEligiblePromoItemDefinitionsIDsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEligiblePromoItemDefinitionsIDsDelegate Completed;
    
    UCoreRequestEligiblePromoItemDefinitionsIDsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestEligiblePromoItemDefinitionsIDsNode* RequestEligiblePromoItemDefinitionsIDsNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
    
};

