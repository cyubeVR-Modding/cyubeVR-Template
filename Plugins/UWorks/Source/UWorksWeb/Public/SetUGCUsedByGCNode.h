#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "SetUGCUsedByGCDelegateDelegate.h"
#include "SetUGCUsedByGCNode.generated.h"

class USetUGCUsedByGCNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetUGCUsedByGCNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetUGCUsedByGCDelegate Completed;
    
    USetUGCUsedByGCNode();

    UFUNCTION(BlueprintCallable)
    static USetUGCUsedByGCNode* SetUGCUsedByGCNode(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

