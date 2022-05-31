#include "LivPluginSettings.h"
#include "LivCaptureSingle.h"

ULivPluginSettings::ULivPluginSettings() {
    this->CaptureMethod = ULivCaptureSingle::StaticClass();
    this->bBackgroundOnly = false;
    this->bTransparency = false;
    this->PreExposure = 1.00f;
    this->bUseDebugCamera = false;
    this->DebugCameraHorizontalFOV = 90.00f;
    this->bUseDebugCameraClipPlane = false;
    this->bUseDebugFloorClipPlane = false;
    this->CaptureSource = SCS_FinalToneCurveHDR;
    this->SceneViewExtensionCaptureStage = ELivSceneViewExtensionCaptureStage::AfterFXAA;
    this->TrackingId = TEXT("B7F3E49EEK5YOEYHJOAA76IKZ4GKTXSW");
}

