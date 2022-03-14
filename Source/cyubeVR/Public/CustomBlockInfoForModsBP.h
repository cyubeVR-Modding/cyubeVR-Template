#pragma once
#include "CoreMinimal.h"
#include "CustomBlockInfoForModsBP.generated.h"

USTRUCT(BlueprintType)
struct FCustomBlockInfoForModsBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreatorName;
    
    CYUBEVR_API FCustomBlockInfoForModsBP();
};

