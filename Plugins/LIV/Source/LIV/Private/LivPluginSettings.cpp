#include "LivPluginSettings.h"
#include "LivCaptureMeshClipPlanePostProcess.h"

ULivPluginSettings::ULivPluginSettings() {
    this->CaptureMethod = ULivCaptureMeshClipPlanePostProcess::StaticClass();
}

