#pragma once
#include "CoreMinimal.h"
#include "EUWorksReportType.generated.h"

UENUM()
enum class EUWorksReportType : uint8 {
    None,
    GameSales,
    SteamStore,
    Settlement,
};

