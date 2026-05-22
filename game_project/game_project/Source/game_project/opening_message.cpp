// Fill out your copyright notice in the Description page of Project Settings.


#include "opening_message.h"

// Sets default values
Aopening_message::Aopening_message()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void Aopening_message::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Welcome here !"));
	
}

// Called every frame
void Aopening_message::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

