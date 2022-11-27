#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ConsumeItemMinimalDelegateDelegate.h"
#include "ConsumeItemDelegateDelegate.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebConsumeItem.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebConsumeItem : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebConsumeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

