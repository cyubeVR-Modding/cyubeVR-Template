#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TutorialData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    CYUBEVR_API FTutorialData();
};

