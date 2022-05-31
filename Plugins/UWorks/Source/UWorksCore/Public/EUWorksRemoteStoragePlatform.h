#pragma once
#include "CoreMinimal.h"
#include "EUWorksRemoteStoragePlatform.generated.h"

UENUM(BlueprintType)
enum class EUWorksRemoteStoragePlatform : uint8 {
    Windows,
    OSX,
    PS3,
    Linux,
    Reserved,
    All,
};

