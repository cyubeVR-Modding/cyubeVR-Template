#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "AddRemoveAppDependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FAddRemoveAppDependencyResult : public FDownloadItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDependency;
    
    STEAMWORKSHOP_API FAddRemoveAppDependencyResult();
};

