#include "SteamGeneralLibrary.h"

int32 USteamGeneralLibrary::Uint64Array_Remove(TArray<FUInt64>& Values, FUInt64 Value) {
    return 0;
}

int32 USteamGeneralLibrary::Uint64Array_Find(const TArray<FUInt64>& Values, FUInt64 Value) {
    return 0;
}

bool USteamGeneralLibrary::Uint64Array_Contains(const TArray<FUInt64>& Values, FUInt64 Value) {
    return false;
}

int32 USteamGeneralLibrary::Uint64Array_AddUnique(TArray<FUInt64>& Values, FUInt64 Value) {
    return 0;
}

int32 USteamGeneralLibrary::Uint32Array_Remove(TArray<FUInt32>& Values, FUInt32 Value) {
    return 0;
}

int32 USteamGeneralLibrary::Uint32Array_Find(const TArray<FUInt32>& Values, FUInt32 Value) {
    return 0;
}

bool USteamGeneralLibrary::Uint32Array_Contains(const TArray<FUInt32>& Values, FUInt32 Value) {
    return false;
}

int32 USteamGeneralLibrary::Uint32Array_AddUnique(TArray<FUInt32>& Values, FUInt32 Value) {
    return 0;
}

FString USteamGeneralLibrary::ToString_UInt64(const FUInt64& Value) {
    return TEXT("");
}

FString USteamGeneralLibrary::ToString_UInt32(const FUInt32& Value) {
    return TEXT("");
}

FString USteamGeneralLibrary::ToString_SteamItemId(const FSteamUGCItemId& ID) {
    return TEXT("");
}

FString USteamGeneralLibrary::ToString_SteamDepotId(const FSteamDepotId& ID) {
    return TEXT("");
}

FString USteamGeneralLibrary::ToString_SteamAppId(const FSteamAppId& ID) {
    return TEXT("");
}

bool USteamGeneralLibrary::SteamUpdateHandle_IsValid(const FSteamUGCUpdateHandle& Handle) {
    return false;
}

int32 USteamGeneralLibrary::SteamUGCItemIdArray_Remove(TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value) {
    return 0;
}

int32 USteamGeneralLibrary::SteamUGCItemIdArray_Find(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value) {
    return 0;
}

bool USteamGeneralLibrary::SteamUGCItemIdArray_Contains(const TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value) {
    return false;
}

int32 USteamGeneralLibrary::SteamUGCItemIdArray_AddUnique(TArray<FSteamUGCItemId>& Values, FSteamUGCItemId Value) {
    return 0;
}

bool USteamGeneralLibrary::SteamUGCHandle_IsValid(const FSteamUGCHandle& Handle) {
    return false;
}

bool USteamGeneralLibrary::SteamQueryHandle_IsValid(const FSteamUGCQueryHandle& Handle) {
    return false;
}

EPersonaStateBP USteamGeneralLibrary::SteamGeneral_GetUserState() {
    return EPersonaStateBP::PS_Offline;
}

FString USteamGeneralLibrary::SteamGeneral_GetUserName() {
    return TEXT("");
}

EPersonaStateBP USteamGeneralLibrary::SteamGeneral_GetFriendState(FUInt64 steamUserId) {
    return EPersonaStateBP::PS_Offline;
}

FString USteamGeneralLibrary::SteamGeneral_GetFriendName(FUInt64 steamUserId) {
    return TEXT("");
}

bool USteamGeneralLibrary::SteamGeneral_ActivateGameOverlayToWebPage(const FString& webpage) {
    return false;
}

int32 USteamGeneralLibrary::SteamDepotIdArray_Remove(TArray<FSteamDepotId>& Values, FSteamDepotId Value) {
    return 0;
}

int32 USteamGeneralLibrary::SteamDepotIdArray_Find(const TArray<FSteamDepotId>& Values, FSteamDepotId Value) {
    return 0;
}

bool USteamGeneralLibrary::SteamDepotIdArray_Contains(const TArray<FSteamDepotId>& Values, FSteamDepotId Value) {
    return false;
}

int32 USteamGeneralLibrary::SteamDepotIdArray_AddUnique(TArray<FSteamDepotId>& Values, FSteamDepotId Value) {
    return 0;
}

bool USteamGeneralLibrary::SteamDelegate_OnGameOverlayActivated_Unbind(FSteamDelegateOnGameOverlayActivatedDyn delegateToCall) {
    return false;
}

bool USteamGeneralLibrary::SteamDelegate_OnGameOverlayActivated_Bind(FSteamDelegateOnGameOverlayActivatedDyn delegateToCall) {
    return false;
}

FString USteamGeneralLibrary::SteamConvertLanguageToLanguageCode(ESteamSupportedLanguages Language) {
    return TEXT("");
}

int32 USteamGeneralLibrary::SteamAppIdArray_Remove(TArray<FSteamAppId>& Values, FSteamAppId Value) {
    return 0;
}

int32 USteamGeneralLibrary::SteamAppIdArray_Find(const TArray<FSteamAppId>& Values, FSteamAppId Value) {
    return 0;
}

bool USteamGeneralLibrary::SteamAppIdArray_Contains(const TArray<FSteamAppId>& Values, FSteamAppId Value) {
    return false;
}

int32 USteamGeneralLibrary::SteamAppIdArray_AddUnique(TArray<FSteamAppId>& Values, FSteamAppId Value) {
    return 0;
}

bool USteamGeneralLibrary::NotEqual_UInt64(FUInt64 A, FUInt64 B) {
    return false;
}

bool USteamGeneralLibrary::NotEqual_UInt32(FUInt32 A, FUInt32 B) {
    return false;
}

bool USteamGeneralLibrary::NotEqual_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B) {
    return false;
}

bool USteamGeneralLibrary::NotEqual_SteamDepotId(FSteamDepotId A, FSteamDepotId B) {
    return false;
}

bool USteamGeneralLibrary::NotEqual_SteamAppId(FSteamAppId A, FSteamAppId B) {
    return false;
}

bool USteamGeneralLibrary::IsSteamInitialized() {
    return false;
}

FSteamAppId USteamGeneralLibrary::GetSteamAppId() {
    return FSteamAppId{};
}

FUInt64 USteamGeneralLibrary::FromString_UInt64(const FString& Value) {
    return FUInt64{};
}

FUInt32 USteamGeneralLibrary::FromString_UInt32(const FString& Value) {
    return FUInt32{};
}

bool USteamGeneralLibrary::Equal_UInt64(FUInt64 A, FUInt64 B) {
    return false;
}

bool USteamGeneralLibrary::Equal_UInt32(FUInt32 A, FUInt32 B) {
    return false;
}

bool USteamGeneralLibrary::Equal_SteamItemId(FSteamUGCItemId A, FSteamUGCItemId B) {
    return false;
}

bool USteamGeneralLibrary::Equal_SteamDepotId(FSteamDepotId A, FSteamDepotId B) {
    return false;
}

bool USteamGeneralLibrary::Equal_SteamAppId(FSteamAppId A, FSteamAppId B) {
    return false;
}

bool USteamGeneralLibrary::BreakUInt64(const FUInt64& InVal, int32& OutVal) {
    return false;
}

bool USteamGeneralLibrary::BreakUInt32(const FUInt32& InVal, int32& OutVal) {
    return false;
}

USteamGeneralLibrary::USteamGeneralLibrary() {
}

