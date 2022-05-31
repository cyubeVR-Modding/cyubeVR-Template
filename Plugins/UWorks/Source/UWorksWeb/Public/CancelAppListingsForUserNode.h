#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CancelAppListingsForUserDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CancelAppListingsForUserNode.generated.h"

class UCancelAppListingsForUserNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAppListingsForUserDelegate Completed;
    
    UCancelAppListingsForUserNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelAppListingsForUserNode* CancelAppListingsForUserNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bSynchronous);
    
};

