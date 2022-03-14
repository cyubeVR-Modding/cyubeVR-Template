#include "UWorksLibrarySteamID.h"

void UUWorksLibrarySteamID::SetUniverse(FUWorksSteamID& SteamID, EUWorksUniverse Universe) {
}

void UUWorksLibrarySteamID::SetParametersC(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance) {
}

void UUWorksLibrarySteamID::SetParametersB(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID) {
}

void UUWorksLibrarySteamID::SetParametersA(FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& Identifier) {
}

void UUWorksLibrarySteamID::SetIdentifier(FUWorksSteamID& SteamID, const FString& Identifier) {
}

void UUWorksLibrarySteamID::SetAccountInstance(FUWorksSteamID& SteamID, const FString& AccountInstance) {
}

void UUWorksLibrarySteamID::SetAccountID(FUWorksSteamID& SteamID, const FString& AccountID) {
}

bool UUWorksLibrarySteamID::IsValid(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsPersistentGameServerAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsLobby(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsIndividualAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsIdenticalWith(FUWorksSteamID A, FUWorksSteamID B) {
    return false;
}

bool UUWorksLibrarySteamID::IsGameServerAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsContentServerAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsConsoleUserAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsClanAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsChatAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsBlankAnonAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsAnonUserAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsAnonGameServerAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::IsAnonAccount(FUWorksSteamID SteamID) {
    return false;
}

bool UUWorksLibrarySteamID::HasNoIndividualInstance(FUWorksSteamID SteamID) {
    return false;
}

EUWorksUniverse UUWorksLibrarySteamID::GetUniverse(FUWorksSteamID SteamID) {
    return EUWorksUniverse::Invalid;
}

FString UUWorksLibrarySteamID::GetStaticAccountKey(FUWorksSteamID SteamID) {
    return TEXT("");
}

FString UUWorksLibrarySteamID::GetIdentifier(FUWorksSteamID SteamID) {
    return TEXT("");
}

EUWorksAccountType UUWorksLibrarySteamID::GetAccountType(FUWorksSteamID SteamID) {
    return EUWorksAccountType::Invalid;
}

FString UUWorksLibrarySteamID::GetAccountInstance(FUWorksSteamID SteamID) {
    return TEXT("");
}

FString UUWorksLibrarySteamID::GetAccountID(FUWorksSteamID SteamID) {
    return TEXT("");
}

void UUWorksLibrarySteamID::CreateBlankAnonUserLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe) {
}

void UUWorksLibrarySteamID::CreateBlankAnonLogon(FUWorksSteamID& SteamID, EUWorksUniverse Universe) {
}

FUWorksSteamID UUWorksLibrarySteamID::ConstructFromParametersC(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance) {
    return FUWorksSteamID{};
}

FUWorksSteamID UUWorksLibrarySteamID::ConstructFromParametersB(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID) {
    return FUWorksSteamID{};
}

FUWorksSteamID UUWorksLibrarySteamID::ConstructFromParametersA(const FString& Identifier) {
    return FUWorksSteamID{};
}

void UUWorksLibrarySteamID::ClearIndividualInstance(FUWorksSteamID& SteamID) {
}

void UUWorksLibrarySteamID::Clear(FUWorksSteamID& SteamID) {
}

UUWorksLibrarySteamID::UUWorksLibrarySteamID() {
}

