#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "ItemVoteSummaryDelegateDelegate.h"
#include "ItemVoteSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWebItemVoteSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemVoteSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemVoteSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebItemVoteSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

