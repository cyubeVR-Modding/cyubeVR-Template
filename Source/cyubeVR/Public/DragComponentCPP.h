#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DragComponentCPP.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UDragComponentCPP : public UActorComponent {
    GENERATED_BODY()
public:
    UDragComponentCPP(const FObjectInitializer& ObjectInitializer);

};

