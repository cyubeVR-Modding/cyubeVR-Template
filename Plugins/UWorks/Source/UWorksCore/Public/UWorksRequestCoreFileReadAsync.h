#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksRequestCore.h"
#include "FileReadAsyncDelegateDelegate.h"
#include "FileReadAsyncMinimalDelegateDelegate.h"
#include "UWorksRequestCoreFileReadAsync.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileReadAsyncDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileReadAsyncMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFileReadAsync();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& File, int32 Offset, int32 BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& Offset, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

