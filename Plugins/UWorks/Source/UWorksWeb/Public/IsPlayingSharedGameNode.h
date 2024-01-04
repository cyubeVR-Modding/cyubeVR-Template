#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "IsPlayingSharedGameDelegateDelegate.h"
#include "IsPlayingSharedGameNode.generated.h"

class UIsPlayingSharedGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsPlayingSharedGameDelegate Completed;
    
    UIsPlayingSharedGameNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UIsPlayingSharedGameNode* IsPlayingSharedGameNode(const FString& Key, FUWorksSteamID SteamID, int32 AppIDPlaying);
    
};

