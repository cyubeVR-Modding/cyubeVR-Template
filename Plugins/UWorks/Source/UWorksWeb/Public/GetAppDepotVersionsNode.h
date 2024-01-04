#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppDepotVersionsDelegateDelegate.h"
#include "GetAppDepotVersionsNode.generated.h"

class UGetAppDepotVersionsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppDepotVersionsDelegate Completed;
    
    UGetAppDepotVersionsNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppDepotVersionsNode* GetAppDepotVersionsNode(const FString& Key, int32 AppID);
    
};

