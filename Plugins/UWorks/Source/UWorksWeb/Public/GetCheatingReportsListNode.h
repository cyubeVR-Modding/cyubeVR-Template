#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetCheatingReportsListDelegateDelegate.h"
#include "GetCheatingReportsListNode.generated.h"

class UGetCheatingReportsListNode;

UCLASS()
class UWORKSWEB_API UGetCheatingReportsListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCheatingReportsListDelegate Completed;
    
    UGetCheatingReportsListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCheatingReportsListNode* GetCheatingReportsListNode(const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, const FString& ReportIDMin);
    
};

