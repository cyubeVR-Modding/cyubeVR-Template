#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBlockTypeBP.h"
#include "BlockInfoBP.h"
#include "ModifiedBlockActorToSpawn.generated.h"

USTRUCT(BlueprintType)
struct FModifiedBlockActorToSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlockInfoBP BlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForMove;
    
    CYUBEVR_API FModifiedBlockActorToSpawn();
};

