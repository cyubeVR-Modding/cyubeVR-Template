#pragma once
#include "CoreMinimal.h"
#include "SteamWorkshopUpdateDetailsCustom.h"
#include "CreateWorkshopItemResultCustom.generated.h"

USTRUCT(BlueprintType)
struct FCreateWorkshopItemResultCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamWorkshopUpdateDetailsCustom itemDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString workshopItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    CYUBEVR_API FCreateWorkshopItemResultCustom();
};

