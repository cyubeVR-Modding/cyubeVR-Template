#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserHasLicenseForAppResult.generated.h"

UENUM(BlueprintType)
enum class EUWorksUserHasLicenseForAppResult : uint8 {
    HasLicense,
    DoesNotHaveLicense,
    NoAuth,
};

