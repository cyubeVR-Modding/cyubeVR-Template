#pragma once
#include "CoreMinimal.h"
#include "ModTutorialEntry.generated.h"

USTRUCT(BlueprintType)
struct FModTutorialEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    CYUBEVR_API FModTutorialEntry();
};

