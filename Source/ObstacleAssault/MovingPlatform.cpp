// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	int MyValue;
	MyValue = 10 / 5;
	UE_LOG(LogTemp, Display, TEXT("MyValue is %d"), MyValue);

	int MyMultiplier;
	MyMultiplier = 10 * MyValue;
	UE_LOG(LogTemp, Display, TEXT("MyMultiplier is %d"), MyMultiplier);

	int MyDivider;
	MyDivider = MyMultiplier / 10;
	UE_LOG(LogTemp, Display, TEXT("MyDivider is %d"), MyDivider);

	float MyCalculation = 12.0f / 5.0f;
	UE_LOG(LogTemp, Display, TEXT("MyCalculation is %f"), MyCalculation);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}