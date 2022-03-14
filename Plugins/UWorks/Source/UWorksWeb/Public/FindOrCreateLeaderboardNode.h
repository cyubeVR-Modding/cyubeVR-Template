#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FindOrCreateLeaderboardDelegateDelegate2.h"
#include "FindOrCreateLeaderboardNode.generated.h"

class UFindOrCreateLeaderboardNode;

UCLASS()
class UWORKSWEB_API UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardDelegate Completed;
    
    UFindOrCreateLeaderboardNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    
};

