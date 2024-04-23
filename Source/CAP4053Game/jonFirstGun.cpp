// Fill out your copyright notice in the Description page of Project Settings.


#include "jonFirstGun.h"

// Sets default values
AjonFirstGun::AjonFirstGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AjonFirstGun::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)  // Check if the engine is available
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("The game has started!"));
	}
	
}

// Called every frame
void AjonFirstGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

