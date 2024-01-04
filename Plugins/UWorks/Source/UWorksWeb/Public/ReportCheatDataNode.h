#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "ReportCheatDataDelegateDelegate.h"
#include "ReportCheatDataNode.generated.h"

class UReportCheatDataNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UReportCheatDataNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCheatDataDelegate Completed;
    
    UReportCheatDataNode();

    UFUNCTION(BlueprintCallable)
    static UReportCheatDataNode* ReportCheatDataNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessID, int32 CheatProcessID, const FString& CheatParamA, const FString& CheatParamB);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

