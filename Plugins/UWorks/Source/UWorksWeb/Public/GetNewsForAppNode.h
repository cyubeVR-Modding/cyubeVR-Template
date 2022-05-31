#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetNewsForAppNode.generated.h"

class UGetNewsForAppNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetNewsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppDelegate Completed;
    
    UGetNewsForAppNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNewsForAppNode* GetNewsForAppNode(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
};

