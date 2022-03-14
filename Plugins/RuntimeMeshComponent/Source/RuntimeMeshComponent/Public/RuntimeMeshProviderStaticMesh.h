#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshProviderStaticMesh.generated.h"

class UStaticMesh;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderStaticMesh : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLOD;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComplexCollisionLOD;
    
public:
    URuntimeMeshProviderStaticMesh();
    UFUNCTION(BlueprintCallable)
    void SetStaticMesh(UStaticMesh* InStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLOD(int32 InMaxLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetComplexCollisionLOD(int32 InLOD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetStaticMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLOD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComplexCollisionLOD() const;
    
};

