#pragma once
#include "CoreMinimal.h"
#include "ConsumeItemDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamID.h"
#include "ConsumeItemNode.generated.h"

class UConsumeItemNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UConsumeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeItemDelegate Completed;
    
    UConsumeItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UConsumeItemNode* ConsumeItemNode(const FString& Key, int32 AppID, FUWorksSteamItemInstanceID ItemId, int32 Quantity, FUWorksSteamID SteamID, const FString& requestID);
    
};

