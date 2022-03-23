#pragma once
#include "CoreMinimal.h"
#include "SendQueryUGCRequestMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "SendQueryUGCRequestDelegateDelegate.h"
#include "UWorksUGCQueryHandle.h"
#include "UWorksRequestCoreSendQueryUGCRequest.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSendQueryUGCRequestDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSendQueryUGCRequestMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSendQueryUGCRequest();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksUGCQueryHandle UGCQueryHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksUGCQueryHandle& UGCQueryHandle, EUWorksResult& Result, int32& numResultsReturned, int32& TotalMatchingResults, bool& bCachedData);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

