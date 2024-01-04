#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurfaceNavInvoker.generated.h"

class USurfaceNavInvokerComponent;

UCLASS(Blueprintable)
class SURFACENAVPLUGIN_API ASurfaceNavInvoker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USurfaceNavInvokerComponent* InvokerComponent;
    
    ASurfaceNavInvoker(const FObjectInitializer& ObjectInitializer);

};

