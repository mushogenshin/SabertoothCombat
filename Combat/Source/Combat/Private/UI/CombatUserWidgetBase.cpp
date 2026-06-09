// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CombatUserWidgetBase.h"
#include "Components/Button.h"

void UCombatUserWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	if (NutBamDongUI)
	{
		// TODO: Nut Close can lam job cua no
		// Khi bam nut close, phai co j do xay ra
		NutBamDongUI->OnClicked.AddDynamic(this, &UCombatUserWidgetBase::DepTiemUIThoi);
	}
}

void UCombatUserWidgetBase::DepTiemUIThoi()
{
	RemoveFromParent();
}
