#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamItemInstanceID.h"
#include "UWorksSteamItemDef.h"
#include "EUWorksSteamItemFlags.h"
#include "UWorksSteamItemDetails.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksSteamItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUWorksSteamItemInstanceID InstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUWorksSteamItemDef Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUWorksSteamItemFlags> Flags;
    
    FUWorksSteamItemDetails();
};

