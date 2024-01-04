#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemCustomDelegate.h"
#include "CallbackProxySubscribeUnsubscribeWorkshopItemCustom.generated.h"

class UCallbackProxySubscribeUnsubscribeWorkshopItemCustom;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxySubscribeUnsubscribeWorkshopItemCustom : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItemCustom OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItemCustom OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItemCustom OnSteamInitFailure;
    
    UCallbackProxySubscribeUnsubscribeWorkshopItemCustom();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxySubscribeUnsubscribeWorkshopItemCustom* SteamWorkshop_SubscribeUnsubscribeItemCustom(const FString& ItemId, bool bSubscribe);
    
};

