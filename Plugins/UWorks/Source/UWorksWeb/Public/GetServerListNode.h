#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetServerListDelegateDelegate.h"
#include "GetServerListNode.generated.h"

class UGetServerListNode;

UCLASS()
class UWORKSWEB_API UGetServerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerListDelegate Completed;
    
    UGetServerListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServerListNode* GetServerListNode(const FString& Key, const FString& Filter, int32 Limit);
    
};

