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
	
	int NumberOfApples = 10;
	int NumberOfOranges = 7;
	UE_LOG(LogTemp, Display, TEXT("Numbers of apples: %d"), NumberOfApples);
	UE_LOG(LogTemp, Display, TEXT("Nymbers of oranges: %d"), NumberOfOranges);

	float MyHeight = 182.5f;
	UE_LOG(LogTemp, Display, TEXT("My heigth is %f"), MyHeight);

	FString MyName = "Silvanei Martins";
	UE_LOG(LogTemp, Display, TEXT("My name is %s"), *MyName);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}