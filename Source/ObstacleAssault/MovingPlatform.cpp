
#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void MyTestFunction(float Parameter1, int Parameter2)
{
	UE_LOG(LogTemp, Display, TEXT("Parameter1: %f"), Parameter1);
	UE_LOG(LogTemp, Display, TEXT("Parameter2: %d"), Parameter2);
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	MyTestFunction(11.02f, 20);

	StartLocation = GetActorLocation();
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	FVector CurrentLoaction = GetActorLocation();

	CurrentLoaction = CurrentLoaction + (PlatformVelocity * DeltaTime);

	SetActorLocation(CurrentLoaction);

	DistanceMoved = FVector::Dist(StartLocation, CurrentLoaction);

	if (DistanceMoved >= MoveDistance)
	{
		PlatformVelocity = -PlatformVelocity;
		StartLocation = CurrentLoaction;
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{

}