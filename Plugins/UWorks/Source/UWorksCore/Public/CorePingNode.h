#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PingDelegateDelegate.h"
#include "UWorksServerInfo.h"
#include "CorePingNode.generated.h"

class UCorePingNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCorePingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingDelegate Completed;
    
    UCorePingNode();

    UFUNCTION(BlueprintCallable)
    static UCorePingNode* PingNode(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksServerInfo Server);
    
};

