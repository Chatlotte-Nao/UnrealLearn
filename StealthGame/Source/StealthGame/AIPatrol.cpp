// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPatrol.h"

#include "AIPatrolController.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AAIPatrol::AAIPatrol()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComp=CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SetPeripheralVisionAngle(90.f);
}

// Called when the game starts or when spawned
void AAIPatrol::BeginPlay()
{
	Super::BeginPlay();
	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this,&AAIPatrol::OnPlayerCaught);
	}
}

// Called every frame
void AAIPatrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIPatrol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAIPatrol::OnPlayerCaught(APawn* Pawn)
{
	AAIPatrolController* AIController=Cast<AAIPatrolController>(GetController());
	if (AIController)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("You have been caught!"));
		AIController->SetPlayerCaught(Pawn);
	}
}

