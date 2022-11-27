#include "UWorksInterfaceCoreUser.h"

class UAudioComponent;
class UUWorksRequestCoreRequestEncryptedAppTicket;
class UUWorksRequestCoreRequestStoreAuthURL;
class UUWorksInterfaceCoreUser;

EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreUser::UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID) {
    return EUWorksUserHasLicenseForAppResult::HasLicense;
}

void UUWorksInterfaceCoreUser::StopVoiceRecording() {
}

void UUWorksInterfaceCoreUser::StartVoiceRecording() {
}

void UUWorksInterfaceCoreUser::RequestStoreAuthURLMinimal(const FRequestStoreAuthURLMinimalDelegate& Completed, const FString& URL) {
}

UUWorksRequestCoreRequestStoreAuthURL* UUWorksInterfaceCoreUser::RequestStoreAuthURL() {
    return NULL;
}

void UUWorksInterfaceCoreUser::RequestEncryptedAppTicketMinimal(const FRequestEncryptedAppTicketMinimalDelegate& Completed, TArray<uint8> Buffer) {
}

UUWorksRequestCoreRequestEncryptedAppTicket* UUWorksInterfaceCoreUser::RequestEncryptedAppTicket() {
    return NULL;
}

UAudioComponent* UUWorksInterfaceCoreUser::GetVoiceChannel(int32 Index) {
    return NULL;
}

EUWorksVoiceResult UUWorksInterfaceCoreUser::GetVoice(TArray<uint8>& Data) {
    return EUWorksVoiceResult::OK;
}

UUWorksInterfaceCoreUser* UUWorksInterfaceCoreUser::GetUser() {
    return NULL;
}

FUWorksSteamID UUWorksInterfaceCoreUser::GetSteamID() {
    return FUWorksSteamID{};
}

int32 UUWorksInterfaceCoreUser::GetPlayerSteamLevel() {
    return 0;
}

FUWorksSteamUser UUWorksInterfaceCoreUser::GetHSteamUser() {
    return FUWorksSteamUser{};
}

int32 UUWorksInterfaceCoreUser::GetGameBadgeLevel(int32 Series, bool bFoil) {
    return 0;
}

bool UUWorksInterfaceCoreUser::GetEncryptedAppTicket(TArray<uint8>& Ticket) {
    return false;
}

FUWorksTicketHandle UUWorksInterfaceCoreUser::GetAuthSessionTicket(TArray<uint8>& Ticket) {
    return FUWorksTicketHandle{};
}

void UUWorksInterfaceCoreUser::EndAuthSession(FUWorksSteamID SteamID) {
}

EUWorksVoiceResult UUWorksInterfaceCoreUser::DecompressVoice(TArray<uint8> CompressedBuffer, TArray<uint8>& UncompressedBuffer) {
    return EUWorksVoiceResult::OK;
}

void UUWorksInterfaceCoreUser::CancelAuthTicket(FUWorksTicketHandle TicketHandle) {
}

bool UUWorksInterfaceCoreUser::BLoggedOn() {
    return false;
}

bool UUWorksInterfaceCoreUser::BIsTwoFactorEnabled() {
    return false;
}

bool UUWorksInterfaceCoreUser::BIsPhoneVerified() {
    return false;
}

bool UUWorksInterfaceCoreUser::BIsPhoneRequiringVerification() {
    return false;
}

bool UUWorksInterfaceCoreUser::BIsPhoneIdentifying() {
    return false;
}

bool UUWorksInterfaceCoreUser::BIsBehindNAT() {
    return false;
}

EUWorksBeginAuthSessionResult UUWorksInterfaceCoreUser::BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID) {
    return EUWorksBeginAuthSessionResult::OK;
}

void UUWorksInterfaceCoreUser::AdvertiseGame(FUWorksSteamID SteamIDGameServer, const FString& ServerIP, int32 ServerPort) {
}

UAudioComponent* UUWorksInterfaceCoreUser::AddBufferToVoiceChannel(TArray<uint8> Buffer, int32 Index) {
    return NULL;
}

UUWorksInterfaceCoreUser::UUWorksInterfaceCoreUser() {
}

