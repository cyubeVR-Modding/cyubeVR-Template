#include "CoreGetFollowerCountNode.h"

class UCoreGetFollowerCountNode;

void UCoreGetFollowerCountNode::OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 Count) {
}

UCoreGetFollowerCountNode* UCoreGetFollowerCountNode::GetFollowerCountNode(FUWorksSteamID SteamID) {
    return NULL;
}

UCoreGetFollowerCountNode::UCoreGetFollowerCountNode() {
}

