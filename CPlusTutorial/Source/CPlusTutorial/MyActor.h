// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CPLUSTUTORIAL_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)	
	UShapeComponent* Box;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	float RunningTime;

	UPROPERTY(EditAnywhere)
	float SpeedScale;
	
	FVector PlayerStartingLocation=FVector(-2041.0f,-100.0f,235.0f);
	FVector BoxSize=FVector(1.5f,1.5f,1.5f);
	UFUNCTION()
	void TriggerEnter(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult & SweepResult);

	UPROPERTY(EditAnywhere)
	bool bMovesYAxis=true;

};
