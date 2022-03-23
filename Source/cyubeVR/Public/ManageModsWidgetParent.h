#pragma once
#include "CoreMinimal.h"
#include "CustomBlockInfoForModsBP.h"
#include "Blueprint/UserWidget.h"
#include "ManageModsWidgetParent.generated.h"

UCLASS(EditInlineNew)
class CYUBEVR_API UManageModsWidgetParent : public UUserWidget {
    GENERATED_BODY()
public:
    UManageModsWidgetParent();
    UFUNCTION(BlueprintCallable)
    void GetDraftsMod(bool bFromWorkshop, TArray<FCustomBlockInfoForModsBP>& DraftsInfoArray);
    
};

