#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewTypeBP.h"
#include "ItemPreviewDetails.generated.h"

USTRUCT(BlueprintType)
struct FItemPreviewDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString urlOrVideoId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString originalFileName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EItemPreviewTypeBP ItemType;
    
    STEAMWORKSHOP_API FItemPreviewDetails();
};

