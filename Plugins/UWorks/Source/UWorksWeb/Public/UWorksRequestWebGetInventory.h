#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetInventoryDelegateDelegate.h"
#include "GetInventoryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetInventory.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetInventory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetInventoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetInventoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetInventory();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

