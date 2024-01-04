#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshProviderSphere.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderSphere : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLatitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLatitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLongitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLongitudeSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SphereMaterial;
    
public:
    URuntimeMeshProviderSphere();

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSphereMaterial(UMaterialInterface* InSphereMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLongitudeSegments(int32 InMinLongitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLatitudeSegments(int32 InMinLatitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLongitudeSegments(int32 InMaxLongitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLatitudeSegments(int32 InMaxLatitudeSegments);
    
    UFUNCTION(BlueprintCallable)
    void SetLODMultiplier(float InLODMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSphereRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetSphereMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinLongitudeSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinLatitudeSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLongitudeSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLatitudeSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLODMultiplier() const;
    
};

