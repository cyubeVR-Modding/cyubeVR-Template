#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetFinalizedContributorsDelegateDelegate.h"
#include "GetFinalizedContributorsNode.generated.h"

class UGetFinalizedContributorsNode;

UCLASS()
class UWORKSWEB_API UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFinalizedContributorsDelegate Completed;
    
    UGetFinalizedContributorsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetFinalizedContributorsNode* GetFinalizedContributorsNode(const FString& Key, int32 AppID, int32 GameItemID);
    
};

