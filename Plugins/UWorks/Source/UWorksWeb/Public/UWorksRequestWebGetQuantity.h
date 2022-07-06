#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetQuantityDelegateDelegate.h"
#include "GetQuantityMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksSteamItemDef.h"
#include "UWorksRequestWebGetQuantity.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetQuantity : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetQuantityDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetQuantityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetQuantity();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamItemDef ItemDefID, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

