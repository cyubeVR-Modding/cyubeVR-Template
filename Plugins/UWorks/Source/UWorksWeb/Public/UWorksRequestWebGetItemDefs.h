#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetItemDefsMinimalDelegateDelegate.h"
#include "GetItemDefsDelegateDelegate.h"
#include "UWorksSteamItemDef.h"
#include "UWorksRequestWebGetItemDefs.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetItemDefsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetItemDefsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetItemDefs();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

