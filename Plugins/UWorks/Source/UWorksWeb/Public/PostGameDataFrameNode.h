#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "PostGameDataFrameDelegateDelegate.h"
#include "PostGameDataFrameNode.generated.h"

class UPostGameDataFrameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UPostGameDataFrameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameDataFrameDelegate Completed;
    
    UPostGameDataFrameNode();

    UFUNCTION(BlueprintCallable)
    static UPostGameDataFrameNode* PostGameDataFrameNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& BroadcastID, const FString& FrameData);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

