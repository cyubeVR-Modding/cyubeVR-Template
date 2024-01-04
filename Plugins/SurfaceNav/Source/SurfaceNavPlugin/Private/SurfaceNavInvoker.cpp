#include "SurfaceNavInvoker.h"
#include "Components/SceneComponent.h"
#include "SurfaceNavInvokerComponent.h"

ASurfaceNavInvoker::ASurfaceNavInvoker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->InvokerComponent = CreateDefaultSubobject<USurfaceNavInvokerComponent>(TEXT("SNInvokerComp"));
}


