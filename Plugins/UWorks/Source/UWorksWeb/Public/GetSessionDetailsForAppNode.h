#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetSessionDetailsForAppDelegateDelegate.h"
#include "UWorksSessions.h"
#include "GetSessionDetailsForAppNode.generated.h"

class UGetSessionDetailsForAppNode;

UCLASS()
class UWORKSWEB_API UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetSessionDetailsForAppDelegate Completed;
    
    UGetSessionDetailsForAppNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSessionDetailsForAppNode* GetSessionDetailsForAppNode(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language);
    
};

