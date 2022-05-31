#pragma once
#include "CoreMinimal.h"
#include "EBPHMDDeviceType.generated.h"

UENUM(BlueprintType)
enum class EBPHMDDeviceType : uint8 {
    DT_OculusHMD,
    DT_PSVR,
    DT_ES2GenericStereoMesh,
    DT_SteamVR,
    DT_GearVR,
    DT_GoogleVR,
    DT_AppleARKit,
    DT_GoogleARCore,
    DT_Unknown,
    DT_MAX UMETA(Hidden),
};

