#pragma once
#include "CoreMinimal.h"
#include "EUWorksLobbyComparison.generated.h"

UENUM(BlueprintType)
enum class EUWorksLobbyComparison : uint8 {
    EqualToOrLessThan,
    LessThan,
    Equal,
    GreaterThan,
    EqualToOrGreaterThan,
    NotEqual,
};

