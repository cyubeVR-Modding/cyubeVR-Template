#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "UWorksRequestCore.h"
#include "PingDelegateDelegate.h"
#include "PingMinimalDelegateDelegate.h"
#include "UWorksRequestCorePing.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCorePing : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCorePing();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksServerInfo& Server);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

