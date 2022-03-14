#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "PreGenTestActor.generated.h"

class UProceduralMeshComponent;

UCLASS()
class CYUBEVR_API APreGenTestActor : public AActor {
    GENERATED_BODY()
public:
    APreGenTestActor();
    UFUNCTION(BlueprintCallable)
    void SubmitMesh(UProceduralMeshComponent* PMC, const TArray<EBlockTypeBP>& StructureArray, FIntVector StructureSize);
    
    UFUNCTION(BlueprintCallable)
    void GeneratePyramid(TArray<EBlockTypeBP>& StructureArray, FIntVector& StructureSize);
    
};

