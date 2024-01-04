#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "QueryLoginTokenDelegateDelegate.h"
#include "QueryLoginTokenNode.generated.h"

class UQueryLoginTokenNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UQueryLoginTokenNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenDelegate Completed;
    
    UQueryLoginTokenNode();

    UFUNCTION(BlueprintCallable)
    static UQueryLoginTokenNode* QueryLoginTokenNode(const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

