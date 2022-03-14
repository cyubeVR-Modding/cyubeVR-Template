#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TreeManager.generated.h"

class UStaticMesh;

UCLASS()
class CYUBEVR_API ATreeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> TreeMeshes;
    
    ATreeManager();
};

