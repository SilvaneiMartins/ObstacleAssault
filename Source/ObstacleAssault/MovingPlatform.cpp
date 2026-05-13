// Preencha o aviso de direitos autorais na página Descrição das Configurações do Projeto.


#include "MovingPlatform.h"

// Define valores padrão
AMovingPlatform::AMovingPlatform()
{
 	// Configure este ator para chamar Tick() a cada frame. Você pode desativar essa configuração para melhorar o desempenho, caso não precise dela.
	PrimaryActorTick.bCanEverTick = true;

}

// Chamado quando o jogo inicia ou quando o personagem é gerado.
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("MemberFloat: %f"), MemberFloat);
	UE_LOG(LogTemp, Display, TEXT("MemberInt: %d"), MemberInt);
}

// Chamado de cada quadro
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}