#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetGlobalStatsForGameDelegateDelegate.h"
#include "GetGlobalStatsForGameNode.generated.h"

class UGetGlobalStatsForGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalStatsForGameDelegate Completed;
    
    UGetGlobalStatsForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGlobalStatsForGameNode* GetGlobalStatsForGameNode(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate);
    
};

