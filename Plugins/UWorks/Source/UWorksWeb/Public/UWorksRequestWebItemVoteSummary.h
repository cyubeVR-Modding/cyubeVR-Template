#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamID.h"
#include "ItemVoteSummaryMinimalDelegateDelegate.h"
#include "ItemVoteSummaryDelegateDelegate.h"
#include "UWorksRequestWebItemVoteSummary.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemVoteSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemVoteSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebItemVoteSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

