#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetFileDetailsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "GetFileDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestCoreGetFileDetails.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

