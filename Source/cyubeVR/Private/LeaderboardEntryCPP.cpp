#include "LeaderboardEntryCPP.h"

ULeaderboardEntryCPP::ULeaderboardEntryCPP() : UUserWidget(FObjectInitializer::Get()) {
    this->TextBlock_Rank = NULL;
    this->TextBlock_Score = NULL;
    this->TextBlock_GPU = NULL;
    this->TextBlock_Headset = NULL;
    this->TextBlock_CPU = NULL;
    this->TextBlock_User = NULL;
    this->TextBlock_Resolution = NULL;
    this->Border_BackgroundColor = NULL;
}

