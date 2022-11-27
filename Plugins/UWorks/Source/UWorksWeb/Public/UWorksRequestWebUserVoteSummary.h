#pragma once
#include "CoreMinimal.h"
#include "UserVoteSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UserVoteSummaryDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebUserVoteSummary.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserVoteSummaryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserVoteSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUserVoteSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

