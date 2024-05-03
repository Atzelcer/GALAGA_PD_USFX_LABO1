// Fill out your copyright notice in the Description page of Project Settings.


#include "BIU_SHIP_MASTER_OFENSIVA.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "GALAGA_PD_USFX_LABO1Projectile.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
ABIU_SHIP_MASTER_OFENSIVA::ABIU_SHIP_MASTER_OFENSIVA()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear y configurar el componente de malla estática
    Malla_Maestro_A = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Maestro_A"));
    RootComponent = Malla_Maestro_A;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Nodriza1.Nodriza1'"));
    if (MeshAsset.Succeeded())
    {
        Malla_Maestro_A->SetStaticMesh(MeshAsset.Object);
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

    // Configurar el componente de colisión
    Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));
    Colision_Nave->SetupAttachment(RootComponent);
    Colision_Nave->SetBoxExtent(FVector(100.f, 100.f, 100.f)); // Ajustar según las necesidades específicas de colisión

	Vida = 1800.0f;

}

void ABIU_SHIP_MASTER_OFENSIVA::ConstruirEscudo(AEscudo_Nave_M* Escudo)
{
    // Lógica para crear y configurar un escudo
    Escudo = NewObject<AEscudo_Nave_M>(this);
    if (Escudo)
    {
        Escudo->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    }
}// Called when the game starts or when spawned
void ABIU_SHIP_MASTER_OFENSIVA::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ABIU_SHIP_MASTER_OFENSIVA::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Silver, FString::Printf(TEXT("Vida Nave Maestra: %f"), Vida));
    }


    if (Vida <= 0) {

        Componentes_Destruccion();
    }

}

// Called to bind functionality to input
void ABIU_SHIP_MASTER_OFENSIVA::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABIU_SHIP_MASTER_OFENSIVA::ConstruirProyectil(APROYECTIL_P* Proyectil)
{
    // Lógica para crear y configurar proyectiles
    Proyectil = NewObject<APROYECTIL_P>(this);
    if (Proyectil)
    {
        Proyectil->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
    }
}

void ABIU_SHIP_MASTER_OFENSIVA::ConstruirFabricaNaves(AP_FM_FABRICA_NAVES* Fabrica_Nave)
{
}

void ABIU_SHIP_MASTER_OFENSIVA::Ubicacion_Nave_Maestra(FVector Posicion)
{
    ABIU_SHIP_MASTER_OFENSIVA* NaveMaestra;
    NaveMaestra = GetWorld()->SpawnActor<ABIU_SHIP_MASTER_OFENSIVA>(ABIU_SHIP_MASTER_OFENSIVA::StaticClass(), Posicion, FRotator(0.f, 180.f, 0.f));
    if (NaveMaestra)
    {
        NaveMaestra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    }
    if (!NaveMaestra)
    {
        UE_LOG(LogTemp, Error, TEXT("NaveMaestra(): Instanciación fallida, asegúrate de que esté inicializada correctamente."));
    }
}

void ABIU_SHIP_MASTER_OFENSIVA::SetShieldDistance(float Distance)
{
}

void ABIU_SHIP_MASTER_OFENSIVA::CaracteristicasNaveMaestra()
{
}

void ABIU_SHIP_MASTER_OFENSIVA::FireProjectile()
{
}

void ABIU_SHIP_MASTER_OFENSIVA::Componentes_Destruccion()
{
    //Efecto de Explosion 
    if (Explosion_Nave)
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorTransform());
    //Sonido de la explosion

    if (Sonido_Nave != nullptr)
        UGameplayStatics::PlaySoundAtLocation(this, Sonido_Nave, GetActorLocation());

    this->Destroy();
}

void ABIU_SHIP_MASTER_OFENSIVA::NotifyActorBeginOverlap(AActor* OtherActor)
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


void ABIU_SHIP_MASTER_OFENSIVA::Damage(float Danio)
{
	Vida -= Danio;
}


