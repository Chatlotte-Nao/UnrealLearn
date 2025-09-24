// Fill out your copyright notice in the Description page of Project Settings.



#include "MyActor.h"

#include "Components/BoxComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent=Box;
	Box->SetGenerateOverlapEvents(true);
	Box->OnComponentBeginOverlap.AddDynamic(this,&AMyActor::TriggerEnter);	
	
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyMesh->SetupAttachment(Box);
	SpeedScale=0.0f;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation=GetActorLocation();
	float DeltaHeight=(FMath::Sin(RunningTime+DeltaTime)-FMath::Sin(RunningTime));
	if (bMovesYAxis)
	{
		NewLocation.Y+=DeltaHeight*SpeedScale;
	}
	else
	{
		NewLocation.X+=DeltaHeight*SpeedScale;
	}
	RunningTime+=DeltaTime;
	SetActorLocation(NewLocation);
}

void AMyActor::TriggerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OtherActor->SetActorLocation(PlayerStartingLocation);
}



