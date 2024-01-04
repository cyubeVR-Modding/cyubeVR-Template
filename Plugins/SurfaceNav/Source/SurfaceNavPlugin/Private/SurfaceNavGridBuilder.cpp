#include "SurfaceNavGridBuilder.h"

ASurfaceNavGridBuilder::ASurfaceNavGridBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NearBlockGenerationRadius = 6000.00f;
    this->FarBlockGenerationRadius = 0.00f;
    this->MaxDistanceFromPlayerForGeneration = 10000.00f;
    this->AllowNavigationGenerationWithoutPlayer = false;
    this->IsFlatWorld = true;
    this->RefreshLocationDataInterval = 0.50f;
    this->ProcessComponentUpdatesInterval = 0.50f;
    this->ProcessPendingDirtyNavigationInterval = 0.50f;
    this->BlockSize = 1000.00f;
    this->CleanBlockInterval = 5.00f;
    this->GridPointDistance = 80.00f;
    this->MaxPathingIterations = 1000;
    this->MaxPathRequestsPerTick = 1;
    this->ObservedPathsTickInterval = 0.20f;
    this->TraceSphereRadius = 0.00f;
    this->MaxComponentSphereRadiusToProcess = 100000.00f;
    this->ShowDebugNavPointsDuringBuild = false;
    this->ShowDebug_AI_Paths = false;
    this->MaxExpenseModifier = 450.00f;
    this->ExpenseModifierUpStep = 200.00f;
    this->ExpenseModifierDownStep = 70.00f;
    this->DelayBeforePathFindingAllowed = 1.00f;
    this->ShowNavBlocks = false;
    this->ShowNavGridPoints = false;
    this->ShowNavPoints = false;
    this->ShowNavPointNormals = false;
    this->ShowNavNeighborDirs = false;
    this->ShowNavLinks = false;
    this->DisplayRadiusFromCamera = 2000.00f;
}


