#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnUpdateWorkshopItemCustomDelegate.h"
#include "SteamWorkshopUpdateDetailsCustom.h"
#include "CallbackProxyUpdateWorkshopItemCustom.generated.h"

class UCallbackProxyUpdateWorkshopItemCustom;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyUpdateWorkshopItemCustom : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItemCustom OnUpdateComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItemCustom OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnUpdateWorkshopItemCustom OnSteamInitFailure;
    
    UCallbackProxyUpdateWorkshopItemCustom();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyUpdateWorkshopItemCustom* SteamWorkshop_UpdateItemCustom(const FString& ItemId, const FSteamWorkshopUpdateDetailsCustom& updateDetails);
    
};

