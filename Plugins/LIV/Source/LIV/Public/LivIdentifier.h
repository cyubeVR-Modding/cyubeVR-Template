#pragma once
#include "CoreMinimal.h"
#include "LivIdentifier.generated.h"

USTRUCT(BlueprintType)
struct LIV_API FLivIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString EngineName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString EngineVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ClientVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString NativeClientVersion;
    
    FLivIdentifier();
};

