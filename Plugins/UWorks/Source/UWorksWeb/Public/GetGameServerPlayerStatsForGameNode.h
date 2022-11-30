#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.h"
#include "UWorksGameID.h"
#include "GetGameServerPlayerStatsForGameNode.generated.h"

class UGetGameServerPlayerStatsForGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameDelegate Completed;
    
    UGetGameServerPlayerStatsForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGameServerPlayerStatsForGameNode* GetGameServerPlayerStatsForGameNode(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
};

