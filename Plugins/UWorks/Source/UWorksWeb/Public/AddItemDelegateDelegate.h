#pragma once
#include "CoreMinimal.h"
#include "AddItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddItemDelegate, bool, bSuccessful, const FString&, Content);

