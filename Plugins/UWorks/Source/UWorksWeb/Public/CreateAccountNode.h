#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreateAccountDelegateDelegate.h"
#include "CreateAccountNode.generated.h"

class UCreateAccountNode;

UCLASS()
class UWORKSWEB_API UCreateAccountNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateAccountDelegate Completed;
    
    UCreateAccountNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCreateAccountNode* CreateAccountNode(const FString& Key, int32 AppID, const FString& Memo);
    
};

