#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppBetasDelegateDelegate.h"
#include "GetAppBetasNode.generated.h"

class UGetAppBetasNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAppBetasNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppBetasDelegate Completed;
    
    UGetAppBetasNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppBetasNode* GetAppBetasNode(const FString& Key, int32 AppID);
    
};

