// ItemDefinition.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemDefinition.generated.h"

class UInventoryItemFragment;
class UTexture2D;   // ← forward declaration, faltaba esto

UCLASS(Blueprintable, BlueprintType, Abstract, Const)
class INVENTORY_FRAMEWORK_API UItemDefinition : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Display")
	FText ItemName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Display")
	FText ItemDescription;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Display")
	TObjectPtr<UTexture2D> ItemIcon;
	 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "Fragments Array")
	TArray<TObjectPtr<UInventoryItemFragment>> ItemFragments;
};