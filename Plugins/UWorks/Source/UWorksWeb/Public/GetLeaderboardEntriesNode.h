#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetLeaderboardEntriesDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetLeaderboardEntriesNode.generated.h"

class UGetLeaderboardEntriesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardEntriesDelegate Completed;
    
    UGetLeaderboardEntriesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetLeaderboardEntriesNode* GetLeaderboardEntriesNode(const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
    
};

