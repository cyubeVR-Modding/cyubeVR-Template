#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "AddPromoItemDelegateDelegate.h"
#include "AddPromoItemMinimalDelegateDelegate.h"
#include "UWorksSteamItemDef.h"
#include "UWorksRequestWebAddPromoItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddPromoItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddPromoItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAddPromoItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

