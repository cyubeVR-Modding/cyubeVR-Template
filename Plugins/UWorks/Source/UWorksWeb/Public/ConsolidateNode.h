#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ConsolidateDelegateDelegate.h"
#include "UWorksSteamItemDef.h"
#include "UWorksSteamID.h"
#include "ConsolidateNode.generated.h"

class UConsolidateNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UConsolidateNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsolidateDelegate Completed;
    
    UConsolidateNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UConsolidateNode* ConsolidateNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
    
};

