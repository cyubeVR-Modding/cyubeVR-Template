#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SetAppBuildLiveDelegateDelegate.h"
#include "SetAppBuildLiveNode.generated.h"

class USetAppBuildLiveNode;

UCLASS()
class UWORKSWEB_API USetAppBuildLiveNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetAppBuildLiveDelegate Completed;
    
    USetAppBuildLiveNode();
    UFUNCTION(BlueprintCallable)
    static USetAppBuildLiveNode* SetAppBuildLiveNode(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

