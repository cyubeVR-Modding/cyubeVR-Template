#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksUGCQueryHandle.h"
#include "UWorksRequestCore.h"
#include "SendQueryUGCRequestDelegateDelegate.h"
#include "SendQueryUGCRequestMinimalDelegateDelegate.h"
#include "UWorksRequestCoreSendQueryUGCRequest.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSendQueryUGCRequestDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

