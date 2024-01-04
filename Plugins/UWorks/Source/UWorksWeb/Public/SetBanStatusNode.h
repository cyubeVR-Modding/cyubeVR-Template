#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "SetBanStatusDelegateDelegate.h"
#include "SetBanStatusNode.generated.h"

class USetBanStatusNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetBanStatusNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetBanStatusDelegate Completed;
    
    USetBanStatusNode();

    UFUNCTION(BlueprintCallable)
    static USetBanStatusNode* SetBanStatusNode(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

