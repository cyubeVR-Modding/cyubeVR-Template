#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetCheatingReportsDelegateDelegate.h"
#include "GetCheatingReportsNode.generated.h"

class UGetCheatingReportsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetCheatingReportsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCheatingReportsDelegate Completed;
    
    UGetCheatingReportsNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCheatingReportsNode* GetCheatingReportsNode(const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID);
    
};

