// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodPickup.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AFoodPickup::AFoodPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFoodPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFoodPickup::Consume()
{
	UGameplayStatics::PlaySound2D(this, ConsumptionSoundCue);

	FoodEatenEvent.Broadcast(FoodType);

	Destroy();
}

