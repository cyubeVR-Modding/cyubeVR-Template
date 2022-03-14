#include "SteamWorkshopItemDetails.h"

FSteamWorkshopItemDetails::FSteamWorkshopItemDetails() {
    this->Result = EResultBP::None;
    this->fileType = EWorkshopFileTypeBP::WFT_Community;
    this->Visibility = ESteamItemVisibility::SIV_Public;
    this->bItemIsBanned = false;
    this->bItemWasAcceptedByDevelopers = false;
    this->bTagsTruncated = false;
    this->primaryFileSize = 0;
    this->previewImageSize = 0;
    this->votesUp = 0;
    this->votesDown = 0;
    this->score = 0.00f;
}

