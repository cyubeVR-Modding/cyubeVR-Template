#pragma once
#include "CoreMinimal.h"
#include "FileWriteAsyncMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "FileWriteAsyncDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreFileWriteAsync.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFileWriteAsyncDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFileWriteAsyncMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFileWriteAsync();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& File, TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

