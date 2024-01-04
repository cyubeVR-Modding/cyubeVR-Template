#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "DeleteAccountDelegateDelegate.h"
#include "DeleteAccountNode.generated.h"

class UDeleteAccountNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UDeleteAccountNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteAccountDelegate Completed;
    
    UDeleteAccountNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteAccountNode* DeleteAccountNode(const FString& Key, FUWorksSteamID SteamID);
    
};

