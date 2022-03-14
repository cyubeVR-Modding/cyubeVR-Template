#include "SteamUGCQueryParameterAllUserDetails.h"

FSteamUGCQueryParameterAllUserDetails::FSteamUGCQueryParameterAllUserDetails() {
    this->pageId = 0;
    this->Language = ESteamSupportedLanguages::Arabic;
    this->allowedCacheResponseTime = 0;
    this->numDaysPlaytime = 0;
    this->bReturnPreviewUrl = false;
    this->bReturnKeyValueTags = false;
    this->bReturnFullDescription = false;
    this->bReturnMetaData = false;
    this->bReturnChildIds = false;
    this->bReturnAdditionalPreviews = false;
}

