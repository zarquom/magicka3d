// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameFramework/ProjectileMovementComponent.h>
#include <Components/SphereComponent.h>
#include "ProjectilePlayer.generated.h"

UENUM(BlueprintType)
enum class ERuneTypes : uint8
{
    Fire        UMETA(DisplayName = "Fire"),
    Ice         UMETA(DisplayName = "Ice"),
    Water   UMETA(DisplayName = "Water"),
    None      UMETA(DisplayName = "None")
};

UCLASS()
class AProjectilePlayer : public AActor
{
	GENERATED_BODY()

public:
    AProjectilePlayer();

    UPROPERTY(VisibleAnywhere)
    UProjectileMovementComponent* ProjectileMovement;

    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionComp;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile", meta = (ExposeOnSpawn = true))
    TArray<ERuneTypes> RuneTypes;
};