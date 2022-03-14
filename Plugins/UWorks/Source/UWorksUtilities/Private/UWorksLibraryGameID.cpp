#include "UWorksLibraryGameID.h"

void UUWorksLibraryGameID::SetIdentifier(FUWorksGameID& GameID, const FString& Identifier) {
}

void UUWorksLibraryGameID::Reset(FUWorksGameID& GameID) {
}

bool UUWorksLibraryGameID::IsValid(FUWorksGameID GameID) {
    return false;
}

bool UUWorksLibraryGameID::IsSteamApp(FUWorksGameID GameID) {
    return false;
}

bool UUWorksLibraryGameID::IsShortcut(FUWorksGameID GameID) {
    return false;
}

bool UUWorksLibraryGameID::IsP2PFile(FUWorksGameID GameID) {
    return false;
}

bool UUWorksLibraryGameID::IsMod(FUWorksGameID GameID) {
    return false;
}

bool UUWorksLibraryGameID::IsIdenticalWith(FUWorksGameID A, FUWorksGameID B) {
    return false;
}

int32 UUWorksLibraryGameID::GetModID(FUWorksGameID GameID) {
    return 0;
}

FString UUWorksLibraryGameID::GetIdentifier(FUWorksGameID GameID) {
    return TEXT("");
}

int32 UUWorksLibraryGameID::GetAppID(FUWorksGameID GameID) {
    return 0;
}

FUWorksGameID UUWorksLibraryGameID::ConstructFromParametersC(int32 AppID, int32 ModID) {
    return FUWorksGameID{};
}

FUWorksGameID UUWorksLibraryGameID::ConstructFromParametersB(int32 AppID) {
    return FUWorksGameID{};
}

FUWorksGameID UUWorksLibraryGameID::ConstructFromParametersA(const FString& Identifier) {
    return FUWorksGameID{};
}

UUWorksLibraryGameID::UUWorksLibraryGameID() {
}

