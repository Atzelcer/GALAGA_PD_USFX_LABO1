// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMINAS_ESPACIALES_01.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "SHIP_P.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"


AMyMINAS_ESPACIALES_01::AMyMINAS_ESPACIALES_01()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (MeshAsset.Succeeded())
	{
		Malla_Mina->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.0f, 1.0f, 1.0f); // Escala modificada
		Malla_Mina->SetWorldScale3D(NewScale);
	}

    // Configuración de efectos visuales y sonoros
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ParticleAsset.Succeeded()) {
        ExplosionParticles = ParticleAsset.Object; // Asignar sistema de partículas
    }

    static ConstructorHelpers::FObjectFinder<USoundBase> SoundAssetA(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
    if (SoundAssetA.Succeeded()) {
        ExplosionSound = SoundAssetA.Object; // Asignar sonido de explosión
    }


}

void AMyMINAS_ESPACIALES_01::BeginPlay()
{
	Super::BeginPlay();
}

void AMyMINAS_ESPACIALES_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyMINAS_ESPACIALES_01::NotifyActorBeginOverlap(AActor* OtherActor)
{
    // Este es el radio dentro del cual la bomba puede afectar a otras naves.
    float ExplosionRadius = 400.0f;

    // Usamos un temporizador para retrasar la reacción después de la colisión.
    FTimerHandle TimerHandle;

    // Programar un evento para ejecutarse después de 5 segundos.
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, ExplosionRadius]() {
        // Lista para almacenar todos los actores dentro del radio de explosión.

        //definimos un contenedor para que luego se pueda llenar con los actores que se encuentren en el radio de la bomba
        TArray<AActor*> ActorsToDestroy;

        // Obtener todos los actores de la clase AActor dentro del mundo del juego.
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), ActorsToDestroy);

        // Revisar cada actor obtenido para ver si es una nave enemiga y si está dentro del radio.
        for (AActor* Actor : ActorsToDestroy)
        {
            // Intentar convertir el actor a ANaveEnemiga.
            ASHIP_P* EnemyShip = Cast<ASHIP_P>(Actor);
            if (EnemyShip && EnemyShip->GetDistanceTo(this) <= ExplosionRadius)
            {
                // Si es una nave enemiga y está dentro del radio, destruirla.
                EnemyShip->Destroy();
            }
        }

        // Si el interruptor 'Conpuerta' está activo, realizar la explosión.
        if (Conpuerta)
        {
            Componentes_Explosion();
            Conpuerta = false; // Desactivar el interruptor para evitar futuras explosiones.
        }

        }, 5.0f, false); // El retraso es de 5 segundos y no se repite automáticamente.
}

void AMyMINAS_ESPACIALES_01::Componentes_Explosion()
{
    if (ExplosionParticles) {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorLocation());
    }
    if (ExplosionSound) {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());
    }
    // Destruir la bomba al impactar con un objeto
    Destroy();
}
