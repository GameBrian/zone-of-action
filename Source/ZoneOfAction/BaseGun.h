// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGun.generated.h"

UCLASS()
class ZONEOFACTION_API ABaseGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGun();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float MinSpread = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float MaxSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	FVector Impulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	FVector ImpactPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float GunMovingMinSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float GunStillMaxSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float GunMovingMaxSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float GunStillMinSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float Delay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float ReloadTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	int32 Ammo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	int32 MaxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float RecoilPitchTotalVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float RecoilYawVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float RecoilYawTotalVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	float RecoilPitchVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	bool AimingDownSights;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	bool HasAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	bool IsReloading;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GunStats)
	bool Sprinting;
	USkeletalMeshComponent* Gun;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
