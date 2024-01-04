#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EntryData.h"
#include "Templates/SubclassOf.h"
#include "BenchmarkLeaderboardsCPP.generated.h"

class ULeaderboardEntryCPP;
class UScrollBox;

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
    void OpenSteamOverlayToDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool GetOwnEntryResultData(FEntryData& OwnResultEntryData);
    
    UFUNCTION(BlueprintCallable)
    void GetAverageDeviation(float& Difference);
    
    UFUNCTION(BlueprintCallable)
    void DeleteOwnEntryResult();
    
};

