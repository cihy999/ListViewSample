// Copyright (C) 2024 Cindy Chen. All Rights Reserved.

#pragma once

// UE
#include "CoreMinimal.h"
#include "Components/ListView.h"
// 
#include "CustomListView.generated.h"

class UUserWidget;
class UCustomListViewData;

UCLASS()
class LISTVIEWSAMPLE_API UCustomListView : public UListView
{
	GENERATED_BODY()
	
protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCustomListViewData> DataSetting;
};
