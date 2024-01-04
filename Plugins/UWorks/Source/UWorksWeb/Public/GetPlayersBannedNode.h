#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPlayersBannedDelegateDelegate.h"
#include "GetPlayersBannedNode.generated.h"

class UGetPlayersBannedNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPlayersBannedNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayersBannedDelegate Completed;
    
    UGetPlayersBannedNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayersBannedNode* GetPlayersBannedNode(const FString& Key, int32 AppID);
    
};

