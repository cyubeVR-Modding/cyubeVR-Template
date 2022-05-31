#pragma once
#include "CoreMinimal.h"
#include "SteamKeyValuePair.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterTagsAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamKeyValuePair> requiredKeyValueTags;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterTagsAllUserDetails();
};

