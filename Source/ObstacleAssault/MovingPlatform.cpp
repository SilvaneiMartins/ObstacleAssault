
#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void MyTestFunction()
{
	UE_LOG(LogTemp, Display, TEXT("MyTestFunction is called!!"));
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	MyTestFunction();
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLoaction = GetActorLocation();

	CurrentLoaction = CurrentLoaction + (PlatformVelocity * DeltaTime);

	SetActorLocation(CurrentLoaction);
}