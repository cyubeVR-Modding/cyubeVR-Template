#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "CreateSessionDelegateDelegate.h"
#include "UWorksTitle.h"
#include "UWorksUsers.h"
#include "CreateSessionNode.generated.h"

class UCreateSessionNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCreateSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateSessionDelegate Completed;
    
    UCreateSessionNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCreateSessionNode* CreateSessionNode(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
};

