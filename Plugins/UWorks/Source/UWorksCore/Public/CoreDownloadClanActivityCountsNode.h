#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DownloadClanActivityCountsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreDownloadClanActivityCountsNode.generated.h"

class UCoreDownloadClanActivityCountsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadClanActivityCountsDelegate Completed;
    
    UCoreDownloadClanActivityCountsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);
    
};

