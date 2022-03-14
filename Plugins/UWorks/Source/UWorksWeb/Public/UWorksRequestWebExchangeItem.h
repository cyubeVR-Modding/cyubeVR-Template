#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "ExchangeItemMinimalDelegateDelegate.h"
#include "ExchangeItemDelegateDelegate.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamItemDef.h"
#include "UWorksRequestWebExchangeItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebExchangeItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FExchangeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FExchangeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebExchangeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32> MaterialsQuantity, FUWorksSteamItemDef OutputItemDefID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

