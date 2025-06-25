// Fill out your copyright notice in the Description page of Project Settings.


#include "DecalFunctions.h"

#include "Components/DecalComponent.h"






void UDecalFunctions::SetDecalSize(UDecalComponent* InDecal, FVector InSize)
{
if (!InDecal) return;
	InDecal->DecalSize=InSize;
}
