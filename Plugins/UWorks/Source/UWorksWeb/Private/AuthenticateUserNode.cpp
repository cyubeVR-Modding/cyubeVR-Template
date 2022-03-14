#include "AuthenticateUserNode.h"

class UAuthenticateUserNode;

void UAuthenticateUserNode::OnRequestCompleted(bool bSuccessful, const FString& Content) {
}

UAuthenticateUserNode* UAuthenticateUserNode::AuthenticateUserNode(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey) {
    return NULL;
}

UAuthenticateUserNode::UAuthenticateUserNode() {
}

