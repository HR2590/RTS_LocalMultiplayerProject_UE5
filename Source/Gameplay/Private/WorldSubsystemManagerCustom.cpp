// Fill out your copyright notice in the Description page of Project Settings.



#include "WorldSubsystemManagerCustom.h"
#include "Net/UnrealNetwork.h"

void UWorldSubsystemManagerCustom::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	Units.Empty();
	Buildings.Empty();
}

void UWorldSubsystemManagerCustom::Deinitialize()
{
	Super::Deinitialize();
	Units.Empty();
	Buildings.Empty();
}

void UWorldSubsystemManagerCustom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UWorldSubsystemManagerCustom, Units);
	DOREPLIFETIME(UWorldSubsystemManagerCustom, Buildings);
}
