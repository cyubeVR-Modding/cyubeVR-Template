#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetInventoryMinimalDelegateDelegate.h"
#include "GetInventoryDelegateDelegate.h"
#include "UWorksRequestWebGetInventory.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetInventory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetInventoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetInventoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetInventory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

