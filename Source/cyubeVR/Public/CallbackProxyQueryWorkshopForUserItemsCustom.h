#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnQueryWorkshopForUserItemsCustomDelegate.h"
#include "CallbackProxyQueryWorkshopForUserItemsCustom.generated.h"

class UCallbackProxyQueryWorkshopForUserItemsCustom;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyQueryWorkshopForUserItemsCustom : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItemsCustom OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItemsCustom OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForUserItemsCustom OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForUserItemsCustom();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForUserItemsCustom* SteamWorkshop_QueryForUserItemsCustom(const int32& PageToGet);
    
};

