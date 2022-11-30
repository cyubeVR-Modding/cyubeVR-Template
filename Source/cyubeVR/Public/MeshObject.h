#pragma once
#include "CoreMinimal.h"
#include "ReceiveLightActor.h"
#include "EBlockTypeBP.h"
#include "MeshObject.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class CYUBEVR_API AMeshObject : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Destroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoInstantDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> PreviewMaterialIgnoreComponents;
    
    AMeshObject();
    UFUNCTION(BlueprintCallable)
    void SetReadyForSaving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPreviewValid(bool IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsPreview(bool IsPreview);
    
    UFUNCTION(BlueprintCallable)
    void MarkForSave();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMeshObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyEvent();
    
    UFUNCTION(BlueprintCallable)
    void DamageMeshObject(float Damage, bool& Destroyed_);
    
    UFUNCTION(BlueprintCallable)
    bool CanDamageObject();
    
};

