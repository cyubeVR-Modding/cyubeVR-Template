#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EnumerateFollowingListDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreEnumerateFollowingListNode.generated.h"

class UCoreEnumerateFollowingListNode;

UCLASS()
class UWORKSCORE_API UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateFollowingListDelegate Completed;
    
    UCoreEnumerateFollowingListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32 StartIndex);
    
};

