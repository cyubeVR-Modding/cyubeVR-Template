#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetItemDailyRevenueDelegateDelegate.h"
#include "GetItemDailyRevenueNode.generated.h"

class UGetItemDailyRevenueNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDailyRevenueDelegate Completed;
    
    UGetItemDailyRevenueNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetItemDailyRevenueNode* GetItemDailyRevenueNode(const FString& Key, int32 AppID, const FString& ItemId, int32 DateStart, int32 DateEnd);
    
};

