#include "SteamWorkshopInterface.h"

USteamWorkshopInterface::USteamWorkshopInterface() {
}

void USteamWorkshopInterface::SteamWorkshop_GetSubscribedItemsCustom(const int32 maxNumItemsToReturn, TArray<FString>& outItems) {
}

TArray<int32> USteamWorkshopInterface::SteamWorkshop_GetItemStateCustom(const FString& ItemId) {
    return TArray<int32>();
}

void USteamWorkshopInterface::SteamWorkshop_ActivateGameOverlayToWorkshopItemCustom(const FString& ItemId) {
}

void USteamWorkshopInterface::SteamGeneral_ActivateGameOverlayToWebPageCustom(const FString& webpage) {
}

bool USteamWorkshopInterface::IsSteamInitializedCustom() {
    return false;
}


