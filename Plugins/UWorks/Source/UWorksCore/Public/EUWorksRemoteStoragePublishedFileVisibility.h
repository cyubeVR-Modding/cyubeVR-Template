#pragma once
#include "CoreMinimal.h"
#include "EUWorksRemoteStoragePublishedFileVisibility.generated.h"

UENUM(BlueprintType)
enum class EUWorksRemoteStoragePublishedFileVisibility : uint8 {
    Public,
    FriendsOnly,
    Private,
};

