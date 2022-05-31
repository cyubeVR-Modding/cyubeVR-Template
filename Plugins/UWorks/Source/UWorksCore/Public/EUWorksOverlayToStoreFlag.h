#pragma once
#include "CoreMinimal.h"
#include "EUWorksOverlayToStoreFlag.generated.h"

UENUM(BlueprintType)
enum class EUWorksOverlayToStoreFlag : uint8 {
    None,
    AddToCart,
    AddToCartAndShow,
};

