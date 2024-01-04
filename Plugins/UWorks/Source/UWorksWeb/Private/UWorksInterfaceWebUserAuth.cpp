#include "UWorksInterfaceWebUserAuth.h"

UUWorksInterfaceWebUserAuth::UUWorksInterfaceWebUserAuth() {
}

void UUWorksInterfaceWebUserAuth::AuthenticateUserTicketMinimal(const FString& Key, int32 AppID, const FString& Ticket, const FAuthenticateUserTicketMinimalDelegate& Delegate) {
}

UUWorksRequestWebAuthenticateUserTicket* UUWorksInterfaceWebUserAuth::AuthenticateUserTicket() {
    return NULL;
}

void UUWorksInterfaceWebUserAuth::AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey, const FAuthenticateUserMinimalDelegate& Delegate) {
}

UUWorksRequestWebAuthenticateUser* UUWorksInterfaceWebUserAuth::AuthenticateUser() {
    return NULL;
}


