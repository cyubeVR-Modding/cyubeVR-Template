#include "UWorksInterfaceCoreController.h"

class UUWorksInterfaceCoreController;

void UUWorksInterfaceCoreController::TriggerVibration(FUWorksControllerHandle ControllerHandle, int32 LeftSpeed, int32 RightSpeed) {
}

void UUWorksInterfaceCoreController::TriggerRepeatedHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec, int32 OffMicroSec, int32 Repeat, int32 Flags) {
}

void UUWorksInterfaceCoreController::TriggerHapticPulse(FUWorksControllerHandle ControllerHandle, EUWorksSteamControllerPad TargetPad, int32 DurationMicroSec) {
}

void UUWorksInterfaceCoreController::StopAnalogActionMomentum(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle Action) {
}

bool UUWorksInterfaceCoreController::Shutdown() {
    return false;
}

bool UUWorksInterfaceCoreController::ShowBindingPanel(FUWorksControllerHandle ControllerHandle) {
    return false;
}

void UUWorksInterfaceCoreController::SetLEDColor(FUWorksControllerHandle ControllerHandle, uint8 ColorR, uint8 ColorG, uint8 ColorB, TArray<EUWorksSteamControllerLEDFlag> Flags) {
}

void UUWorksInterfaceCoreController::RunFrame() {
}

bool UUWorksInterfaceCoreController::Init() {
    return false;
}

FString UUWorksInterfaceCoreController::GetStringForActionOrigin(EUWorksControllerActionOrigin Origin) {
    return TEXT("");
}

FUWorksControllerMotionData UUWorksInterfaceCoreController::GetMotionData(FUWorksControllerHandle ControllerHandle) {
    return FUWorksControllerMotionData{};
}

FString UUWorksInterfaceCoreController::GetGlyphForActionOrigin(EUWorksControllerActionOrigin Origin) {
    return TEXT("");
}

int32 UUWorksInterfaceCoreController::GetGamepadIndexForController(FUWorksControllerHandle ControllerHandle) {
    return 0;
}

int32 UUWorksInterfaceCoreController::GetDigitalActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut) {
    return 0;
}

FUWorksControllerDigitalActionHandle UUWorksInterfaceCoreController::GetDigitalActionHandle(const FString& ActionName) {
    return FUWorksControllerDigitalActionHandle{};
}

FUWorksControllerDigitalActionData UUWorksInterfaceCoreController::GetDigitalActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerDigitalActionHandle DigitalActionHandle) {
    return FUWorksControllerDigitalActionData{};
}

FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetCurrentActionSet(FUWorksControllerHandle ControllerHandle) {
    return FUWorksControllerActionSetHandle{};
}

FUWorksControllerHandle UUWorksInterfaceCoreController::GetControllerForGamepadIndex(int32 Index) {
    return FUWorksControllerHandle{};
}

UUWorksInterfaceCoreController* UUWorksInterfaceCoreController::GetController() {
    return NULL;
}

int32 UUWorksInterfaceCoreController::GetConnectedControllers(TArray<FUWorksControllerHandle>& HandlesOut) {
    return 0;
}

int32 UUWorksInterfaceCoreController::GetAnalogActionOrigins(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle, TArray<EUWorksControllerActionOrigin>& OriginsOut) {
    return 0;
}

FUWorksControllerAnalogActionHandle UUWorksInterfaceCoreController::GetAnalogActionHandle(const FString& ActionName) {
    return FUWorksControllerAnalogActionHandle{};
}

FUWorksControllerAnalogActionData UUWorksInterfaceCoreController::GetAnalogActionData(FUWorksControllerHandle ControllerHandle, FUWorksControllerAnalogActionHandle AnalogActionHandle) {
    return FUWorksControllerAnalogActionData{};
}

FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetActionSetHandle(const FString& ActionSetName) {
    return FUWorksControllerActionSetHandle{};
}

void UUWorksInterfaceCoreController::ActivateActionSet(FUWorksControllerHandle ControllerHandle, FUWorksControllerActionSetHandle ActionSetHandle) {
}

UUWorksInterfaceCoreController::UUWorksInterfaceCoreController() {
}

