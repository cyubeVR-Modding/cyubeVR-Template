#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserHasLicenseForAppResult.generated.h"

UENUM()
enum class EUWorksUserHasLicenseForAppResult : uint8 {
    HasLicense,
    DoesNotHaveLicense,
    NoAuth,
};

