#include "CoreJoinLobbyNode.h"

class UCoreJoinLobbyNode;

void UCoreJoinLobbyNode::OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse) {
}

UCoreJoinLobbyNode* UCoreJoinLobbyNode::JoinLobbyNode(FUWorksSteamID SteamIDLobby) {
    return NULL;
}

UCoreJoinLobbyNode::UCoreJoinLobbyNode() {
}

