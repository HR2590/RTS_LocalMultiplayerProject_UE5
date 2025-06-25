// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "WorldSubsystemManagerCustom.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType)
class GAMEPLAY_API UWorldSubsystemManagerCustom : public UWorldSubsystem
{
	GENERATED_BODY()


	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Custom Subsystem",Replicated)TArray<AActor*> Units;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Custom Subsystem",Replicated)TArray<AActor*> Buildings;
	
};
