#include "CraftingListParent.h"

UCraftingListParent::UCraftingListParent() : UUserWidget(FObjectInitializer::Get()) {
}

void UCraftingListParent::GetDraftsMod(TArray<FCustomBlockInfoForBP>& DraftsInfoArray) {
}

void UCraftingListParent::GetDrafts(TArray<EBlockTypeBP>& DraftsArray) {
}

TMap<EBlockTypeBP, int32> UCraftingListParent::GetDraftAmounts(EBlockTypeBP Type, int32 UniqueId) {
    return TMap<EBlockTypeBP, int32>();
}


