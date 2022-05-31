#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetReportDelegateDelegate.h"
#include "EUWorksReportType.h"
#include "GetReportNode.generated.h"

class UGetReportNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetReportNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetReportDelegate Completed;
    
    UGetReportNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetReportNode* GetReportNode(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults);
    
};

