#include "CoreUploadLeaderboardScoreNode.h"

UCoreUploadLeaderboardScoreNode::UCoreUploadLeaderboardScoreNode() {
}

UCoreUploadLeaderboardScoreNode* UCoreUploadLeaderboardScoreNode::UploadLeaderboardScoreNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails) {
    return NULL;
}

void UCoreUploadLeaderboardScoreNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious) {
}


