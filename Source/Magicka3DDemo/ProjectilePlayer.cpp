// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectilePlayer.h"

// Sets default values
AProjectilePlayer::AProjectilePlayer()
{

    CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    RootComponent = CollisionComp;

    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    MeshComp->SetupAttachment(RootComponent);

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
    ProjectileMovement->InitialSpeed = 0.f;
    ProjectileMovement->MaxSpeed = 0.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->ProjectileGravityScale = 0.f; // 0 = no gravity (laser-like)
}

// Called when the game starts or when spawned
/*void AProjectilePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectilePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

