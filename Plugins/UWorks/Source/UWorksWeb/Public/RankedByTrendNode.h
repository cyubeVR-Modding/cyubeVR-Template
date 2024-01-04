#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "RankedByTrendDelegateDelegate.h"
#include "RankedByTrendNode.generated.h"

class URankedByTrendNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URankedByTrendNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankedByTrendDelegate Completed;
    
    URankedByTrendNode();

    UFUNCTION(BlueprintCallable)
    static URankedByTrendNode* RankedByTrendNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

