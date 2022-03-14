#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "UWorksUsers.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksTitle.h"
#include "UpdateSessionNode.generated.h"

class UUpdateSessionNode;

UCLASS()
class UWORKSWEB_API UUpdateSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate Completed;
    
    UUpdateSessionNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateSessionNode* UpdateSessionNode(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

