#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PvrPlatformSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class PIMAXPLATFORM_API UPvrPlatformSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppID;
    
    UPvrPlatformSettings();

};

