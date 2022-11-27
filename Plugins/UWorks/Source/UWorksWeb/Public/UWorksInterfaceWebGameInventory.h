#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "SupportGetAssetHistoryMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.h"
#include "GetUserHistoryMinimalDelegateDelegate.h"
#include "GetHistoryCommandDetailsMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebGameInventory.generated.h"

class UUWorksRequestWebHistoryExecuteCommands;
class UUWorksRequestWebSupportGetAssetHistory;
class UUWorksRequestWebGetUserHistory;
class UUWorksRequestWebGetHistoryCommandDetails;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebGameInventory();
    UFUNCTION(BlueprintCallable)
    static void SupportGetAssetHistoryMinimal(const FString& Key, int32 AppID, const FString& AssetID, const FString& ContextID, const FSupportGetAssetHistoryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSupportGetAssetHistory* SupportGetAssetHistory();
    
    UFUNCTION(BlueprintCallable)
    static void HistoryExecuteCommandsMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, const FString& ActorId, const FHistoryExecuteCommandsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebHistoryExecuteCommands* HistoryExecuteCommands();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserHistoryMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& ContextID, int32 StartTime, int32 EndTime, const FGetUserHistoryMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUserHistory* GetUserHistory();
    
    UFUNCTION(BlueprintCallable)
    static void GetHistoryCommandDetailsMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments, const FGetHistoryCommandDetailsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetHistoryCommandDetails* GetHistoryCommandDetails();
    
};

