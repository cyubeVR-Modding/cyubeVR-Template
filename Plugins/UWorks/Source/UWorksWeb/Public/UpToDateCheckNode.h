#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UpToDateCheckDelegateDelegate.h"
#include "UpToDateCheckNode.generated.h"

class UUpToDateCheckNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUpToDateCheckNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpToDateCheckDelegate Completed;
    
    UUpToDateCheckNode();
    UFUNCTION(BlueprintCallable)
    static UUpToDateCheckNode* UpToDateCheckNode(int32 AppID, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

