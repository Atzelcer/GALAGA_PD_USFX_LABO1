// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "GALAGA_PD_USFX_LABO1Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "PROYECTIL_BOMBA_EXP.h"
#include "PROYECTIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "Score.h"

// Sets default values
AP_BU_MASTER_SHIP_CONS_02::AP_BU_MASTER_SHIP_CONS_02()
{
	PrimaryActorTick.bCanEverTick = true;

	// Crear y configurar el componente de malla estática
	Malla_Maestro_A = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Maestro_A"));
	RootComponent = Malla_Maestro_A;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Nodriza1.Nodriza1'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Maestro_A->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Maestro_A->SetWorldScale3D(NewScale);
	}

	// Asegúrate de que Malla_Maestro_A ha sido creado antes de llamar a SetupAttachment
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = ParticleAsset.Object;

	}

	// Crear y configurar el componente de sonido
	Sonido_Nave = CreateDefaultSubobject<USoundBase>(TEXT("Sonido_Nave"));
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (SoundAsset.Succeeded())
	{
		Sonido_Nave = SoundAsset.Object;
	}


		MovimientoComponent = CreateDefaultSubobject<UMoviento_Nave_Maestra>(TEXT("MovimientoComponent"));
	
		MovimientoViolentoComponent = CreateDefaultSubobject<UMovimiento_Violento_Nave_Maestra>(TEXT("MovimientoViolentoComponent"));

		MovimientoAleatorioComponent = CreateDefaultSubobject<UMOVIMIENTO_ALEATORIO>(TEXT("MovimientoAleatorioComponent"));

		MovimientoNuloComponent = CreateDefaultSubobject<UMOVIMIENTO_NULO_NAVE_m>(TEXT("MovimientoNuloComponent"));

		// Asegurarse de que se desactivan al inicio si es necesario
		MovimientoComponent->Deactivate();
		MovimientoViolentoComponent->Deactivate();
		MovimientoAleatorioComponent->Deactivate();
		MovimientoNuloComponent->Deactivate();


	// creando el campo de colision de la nave
	ShipEnemyCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision Enemy"));
	// configurando el campo de colision de este actor
	ShipEnemyCollision->SetRelativeLocation(FVector(-50.f, 0.f, 0.f));
	ShipEnemyCollision->SetRelativeRotation(FRotator(90.0f, 0.f, 0.0f));
	ShipEnemyCollision->SetCapsuleHalfHeight(280.0f);
	ShipEnemyCollision->SetCapsuleRadius(70.0f);


	Vida = 30000.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 2.f;
	Distancia_Disparo = FVector(0.f, 0.f, 0.f);
	TiempoAcumuladoDisparo = 0.0f;
}

// Called when the game starts or when spawned
void AP_BU_MASTER_SHIP_CONS_02::BeginPlay()
{
	Super::BeginPlay();

	// creamos un actor estatico para pasar los puntos
	Score_Juego = GetWorld()->SpawnActor<AScore>(AScore::StaticClass());
	
}

void AP_BU_MASTER_SHIP_CONS_02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Acumular el tiempo transcurrido
	TiempoDesdeUltimoDisparo += DeltaTime;

	// Verificar la vida para establecer la estrategia de movimiento adecuada
	if (Vida >= 1500) {
		SetMovementStrategy(Cast<IMovementStrategy>(MovimientoViolentoComponent));
	}
	else if (Vida < 1500 && Vida >= 900) {
		SetMovementStrategy(Cast<IMovementStrategy>(MovimientoComponent));
	}
	else if (Vida < 900 && Vida >= 600) {
		SetMovementStrategy(Cast<IMovementStrategy>(MovimientoNuloComponent));
	}
	else if (Vida < 600) {
		SetMovementStrategy(Cast<IMovementStrategy>(MovimientoNuloComponent));
	}

	// Disparar proyectiles según la vida y asegurarse de que el tiempo de disparo se haya cumplido
	if (TiempoDesdeUltimoDisparo >= Tiempo_Disparo_Generar) {
		if (Vida >= 1500) {
			Set_Proyectil_DEnergia("Proyectil Esfera Energia");
		}
		else if (Vida < 1500 && Vida >= 900) {
			Set_Proyectil_DMissil("Proyectil Misil");
		}
		else if (Vida < 900 && Vida >= 600) {
			Set_Proyectil_DLazer("Proyectil Lazer");
		}
		else if (Vida < 600) {
			Set_Proyectil_DBomba("Proyectil Bomba");
		}

		// Restablecer el contador después de disparar
		TiempoDesdeUltimoDisparo = 0.0f;
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Silver, FString::Printf(TEXT("Vida Nave Maestra: %f"), Vida));
	}


	if (Vida <= 0) {
	
		Componentes_Destruccion();
	}
}


void AP_BU_MASTER_SHIP_CONS_02::Set_Proyectil_DEnergia(FString _Proyectile_Esfera_Energia)
{
	Disparar_Proyectil(APROYECTIL_ESFERA_ENERGIA::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Disparando Esfera de Energia"));
}

void AP_BU_MASTER_SHIP_CONS_02::Set_Proyectil_DMissil(FString _Proyectile_Misil)
{
	Disparar_Proyectil(APROYECTIL_MISSIL_P::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Disparando Misil"));
}


void AP_BU_MASTER_SHIP_CONS_02::Set_Proyectil_DLazer(FString _Proyectile_Lazer)
{
	Disparar_Proyectil(APROYECTIL_LAZER::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando Lazer"));
}

void AP_BU_MASTER_SHIP_CONS_02::Set_Proyectil_DBomba( FString _Proyectile_Bomba)
{
	Disparar_Proyectil(APROYECTIL_BOMBA_EXP::StaticClass());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Disparando Bomba"));
}



void AP_BU_MASTER_SHIP_CONS_02::Disparar_Proyectil(UClass* ProjectileClass)
{
	const FVector ForwardDirection = GetActorForwardVector();
	const FVector SpawnLocation = GetActorLocation() + ForwardDirection * 400.0f;
	const FRotator FireRotation = ForwardDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		APROYECTIL_P* Proyectil = World->SpawnActor<APROYECTIL_P>(ProjectileClass, SpawnLocation, FireRotation);
		if (Proyectil) {
			UProjectileMovementComponent* ProjectileMovement = Proyectil->FindComponentByClass<UProjectileMovementComponent>();
			if (ProjectileMovement) {
				ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * 1500.0f);
				ProjectileMovement->Activate();
			}
		}
	}
}



// Called to bind functionality to input
void AP_BU_MASTER_SHIP_CONS_02::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AP_BU_MASTER_SHIP_CONS_02::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AGALAGA_PD_USFX_LABO1Pawn* Player = Cast<AGALAGA_PD_USFX_LABO1Pawn>(OtherActor);
	if (Player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con Nave Maestra"));
		//Player->Destroy();
		Damage(90.f);
	}

	AGALAGA_PD_USFX_LABO1Projectile* Proyectil = Cast<AGALAGA_PD_USFX_LABO1Projectile>(OtherActor);
	if (Proyectil)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el Projectile"));


		//Proyectil->Destroy();
		Damage(45.f);
	}

	APROYECTIL_P* Proyectil_P = Cast<APROYECTIL_P>(OtherActor);
	if (Proyectil_P) 
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con el Projectile"));
		//Proyectil->Destroy();
		Damage(100.f);
		Score_Juego->setScore(100);

	}

}



void AP_BU_MASTER_SHIP_CONS_02::Componentes_Destruccion()
{

	//Efecto de Explosion 
	if (Explosion_Nave)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorTransform());
	//Sonido de la explosion

	if (Sonido_Nave != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());

	this->Destroy();
}




void AP_BU_MASTER_SHIP_CONS_02::Damage(float Danio)
{
	Vida -= Danio;
}



void AP_BU_MASTER_SHIP_CONS_02::SetMovementStrategy(IMovementStrategy* NewStrategy) {
	if (CurrentMovementStrategy != NewStrategy) {
		// Desactivar la estrategia actual si es necesario
		if (CurrentMovementStrategy) {
			UActorComponent* CurrentComponent = Cast<UActorComponent>(CurrentMovementStrategy);
			if (CurrentComponent && CurrentComponent->IsActive()) {
				CurrentComponent->Deactivate();
				if (GEngine) {
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Deactivating Strategy: %s"), *GetNameSafe(CurrentComponent)));
				}
			}
		}

		// Asignar y activar la nueva estrategia
		CurrentMovementStrategy = NewStrategy;
		UActorComponent* NewComponent = Cast<UActorComponent>(NewStrategy);
		if (NewComponent) {
			NewComponent->Activate();
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Activating Strategy: %s"), *GetNameSafe(NewComponent)));
			}
		}
	}
}




void AP_BU_MASTER_SHIP_CONS_02::Caracteristicas_Nave_Maestra()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Caracteristicas de la Nave Maestra"));
	//Para los proyectiles 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proyectil Lazer: 1500"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proyectil Misil: 1200"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proyectil Esfera Energia: 900"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proyectil Bomba: 600"));
	//Para los movimientos
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Violento: 1800"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Normal: 1200"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Nulo: 900"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Movimiento Nulo: 600"));

}


