#include "GetOwnedGamesNode.h"

class UGetOwnedGamesNode;

void UGetOwnedGamesNode::OnRequestCompleted(bool bSuccessful, const FString& Content) {
}

UGetOwnedGamesNode* UGetOwnedGamesNode::GetOwnedGamesNode(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter) {
    return NULL;
}

UGetOwnedGamesNode::UGetOwnedGamesNode() {
}

