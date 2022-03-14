#include "VRGlobalSettings.h"

void UVRGlobalSettings::SaveControllerProfiles() {
}

void UVRGlobalSettings::OverwriteControllerProfile(FBPVRControllerProfile& OverwritingProfile, bool bSaveOutToConfig) {
}

bool UVRGlobalSettings::LoadControllerProfileByName(FName ControllerProfileName, bool bSetAsCurrentProfile) {
    return false;
}

bool UVRGlobalSettings::LoadControllerProfile(const FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile) {
    return false;
}

FName UVRGlobalSettings::GetCurrentProfileName(bool& bHadLoadedProfile) {
    return NAME_None;
}

FBPVRControllerProfile UVRGlobalSettings::GetCurrentProfile(bool& bHadLoadedProfile) {
    return FBPVRControllerProfile{};
}

TArray<FBPVRControllerProfile> UVRGlobalSettings::GetControllerProfiles() {
    return TArray<FBPVRControllerProfile>();
}

bool UVRGlobalSettings::GetControllerProfile(FName ControllerProfileName, FBPVRControllerProfile& OutProfile) {
    return false;
}

void UVRGlobalSettings::DeleteControllerProfile(FName ControllerProfileName, bool bSaveOutToConfig) {
}

FTransform UVRGlobalSettings::AdjustTransformByGivenControllerProfile(FBPVRControllerProfile& ControllerProfile, const FTransform& SocketTransform, bool bIsRightHand) {
    return FTransform{};
}

FTransform UVRGlobalSettings::AdjustTransformByControllerProfile(FName OptionalControllerProfileName, const FTransform& SocketTransform, bool bIsRightHand) {
    return FTransform{};
}

void UVRGlobalSettings::AddControllerProfile(FBPVRControllerProfile& NewProfile, bool bSaveOutToConfig) {
}

UVRGlobalSettings::UVRGlobalSettings() {
    this->MaxCCDPasses = 1;
    this->OneEuroMinCutoff = 2.00f;
    this->OneEuroCutoffSlope = 0.01f;
    this->OneEuroDeltaCutoff = 1.00f;
}

