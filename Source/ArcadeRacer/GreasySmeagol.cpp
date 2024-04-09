// Fill out your copyright notice in the Description page of Project Settings.


#include "GreasySmeagol.h"
#include "StringHelper.h"

// Sets default values
AGreasySmeagol::AGreasySmeagol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGreasySmeagol::BeginPlay()
{
	Super::BeginPlay();
	
	StringHelper::Print("O!");
	 public var boi = "Little lungs";
	StringHelper::Print(boi);
}

// Called every frame
void AGreasySmeagol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}
