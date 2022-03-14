#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SendQueryUGCRequestDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksUGCQueryHandle.h"
#include "CoreSendQueryUGCRequestNode.generated.h"

class UCoreSendQueryUGCRequestNode;

UCLASS()
class UWORKSCORE_API UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSendQueryUGCRequestDelegate Completed;
    
    UCoreSendQueryUGCRequestNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSendQueryUGCRequestNode* SendQueryUGCRequestNode(FUWorksUGCQueryHandle UGCQueryHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
    
};

