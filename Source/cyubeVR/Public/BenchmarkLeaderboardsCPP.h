#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "EntryData.h"
#include "BenchmarkLeaderboardsCPP.generated.h"

class UScrollBox;
class ULeaderboardEntryCPP;
class UGameInstance;

UCLASS(Blueprintable, EditInlineNew)
class CYUBEVR_API UBenchmarkLeaderboardsCPP : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULeaderboardEntryCPP*> FakeEntryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArraySetting;
    
    UBenchmarkLeaderboardsCPP();
    UFUNCTION(BlueprintCallable)
    void UpdateFakeList(int32 Offset, int32& AmountToShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNameOwnResult(bool ShowName);
    
    UFUNCTION(BlueprintCallable)
    void PopulateScrollBox(UGameInstance* GameInstance, const FUWorksSteamLeaderboardEntries& Entries, int32 EntryCount, const FString& CurrentHeadsetName, const FString& CurrentGPUName, int32 CurrentResX, int32 CurrentResY, int32 ActualResultThisRun);
    
    UFUNCTION(BlueprintCallable)
    void OpenSteamOverlayToDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool GetOwnEntryResultData(FEntryData& OwnResultEntryData);
    
    UFUNCTION(BlueprintCallable)
    void GetAverageDeviation(float& Difference);
    
    UFUNCTION(BlueprintCallable)
    void DeleteOwnEntryResult();
    
};

