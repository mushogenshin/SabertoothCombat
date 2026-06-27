// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CombatUserWidgetBase.generated.h"

class USlider;
class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoaiEventNguoiChoiTatHuongDan);

/**
 * 
 */
UCLASS()
class COMBAT_API UCombatUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton> NutBamDongUI;
	
	// ReSharper disable once CppUE4CodingStandardNamingViolationWarning
	UPROPERTY(BlueprintAssignable, Category=UICuaEm)
	FLoaiEventNguoiChoiTatHuongDan TatHDDuocRoiDo;
	
private:
	UFUNCTION()
	void DepTiemUIThoi();
};
