#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "RankedByPublicationOrderDelegateDelegate.h"
#include "RankedByPublicationOrderNode.generated.h"

class URankedByPublicationOrderNode;

UCLASS()
class UWORKSWEB_API URankedByPublicationOrderNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRankedByPublicationOrderDelegate Completed;
    
    URankedByPublicationOrderNode();
    UFUNCTION(BlueprintCallable)
    static URankedByPublicationOrderNode* RankedByPublicationOrderNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

