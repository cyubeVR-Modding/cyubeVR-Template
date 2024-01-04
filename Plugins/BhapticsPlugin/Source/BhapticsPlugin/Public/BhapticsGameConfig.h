#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BhapticsGameConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BHAPTICSPLUGIN_API UBhapticsGameConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Configuration;
    
    UBhapticsGameConfig();

};

