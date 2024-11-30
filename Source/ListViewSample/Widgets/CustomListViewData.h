// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
// 
#include "CustomListViewData.generated.h"

class UUserWidget;

UCLASS()
class LISTVIEWSAMPLE_API UCustomListViewData : public UDataAsset
{
	GENERATED_BODY()

public:
	TSubclassOf<UUserWidget> GetEntryClassByItem(UObject* Item);
	
protected:
	// Item¹ïÀ³ªºEntryWidget
	UPROPERTY(EditDefaultsOnly, Category = ListEntries)
	TMap<TSubclassOf<UObject>, TSubclassOf<UUserWidget>> EntryWidgetForItem;
};
