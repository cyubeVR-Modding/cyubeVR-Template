#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnQueryWorkshopForUserItemsDelegate.h"
#include "SteamUGCQueryParameterUser.h"
#include "CallbackProxyQueryWorkshopForUserItems.generated.h"

class UCallbackProxyQueryWorkshopForUserItems;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForUserItems();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForUserItems* SteamWorkshop_QueryForUserItems(const FSteamUGCQueryParameterUser& Parameter);
    
};

