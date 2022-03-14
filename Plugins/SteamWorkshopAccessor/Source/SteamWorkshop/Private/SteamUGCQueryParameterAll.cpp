#include "SteamUGCQueryParameterAll.h"

FSteamUGCQueryParameterAll::FSteamUGCQueryParameterAll() {
    this->rankedByTrendDays = 0;
    this->bMatchAnyTag = false;
    this->queryType = EUGCQueryBP::UQ_RankedByVote;
    this->fileType = EUGCMatchingUGCTypeBP::T_Items;
}

