#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForAllItemsResultCustom.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForAllItemsResultCustom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMorePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    CYUBEVR_API FQueryWorkshopForAllItemsResultCustom();
};

