
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
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLoaction = GetActorLocation();

	CurrentLoaction = CurrentLoaction + (PlatformVelocity * DeltaTime);

	SetActorLocation(CurrentLoaction);
}