#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetNewsForAppAuthedDelegateDelegate.h"
#include "GetNewsForAppAuthedNode.generated.h"

class UGetNewsForAppAuthedNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppAuthedDelegate Completed;
    
    UGetNewsForAppAuthedNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNewsForAppAuthedNode* GetNewsForAppAuthedNode(const FString& Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
};

