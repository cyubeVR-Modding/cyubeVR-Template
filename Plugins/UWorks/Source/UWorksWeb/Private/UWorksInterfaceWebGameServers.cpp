#include "UWorksInterfaceWebGameServers.h"

class UUWorksRequestWebSetBanStatus;
class UUWorksRequestWebSetMemo;
class UUWorksRequestWebResetLoginToken;
class UUWorksRequestWebGetServerSteamIDsByIP;
class UUWorksRequestWebQueryLoginToken;
class UUWorksRequestWebGetServerIPsBySteamID;
class UUWorksRequestWebGetAccountPublicInfo;
class UUWorksRequestWebGetAccountList;
class UUWorksRequestWebDeleteAccount;
class UUWorksRequestWebCreateAccount;

void UUWorksInterfaceWebGameServers::SetMemoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& Memo, const FSetMemoMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetMemo* UUWorksInterfaceWebGameServers::SetMemo() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::SetBanStatusMinimal(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds, const FSetBanStatusMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetBanStatus* UUWorksInterfaceWebGameServers::SetBanStatus() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::ResetLoginTokenMinimal(const FString& Key, FUWorksSteamID SteamID, const FResetLoginTokenMinimalDelegate& Delegate) {
}

UUWorksRequestWebResetLoginToken* UUWorksInterfaceWebGameServers::ResetLoginToken() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::QueryLoginTokenMinimal(const FString& Key, const FString& LoginToken, const FQueryLoginTokenMinimalDelegate& Delegate) {
}

UUWorksRequestWebQueryLoginToken* UUWorksInterfaceWebGameServers::QueryLoginToken() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::GetServerSteamIDsByIPMinimal(const FString& Key, const FString& ServerIPs, const FGetServerSteamIDsByIPMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetServerSteamIDsByIP* UUWorksInterfaceWebGameServers::GetServerSteamIDsByIP() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::GetServerIPsBySteamIDMinimal(const FString& Key, FUWorksSteamID ServerSteamID, const FGetServerIPsBySteamIDMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetServerIPsBySteamID* UUWorksInterfaceWebGameServers::GetServerIPsBySteamID() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::GetAccountPublicInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetAccountPublicInfoMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAccountPublicInfo* UUWorksInterfaceWebGameServers::GetAccountPublicInfo() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::GetAccountListMinimal(const FString& Key, const FGetAccountListMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetAccountList* UUWorksInterfaceWebGameServers::GetAccountList() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::DeleteAccountMinimal(const FString& Key, FUWorksSteamID SteamID, const FDeleteAccountMinimalDelegate& Delegate) {
}

UUWorksRequestWebDeleteAccount* UUWorksInterfaceWebGameServers::DeleteAccount() {
    return NULL;
}

void UUWorksInterfaceWebGameServers::CreateAccountMinimal(const FString& Key, int32 AppID, const FString& Memo, const FCreateAccountMinimalDelegate& Delegate) {
}

UUWorksRequestWebCreateAccount* UUWorksInterfaceWebGameServers::CreateAccount() {
    return NULL;
}

UUWorksInterfaceWebGameServers::UUWorksInterfaceWebGameServers() {
}

