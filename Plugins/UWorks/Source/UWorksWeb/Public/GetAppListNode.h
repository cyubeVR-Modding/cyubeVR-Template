#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppListDelegateDelegate.h"
#include "GetAppListNode.generated.h"

class UGetAppListNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAppListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppListDelegate Completed;
    
    UGetAppListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppListNode* GetAppListNode();
    
};

