// Preencha o aviso de direitos autorais na página Descrição das Configurações do Projeto.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Define os valores padrão para as propriedades deste ator.
	AMovingPlatform();

protected:
	// Chamado quando o jogo inicia ou quando o personagem é gerado.
	virtual void BeginPlay() override;

public:	
	// Chamado de cada quadro
	virtual void Tick(float DeltaTime) override;

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);

	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector(0.0f, 0.0f, 0.0f);
};
