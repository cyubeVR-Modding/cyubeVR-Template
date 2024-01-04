#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SurfaceNavAIMoveResultOutputPinDelegate.h"
#include "Templates/SubclassOf.h"
#include "SurfaceNavAIMoveTo.generated.h"

class AActor;
class APawn;
class UNavigationQueryFilter;
class UObject;
class USurfaceNavAIMoveTo;

UCLASS(Blueprintable)
class SURFACENAVPLUGIN_API USurfaceNavAIMoveTo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceNavAIMoveResultOutputPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSurfaceNavAIMoveResultOutputPin OnFail;
    
    USurfaceNavAIMoveTo();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USurfaceNavAIMoveTo* SurfaceNavAIMoveTo(const UObject* WorldContextObject, const APawn* Pawn, const FVector Destination, const AActor* TargetActor, const float AcceptanceRadius, const TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    void OnSurfaceNavMoveCompleted(FAIRequestID requestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

