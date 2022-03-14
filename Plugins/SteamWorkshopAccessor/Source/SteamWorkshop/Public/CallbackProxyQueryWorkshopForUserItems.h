#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamUGCQueryParameterUser.h"
#include "SteamDelegateOnQueryWorkshopForUserItemsDelegate.h"
#include "CallbackProxyQueryWorkshopForUserItems.generated.h"

class UCallbackProxyQueryWorkshopForUserItems;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForUserItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForUserItems* SteamWorkshop_QueryForUserItems(const FSteamUGCQueryParameterUser& Parameter);
    
};

