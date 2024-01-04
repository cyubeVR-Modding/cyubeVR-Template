#pragma once
#include "CoreMinimal.h"
#include "SteamWorkshopItemDetailsCustom.h"
#include "QueryWorkshopForUserItemsResultCustom.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForUserItemsResultCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numMatchingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMorePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamWorkshopItemDetailsCustom> items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    CYUBEVR_API FQueryWorkshopForUserItemsResultCustom();
};

