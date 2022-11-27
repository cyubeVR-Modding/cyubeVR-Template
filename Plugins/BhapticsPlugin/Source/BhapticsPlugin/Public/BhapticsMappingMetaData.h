#pragma once
#include "CoreMinimal.h"
#include "BhapticsMappingMetaData.generated.h"

USTRUCT(BlueprintType)
struct FBhapticsMappingMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationMillis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAudio;
    
    UPROPERTY(EditAnywhere)
    int64 UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Positions;
    
    BHAPTICSPLUGIN_API FBhapticsMappingMetaData();
};

