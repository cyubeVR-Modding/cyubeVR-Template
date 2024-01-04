#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "UserVoteSummaryDelegateDelegate.h"
#include "UserVoteSummaryNode.generated.h"

class UUserVoteSummaryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUserVoteSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserVoteSummaryDelegate Completed;
    
    UUserVoteSummaryNode();

    UFUNCTION(BlueprintCallable)
    static UUserVoteSummaryNode* UserVoteSummaryNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

