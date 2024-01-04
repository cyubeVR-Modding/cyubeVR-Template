#include "SurfaceNavProxy.h"

ASurfaceNavProxy::ASurfaceNavProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->MaxPathingIterations = 10000;
    this->MaxPathRequestsPerTick = 5;
    this->ObservedPathsTickInterval = 0.20f;
    this->TraceSphereRadius = 0.00f;
    this->TraceSphereStartOffset = 0.00f;
    this->TraceSphereEndOffset = 0.00f;
    this->MaxComponentSphereRadiusToProcess = 100000.00f;
    this->MaxExpenseModifier = 450.00f;
    this->ExpenseModifierUpStep = 200.00f;
    this->ExpenseModifierDownStep = 70.00f;
    this->DelayBeforePathFindingAllowed = 1.00f;
    this->DisplayRadiusFromCamera = 2000.00f;
    this->ShowNavBlocks = false;
    this->ShowNavGridPoints = false;
    this->ShowNavPoints = false;
    this->ShowNavPointNormals = false;
    this->ShowNavNeighborDirections = false;
    this->ShowNavLinks = false;
    this->ShowNavPointsDuringBuild = false;
    this->Show_AI_Paths = false;
}

void ASurfaceNavProxy::SurfaceNavRebuildAll() {
}

void ASurfaceNavProxy::DrawDebugNavData(const float InDrawRadius, const bool InShowBlocks, const bool InShowGridPoints, const bool InShowNavPoints, const bool InShowNavPointNormals, const bool InShowNeighborDirLines, const bool InShowNavLinkPoints, const float InDuration) const {
}


