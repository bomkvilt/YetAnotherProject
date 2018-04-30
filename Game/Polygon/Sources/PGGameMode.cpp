#include "PGGameMode.hpp"
#include "PGPlayerController.hpp"
#include "Level.hpp"
#include "Gosha.hpp"
#include "Coin.hpp"
#include "Box.hpp"


PGGameMode::PGGameMode()
{
	auto* level = CreateActor<Level>("Level");
	auto* coin  = CreateActor<Coin >("Coin" );
	auto* box1  = CreateActor<Box  >("Box"  );
	auto* box2  = CreateActor<Box  >("Box"  );
	auto* box3  = CreateActor<Box  >("Box"  );
	auto* gosha = CreateAvatar<Gosha>("Gosha", true);

	gosha->SetComponentLocation(FVector(0, 5));
	coin ->SetComponentLocation(FVector(5, 1));
	box1 ->SetComponentLocation(FVector(10,2));
	box2 ->SetComponentLocation(FVector(13,6));
	box3 ->SetComponentLocation(FVector(-15,2));
}

void PGGameMode::Tick(float DeltaTime, ETickType type)
{
	Super::Tick(DeltaTime, type);
}