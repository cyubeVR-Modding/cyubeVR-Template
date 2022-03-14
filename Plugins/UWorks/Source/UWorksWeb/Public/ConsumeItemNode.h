#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ConsumeItemDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksSteamItemInstanceID.h"
#include "ConsumeItemNode.generated.h"

class UConsumeItemNode;

UCLASS()
class UWORKSWEB_API UConsumeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FConsumeItemDelegate Completed;
    
    UConsumeItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UConsumeItemNode* ConsumeItemNode(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
};

