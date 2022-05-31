#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CubeGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class CYUBEVR_API ACubeGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ACubeGameMode();
};

