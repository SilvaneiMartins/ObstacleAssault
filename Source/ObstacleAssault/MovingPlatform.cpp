
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

int MyTestFunctionInt()
{
	return 50;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	MyTestFunction(11.02f, 20);

	int ReturnValue = MyTestFunctionInt();
	UE_LOG(LogTemp, Display, TEXT("Return value is %d"), ReturnValue);

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
	DistanceMoved = GetDistanceMoved();

	if (DistanceMoved >= MoveDistance)
	{
		float OverShoot = DistanceMoved - MoveDistance;
		FString PlatformName = GetName();
		UE_LOG(LogTemp, Display, TEXT("%s overshoot by %f"), *PlatformName, OverShoot);

		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		FVector NewStartLocation = StartLocation + MoveDirection * MoveDistance;
		SetActorLocation(NewStartLocation);
		StartLocation = NewStartLocation;

		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLoaction = GetActorLocation();

		CurrentLoaction = CurrentLoaction + (PlatformVelocity * DeltaTime);

		SetActorLocation(CurrentLoaction);
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	FRotator RotationToAdd = RotationVelocity * DeltaTime;
	AddActorLocalRotation(RotationToAdd);
}

float AMovingPlatform::GetDistanceMoved()
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
