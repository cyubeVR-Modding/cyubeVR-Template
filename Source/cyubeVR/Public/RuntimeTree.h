#pragma once
#include "CoreMinimal.h"
#include "ETreeType.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeTree.generated.h"

class UProceduralMeshComponent;
class AChunkManager;
class UStaticMesh;

UCLASS()
class CYUBEVR_API ARuntimeTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* PMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMeshReference;
    
    ARuntimeTree();
    UFUNCTION(BlueprintCallable)
    void SpawnLogs(UProceduralMeshComponent* CutNew);
    
    UFUNCTION(BlueprintCallable)
    void SetupWind(int32 From, int32 To);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void RegisterToolHit(FVector Location, bool& NowFall);
    
};

