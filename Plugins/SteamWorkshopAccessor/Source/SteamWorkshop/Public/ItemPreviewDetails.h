#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewTypeBP.h"
#include "ItemPreviewDetails.generated.h"

USTRUCT(BlueprintType)
struct FItemPreviewDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString urlOrVideoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString originalFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemPreviewTypeBP ItemType;
    
    STEAMWORKSHOP_API FItemPreviewDetails();
};

