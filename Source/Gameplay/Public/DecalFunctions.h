// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DecalFunctions.generated.h"

/**
 * 
 */

UCLASS()
class GAMEPLAY_API UDecalFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, meta=(DisplayName="SetDecalSize",Keywords="Set Decal Size"))
	static void SetDecalSize(UDecalComponent* InDecal,FVector InSize);

};
