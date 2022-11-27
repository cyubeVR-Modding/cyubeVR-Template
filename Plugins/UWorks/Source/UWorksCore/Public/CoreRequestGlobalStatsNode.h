#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "RequestGlobalStatsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "CoreRequestGlobalStatsNode.generated.h"

class UCoreRequestGlobalStatsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalStatsDelegate Completed;
    
    UCoreRequestGlobalStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

