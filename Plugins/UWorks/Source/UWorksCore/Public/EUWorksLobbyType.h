#pragma once
#include "CoreMinimal.h"
#include "EUWorksLobbyType.generated.h"

UENUM()
enum class EUWorksLobbyType : uint8 {
    Private,
    FriendsOnly,
    Public,
    Invisible,
};

