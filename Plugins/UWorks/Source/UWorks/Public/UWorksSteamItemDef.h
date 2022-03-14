#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamItemDef.generated.h"

USTRUCT(BlueprintType)
struct UWORKS_API FUWorksSteamItemDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FUWorksSteamItemDef();
};

