#include "UWorksSteamUGCDetails.h"

FUWorksSteamUGCDetails::FUWorksSteamUGCDetails() {
    this->Result = EUWorksResult::Unknown;
    this->fileType = EUWorksWorkshopFileType::Community;
    this->CreatorAppID = 0;
    this->ConsumerAppID = 0;
    this->TimeCreated = 0;
    this->TimeUpdated = 0;
    this->TimeAddedToUserList = 0;
    this->Visibility = EUWorksRemoteStoragePublishedFileVisibility::Public;
    this->bBanned = false;
    this->bAcceptedForUse = false;
    this->bTagsTruncated = false;
    this->fileSize = 0;
    this->PreviewFileSize = 0;
    this->votesUp = 0;
    this->votesDown = 0;
    this->score = 0.00f;
    this->numChildren = 0;
}

