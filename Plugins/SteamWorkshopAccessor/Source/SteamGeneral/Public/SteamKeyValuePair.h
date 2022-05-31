#pragma once
#include "CoreMinimal.h"
#include "SteamKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FSteamKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    STEAMGENERAL_API FSteamKeyValuePair();
};

