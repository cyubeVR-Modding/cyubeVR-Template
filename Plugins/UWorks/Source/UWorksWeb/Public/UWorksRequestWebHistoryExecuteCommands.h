#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "HistoryExecuteCommandsDelegateDelegate.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.h"
#include "UWorksRequestWebHistoryExecuteCommands.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FHistoryExecuteCommandsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebHistoryExecuteCommands();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

