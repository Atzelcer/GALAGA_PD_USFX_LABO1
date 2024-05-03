// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "GALAGA_PD_USFX_LABO1Projectile.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AP_BU_MASTER_SHIP_CONS_02::AP_BU_MASTER_SHIP_CONS_02()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Malla_Maestro_A = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Maestro_A"));
	Malla_Maestro_A->SetupAttachment(RootComponent);
	RootComponent = Malla_Maestro_A;

	// En el constructor de AMaster_Ship
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = ParticleAsset.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (AssetExplosionSound.Succeeded())
	{
		Sonido_Nave = AssetExplosionSound.Object;
	}




	// Crear un componente de colisión en forma de caja y establecerlo como el componente raíz de la nave
	Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));

	// Establecer la caja de colisión de la nave como el componente raíz de la nave
	Colision_Nave->SetupAttachment(RootComponent);
	//|*| PARA AJUSTAR LOS LIMITES DE COLISION DE LA NAVE |*|
	Colision_Nave->SetBoxExtent(FVector(100.f, 100.f, 100.f));

	Vida = 1800.0f;
	//Danio = 0.0f;

}

// Called when the game starts or when spawned
void AP_BU_MASTER_SHIP_CONS_02::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_BU_MASTER_SHIP_CONS_02::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Silver, FString::Printf(TEXT("Vida Nave Maestra: %f"), Vida));
	}


	if (Vida <= 0) {
	
		Componentes_Destruccion();
	}



	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Silver, FString::Printf(TEXT("Se mueve la nave")));
	//FVector PosicionActual = GetActorLocation();
	//const float VelocidadHorizontal = 20.0f;
	//const float VelocidadRotacion = 30.0f;
	//const FVector DireccionMovimiento = FVector(-10.0f, 0.0f, 0.0f);
	//static float DistanciaRecorrida = 360.0f;  // Conserva su valor entre llamadas

	//FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;
	//float Angulo = FMath::Fmod(GetWorld()->TimeSeconds * 0.1f, 6.0f) * VelocidadRotacion;
	//FVector DesplazamientoCircular = FVector(FMath::Cos(Angulo) * -3.0f, FMath::Sin(Angulo) * -3.0f, 0.0f);

	//FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + DesplazamientoCircular;
	//DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);



}

void AP_BU_MASTER_SHIP_CONS_02::CheckHealth()
{
	if (Vida <= 50.0f)
	{
		// Activate shields or change behavior
	}

	if (Vida <= 0.0f)
	{
		Componentes_Destruccion();
		Destroy();
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

void AP_BU_MASTER_SHIP_CONS_02::SetShieldDistance(float Distance)
{
}

void AP_BU_MASTER_SHIP_CONS_02::SetMesh(UStaticMeshComponent* Malla_Maestro)
{
	Malla_Maestro_A = Malla_Maestro;
}

void AP_BU_MASTER_SHIP_CONS_02::Caracteristicas_Nave_Maestra()
{

}

void AP_BU_MASTER_SHIP_CONS_02::SetMeshScale(const FVector& Scale)
{
	if (Malla_Maestro_A)
	{
		Malla_Maestro_A->SetWorldScale3D(Scale);
	}
}

