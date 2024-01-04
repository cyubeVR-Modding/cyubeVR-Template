#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnQueryWorkshopForAllItemsCustomDelegate.h"
#include "CallbackProxyQueryWorkshopForAllItemsMy.generated.h"

class UCallbackProxyQueryWorkshopForAllItemsMy;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyQueryWorkshopForAllItemsMy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItemsCustom OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItemsCustom OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItemsCustom OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForAllItemsMy();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForAllItemsMy* SteamWorkshop_QueryForAllItemsCustom(const int32& PageToGet);
    
};

