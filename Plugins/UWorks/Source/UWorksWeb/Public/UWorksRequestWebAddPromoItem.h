#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamItemDef.h"
#include "AddPromoItemMinimalDelegateDelegate.h"
#include "AddPromoItemDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebAddPromoItem.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddPromoItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddPromoItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAddPromoItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemDef ItemDefID, const FString& ItemPropsJSON, FUWorksSteamID SteamID, bool bNotify, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

