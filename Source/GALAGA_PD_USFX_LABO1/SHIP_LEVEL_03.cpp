// Fill out your copyright notice in the Description page of Project Settings.


#include "SHIP_LEVEL_03.h"
#include "Engine/StaticMesh.h"
#include "Sound/SoundBase.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "PROYECTIL_NAVE_01.h"


ASHIP_LEVEL_03::ASHIP_LEVEL_03()
{
	// Conguracion de este actor en cada fotograma del juego 
	PrimaryActorTick.bCanEverTick = true;

	//|*| COMPONENTE MALLA DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/New_Meses/NaveEnemiga01.NaveEnemiga01'"));
	if (MeshAsset.Succeeded())
	{
		Nave_Mesh->SetStaticMesh(MeshAsset.Object);

		// Modificar la escala del componente de malla
		FVector NewScale(0.500f, 0.500f, 0.500f); // Escala modificada
		Nave_Mesh->SetWorldScale3D(NewScale);
	}
	//{
	//	FVector NewScale(5.0f, 5.0f, 5.0f); // Escala modificada
	//       Nave_Mesh->SetWorldScale3D(NewScale);
	//}

	//|*| COMPONENTE DE PARTICULA DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	//|*| COMPONENTE DE SONIDO DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (AssetExplosionSound.Succeeded())
	{
		Sonido_Nave = Cast<USoundBase>(AssetExplosionSound.Object);
	}


	//|*| PARA AJUSTAR LOS LIMITES DE COLISION DE LA NAVE |*|
	Colision_Nave->SetBoxExtent(FVector(150.f, 150.f, 150.f));

	//|*| INICIALIZANDO LOS ATRIBUTOS DE LA NAVE |*|

	Life = 40.0f;
	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre 
	Identificador_Nave = "Nave_Nivel_03";
}

void ASHIP_LEVEL_03::BeginPlay()
{
	Super::BeginPlay();

}

void ASHIP_LEVEL_03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//|*| PARA EL MOVIMIENTO DE LA NAVE |*|
	//const FVector MoveDirection = FVector(0.f, 0.f, 0.f);// Direccion en la que se movera la nave // tambien esta tomando lo que llegaria a ser la velocidad de la nave 
	//const FVector Movement = MoveDirection * Velocity * DeltaTime; // La velocidad con la que se movera la nave 
	//const FRotator NewRotation = FRotator(180.0f, 0.0f,0.0f);

	FVector PosicionActual = GetActorLocation();
	const float VelocidadHorizontal = 20.0f;
	const float VelocidadRotacion = 30.0f;
	const FVector DireccionMovimiento = FVector(-10.0f, 0.0f, 0.0f);
	static float DistanciaRecorrida = 360.0f;  // Conserva su valor entre llamadas

	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;
	float Angulo = FMath::Fmod(GetWorld()->TimeSeconds * 0.1f, 6.0f) * VelocidadRotacion;
	FVector DesplazamientoCircular = FVector(FMath::Cos(Angulo) * -3.0f, FMath::Sin(Angulo) * -3.0f, 0.0f);

	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + DesplazamientoCircular;
	DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);

	SetActorLocation(NuevaPosicion);

	//// Verificar si la nave ha cruzado el límite de X = 900.0f
	//if (NuevaPosicion.X < -1000.0f)
	//{
	//	SetActorLocation(FVector(1000.f, NuevaPosicion.Y, NuevaPosicion.Z));  // Restablece la posición a la original
	//}



	//RootComponent->MoveComponent(Movement, NewRotation,true);


	//|*| PARA LANZAR LOS PROYECTILES DE LA NAVE |*|
	Tiempo_Disparo += DeltaTime;
	if (Tiempo_Disparo >= Tiempo_Disparo_Generar) {
		Tiempo_Disparo = 0.0f;
		const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation = MoveDirectionBullet.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(Distancia_Disparo);

		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<APROYECTIL_NAVE_01>(SpawnLocation, FireRotation);
	}

	//|*| PARA VERIFICAR EN CADA FOROGRAMA EL ESTADO DE LA NAVE |*|
	if (this->GetActorLocation().X < -2150.0f)
	{

		SetActorLocation(FVector(1000.f, NuevaPosicion.Y, NuevaPosicion.Z));
		//ComponentesUE_Sistema();
		//LevelPass->SetScore(100);
		//this->Destroy();


	}
	else if (Life <= 0.0f) {

		ComponentesUE_Sistema();
	}
}

void ASHIP_LEVEL_03::Recibir_Danio()
{
	//|*| PARA HACER DANIO A LA NAVE  |*|
	Life -= Danio_Recibido;
}

void ASHIP_LEVEL_03::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	//HandleCollision(OtherActor);
	AGALAGA_PD_USFX_LABO1Pawn* Nave_Principal = Cast<AGALAGA_PD_USFX_LABO1Pawn>(OtherActor);
	if (Nave_Principal)
	{
		//Nave_Principal->Damage();
		ComponentesUE_Sistema();
	}
}

void ASHIP_LEVEL_03::ComponentesUE_Sistema()
{
	Super::ComponentesUE_Sistema();

	//|*| PARA HACER USO DE LOS COMPONENTES DE RENDERIZADO PARA LA NAVE |*|

	// Efecto de partículas de explosion
	if (Explosion_Nave != nullptr)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorTransform());

	// Sonido de la explosion
	if (Sonido_Nave != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());

	Destroy();
}