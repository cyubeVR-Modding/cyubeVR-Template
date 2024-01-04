#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamItemDef.h"
#include "GetItemDefsDelegateDelegate.h"
#include "GetItemDefsNode.generated.h"

class UGetItemDefsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetItemDefsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDefsDelegate Completed;
    
    UGetItemDefsNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetItemDefsNode* GetItemDefsNode(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
    
};

