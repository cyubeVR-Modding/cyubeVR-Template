#pragma once
#include "CoreMinimal.h"
#include "UWorksManager.h"
#include "RefreshCompleteDelegateDelegate.h"
#include "UWorksManagerNetwork.generated.h"

class UUWorksManagerNetwork;

UCLASS(BlueprintType)
class UWORKSUTILITIES_API UUWorksManagerNetwork : public UUWorksManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRefreshCompleteDelegate RefreshComplete;
    
    UUWorksManagerNetwork();
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNetDriverClassName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksManagerNetwork* GetManagerNetwork();
    
    UFUNCTION(BlueprintCallable)
    void CreateSessionUWorks(FName SessionName, int32 NumPublicConnections, bool bIsLANMatch);
    
};

