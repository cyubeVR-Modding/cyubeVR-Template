#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomBlockInfoForModsBP.h"
#include "ManageModsWidgetParent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CYUBEVR_API UManageModsWidgetParent : public UUserWidget {
    GENERATED_BODY()
public:
    UManageModsWidgetParent();
    UFUNCTION(BlueprintCallable)
    void GetDraftsMod(bool bFromWorkshop, TArray<FCustomBlockInfoForModsBP>& DraftsInfoArray);
    
};

