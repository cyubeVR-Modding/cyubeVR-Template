#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "RequestGlobalStatsDelegateDelegate.h"
#include "UWorksGameID.h"
#include "CoreRequestGlobalStatsNode.generated.h"

class UCoreRequestGlobalStatsNode;

UCLASS()
class UWORKSCORE_API UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalStatsDelegate Completed;
    
    UCoreRequestGlobalStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

