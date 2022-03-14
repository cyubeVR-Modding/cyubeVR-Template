#pragma once
#include "CoreMinimal.h"
#include "ChunkAboutBP.h"
#include "BlockInfoBP.generated.h"

USTRUCT(BlueprintType)
struct FBlockInfoBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkAboutBP ChunkAbout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    CYUBEVR_API FBlockInfoBP();
};

