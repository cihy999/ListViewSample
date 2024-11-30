// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

// Self
#include "CustomListView.h"
// UE
#include "Blueprint/UserWidget.h"
//
#include "CustomListViewData.h"

UUserWidget& UCustomListView::OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable)
{
    TSubclassOf<UUserWidget> EntryClass = DesiredEntryClass;

    if (!IsDesignTime())
    {
        if (IsValid(DataSetting))
        {
            EntryClass = DataSetting->GetEntryClassByItem(Item);
        }
    }

    return GenerateTypedEntry(EntryClass, OwnerTable);
}
