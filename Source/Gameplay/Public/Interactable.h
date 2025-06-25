// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

class UBoxComponent;
class UGASDataComponent;
class UCoreAttributeSet;
class UUTHUB_ASC;

UCLASS(Blueprintable,BlueprintType)
class AInteractable : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractable();

private:
	UPROPERTY(EditAnywhere,Category=CoreAttributes,meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* Mesh;
	
	UPROPERTY(EditAnywhere,Category=Gameplay,meta=(AllowPrivateAccess=true))
	UBoxComponent* BoxComponent;
	
	UPROPERTY(EditAnywhere,Category=CoreAttributes,meta=(AllowPrivateAccess=true))
	UCoreAttributeSet* CoreAttributeSet;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Gameplay,meta=(AllowPrivateAccess=true))
	UGASDataComponent* GASDataComponent;

	UPROPERTY(EditAnywhere,Category=Gameplay,meta=(AllowPrivateAccess=true))
	UUTHUB_ASC* ASC;



};
