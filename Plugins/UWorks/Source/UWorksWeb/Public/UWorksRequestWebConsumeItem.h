#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "ConsumeItemMinimalDelegateDelegate.h"
#include "ConsumeItemDelegateDelegate.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksRequestWebConsumeItem.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebConsumeItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FConsumeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FConsumeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebConsumeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

