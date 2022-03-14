#include "UWorksServerInfo.h"

FUWorksServerInfo::FUWorksServerInfo() {
    this->QueryPort = 0;
    this->ConnectionPort = 0;
    this->Ping = 0;
    this->bHadSuccessfulResponse = false;
    this->bDoNotRefresh = false;
    this->AppID = 0;
    this->Players = 0;
    this->MaxPlayers = 0;
    this->BotPlayers = 0;
    this->bPassword = false;
    this->BSecure = false;
    this->TimeLastPlayed = 0;
    this->ServerVersion = 0;
}

