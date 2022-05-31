#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAccountListDelegateDelegate.h"
#include "GetAccountListNode.generated.h"

class UGetAccountListNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAccountListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAccountListDelegate Completed;
    
    UGetAccountListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAccountListNode* GetAccountListNode(const FString& Key);
    
};

