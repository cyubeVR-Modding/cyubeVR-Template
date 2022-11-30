#pragma once
#include "CoreMinimal.h"
#include "RequestStoreAuthURLMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "UWorksRequestCoreRequestStoreAuthURL.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestStoreAuthURL();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

