#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksUsers.h"
#include "UWorksTitle.h"
#include "UWorksSteamID.h"
#include "UpdateSessionNode.generated.h"

class UUpdateSessionNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUpdateSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate Completed;
    
    UUpdateSessionNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateSessionNode* UpdateSessionNode(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

