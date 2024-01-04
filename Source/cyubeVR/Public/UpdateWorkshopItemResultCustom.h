#pragma once
#include "CoreMinimal.h"
#include "UpdateWorkshopItemResultCustom.generated.h"

USTRUCT(BlueprintType)
struct FUpdateWorkshopItemResultCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString workshopItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    CYUBEVR_API FUpdateWorkshopItemResultCustom();
};

