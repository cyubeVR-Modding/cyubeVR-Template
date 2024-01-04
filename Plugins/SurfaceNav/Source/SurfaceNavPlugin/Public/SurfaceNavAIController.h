#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SurfaceNavAIController.generated.h"

class AActor;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class SURFACENAVPLUGIN_API ASurfaceNavAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentPlanet;
    
public:
    ASurfaceNavAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> SurfaceNavMoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> SurfaceNavMoveToActor(AActor* Goal, float AcceptanceRadius, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlanet(AActor*& InPlanetActor);
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomSurfaceNavPointNearby(float SearchRadius, const FVector TetherPoint, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentPlanet(AActor*& OutPlanetActor);
    
    UFUNCTION(BlueprintCallable)
    float GetClosestPlanetActor(AActor*& OutPlanetActor);
    
};

