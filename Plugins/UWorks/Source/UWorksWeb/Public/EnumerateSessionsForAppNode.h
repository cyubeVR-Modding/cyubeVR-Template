#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "EnumerateSessionsForAppDelegateDelegate.h"
#include "EnumerateSessionsForAppNode.generated.h"

class UEnumerateSessionsForAppNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateSessionsForAppDelegate Completed;
    
    UEnumerateSessionsForAppNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEnumerateSessionsForAppNode* EnumerateSessionsForAppNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language);
    
};

