#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "ReportAbuseDelegateDelegate.h"
#include "ReportAbuseNode.generated.h"

class UReportAbuseNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UReportAbuseNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportAbuseDelegate Completed;
    
    UReportAbuseNode();

    UFUNCTION(BlueprintCallable)
    static UReportAbuseNode* ReportAbuseNode(const FString& Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, const FString& Description, const FString& GID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

