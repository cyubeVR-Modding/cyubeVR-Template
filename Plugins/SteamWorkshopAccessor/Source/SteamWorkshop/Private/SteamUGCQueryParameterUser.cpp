#include "SteamUGCQueryParameterUser.h"

FSteamUGCQueryParameterUser::FSteamUGCQueryParameterUser() {
    this->list = EUserUGCListBP::L_Published;
    this->Type = EUGCMatchingUGCTypeBP::T_Items;
    this->sortOrder = EUserUGCListSortOrderBP::SO_CreationOrderDesc;
}

