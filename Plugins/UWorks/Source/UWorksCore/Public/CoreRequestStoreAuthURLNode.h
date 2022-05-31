#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "CoreRequestStoreAuthURLNode.generated.h"

class UCoreRequestStoreAuthURLNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLDelegate Completed;
    
    UCoreRequestStoreAuthURLNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestStoreAuthURLNode* RequestStoreAuthURLNode(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& URL);
    
};

