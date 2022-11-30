#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterDetails.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnQueryWorkshopForItemDetailsDelegate.h"
#include "CallbackProxyQueryWorkshopForItemDetails.generated.h"

class UCallbackProxyQueryWorkshopForItemDetails;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForItemDetails OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForItemDetails();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForItemDetails* SteamWorkshop_QueryForItemDetails(const FSteamUGCQueryParameterDetails& Parameter);
    
};

