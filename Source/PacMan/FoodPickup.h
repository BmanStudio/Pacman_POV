// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"

#include "FoodPickup.generated.h"

UENUM(BlueprintType)
enum class EFoodType : uint8
{
	Regular,
	PowerUp
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoodEatenEvent, EFoodType, FoodType);

UCLASS()
class PACMAN_API AFoodPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFoodPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Consume();

	UPROPERTY(EditAnywhere)
		EFoodType FoodType = EFoodType::Regular;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FFoodEatenEvent FoodEatenEvent;

private:
	UPROPERTY(EditAnywhere)
		USoundCue* ConsumptionSoundCue;
};
