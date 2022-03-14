#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetFileDetailsDelegateDelegate.h"
#include "GetFileDetailsMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreGetFileDetails.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& fileSize, FString& FileSHA, TArray<int32>& FileFlags);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

