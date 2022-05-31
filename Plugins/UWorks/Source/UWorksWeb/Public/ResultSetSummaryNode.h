#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResultSetSummaryDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "ResultSetSummaryNode.generated.h"

class UResultSetSummaryNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UResultSetSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultSetSummaryDelegate Completed;
    
    UResultSetSummaryNode();
    UFUNCTION(BlueprintCallable)
    static UResultSetSummaryNode* ResultSetSummaryNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

