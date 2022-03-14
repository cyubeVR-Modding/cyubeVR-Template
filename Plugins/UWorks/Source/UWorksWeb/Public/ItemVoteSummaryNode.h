#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ItemVoteSummaryDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "ItemVoteSummaryNode.generated.h"

class UItemVoteSummaryNode;

UCLASS()
class UWORKSWEB_API UItemVoteSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FItemVoteSummaryDelegate Completed;
    
    UItemVoteSummaryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UItemVoteSummaryNode* ItemVoteSummaryNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<int32> PublishedFileIDs);
    
};

