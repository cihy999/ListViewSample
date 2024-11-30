// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

// Self
#include "CustomListViewData.h"
// UE
#include "Blueprint/UserWidget.h"

TSubclassOf<UUserWidget> UCustomListViewData::GetEntryClassByItem(UObject* Item)
{
	if (IsValid(Item))
	{
		for (UClass* Class = Item->GetClass(); Class; Class = Class->GetSuperClass())
		{
			if (TSubclassOf<UObject> ItemClass = TSubclassOf<UObject>(Class))
			{
				if (EntryWidgetForItem.Contains(ItemClass))
				{
					return EntryWidgetForItem[ItemClass];
				}
			}
		}
	}

	return TSubclassOf<UUserWidget>();
}
