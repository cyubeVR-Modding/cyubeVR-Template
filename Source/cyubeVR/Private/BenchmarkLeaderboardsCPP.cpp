#include "BenchmarkLeaderboardsCPP.h"

class UGameInstance;

void UBenchmarkLeaderboardsCPP::UpdateFakeList(int32 Offset, int32& AmountToShow) {
}

void UBenchmarkLeaderboardsCPP::SetShowNameOwnResult(bool ShowName) {
}

void UBenchmarkLeaderboardsCPP::PopulateScrollBox(UGameInstance* GameInstance, const FUWorksSteamLeaderboardEntries& Entries, int32 EntryCount, const FString& CurrentHeadsetName, const FString& CurrentGPUName, int32 CurrentResX, int32 CurrentResY, int32 ActualResultThisRun) {
}

void UBenchmarkLeaderboardsCPP::OpenSteamOverlayToDLC(int32 AppID) {
}

bool UBenchmarkLeaderboardsCPP::GetOwnEntryResultData(FEntryData& OwnResultEntryData) {
    return false;
}

void UBenchmarkLeaderboardsCPP::GetAverageDeviation(float& Difference) {
}

void UBenchmarkLeaderboardsCPP::DeleteOwnEntryResult() {
}

UBenchmarkLeaderboardsCPP::UBenchmarkLeaderboardsCPP() : UUserWidget(FObjectInitializer::Get()) {
    this->ScrollBox_Entries = NULL;
    this->EntryWidgetClass = NULL;
    this->ArraySetting = 1;
}

