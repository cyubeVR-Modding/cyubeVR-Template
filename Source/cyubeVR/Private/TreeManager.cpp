#include "TreeManager.h"
#include "Components/CapsuleComponent.h"

ATreeManager::ATreeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));
    this->AllTreeHISMCIndividual.AddDefaulted(3750);
    this->TreeMeshes.AddDefaulted(15);
    this->EmptyMaterial = NULL;
    this->EmptyMaterialTwoSided = NULL;
    this->EmptyMaterialTwoSidedFoliage = NULL;
    this->EmptyMaterialTwoSidedFoliageMasked = NULL;
    this->EmptyMaterialTwoSidedFoliageMasked1 = NULL;
}

void ATreeManager::SetQuality(int32 Quality) {
}


