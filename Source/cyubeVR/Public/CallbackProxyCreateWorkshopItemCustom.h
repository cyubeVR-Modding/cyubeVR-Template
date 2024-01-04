#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamDelegateOnCreateWorkshopItemCustomDelegate.h"
#include "SteamWorkshopUpdateDetailsCustom.h"
#include "CallbackProxyCreateWorkshopItemCustom.generated.h"

class UCallbackProxyCreateWorkshopItemCustom;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyCreateWorkshopItemCustom : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItemCustom OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItemCustom OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItemCustom OnSteamInitFailure;
    
    UCallbackProxyCreateWorkshopItemCustom();

    UFUNCTION(BlueprintCallable)
    static UCallbackProxyCreateWorkshopItemCustom* SteamWorkshop_CreateItemCustom(const FSteamWorkshopUpdateDetailsCustom& itemDetails);
    
};

