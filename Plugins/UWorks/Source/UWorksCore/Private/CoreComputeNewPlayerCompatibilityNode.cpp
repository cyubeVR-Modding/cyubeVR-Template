#include "CoreComputeNewPlayerCompatibilityNode.h"

UCoreComputeNewPlayerCompatibilityNode::UCoreComputeNewPlayerCompatibilityNode() {
}

void UCoreComputeNewPlayerCompatibilityNode::OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate) {
}

UCoreComputeNewPlayerCompatibilityNode* UCoreComputeNewPlayerCompatibilityNode::ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer) {
    return NULL;
}


