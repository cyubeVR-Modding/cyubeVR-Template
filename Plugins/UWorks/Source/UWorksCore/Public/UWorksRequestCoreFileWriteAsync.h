#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FileWriteAsyncDelegateDelegate.h"
#include "FileWriteAsyncMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksRequestCoreFileWriteAsync.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileWriteAsyncDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

