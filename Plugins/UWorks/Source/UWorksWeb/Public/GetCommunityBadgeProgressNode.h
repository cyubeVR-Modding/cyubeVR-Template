#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetCommunityBadgeProgressDelegateDelegate.h"
#include "GetCommunityBadgeProgressNode.generated.h"

class UGetCommunityBadgeProgressNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressDelegate Completed;
    
    UGetCommunityBadgeProgressNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCommunityBadgeProgressNode* GetCommunityBadgeProgressNode(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID);
    
};

