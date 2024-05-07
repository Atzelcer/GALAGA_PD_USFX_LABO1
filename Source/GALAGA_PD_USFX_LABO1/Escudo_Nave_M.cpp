#include "Escudo_Nave_M.h"
#include "P_BU_MASTER_SHIP_CONS_02.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AEscudo_Nave_M::AEscudo_Nave_M()
{
    PrimaryActorTick.bCanEverTick = true;

    Escudo_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
    RootComponent = Escudo_Mesh;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShieldMeshAsset(TEXT("StaticMesh'/Game/ASSETS/VARIOS_A/Speed.Speed'"));
    if (ShieldMeshAsset.Succeeded())
    {
        Escudo_Mesh->SetStaticMesh(ShieldMeshAsset.Object);
        Escudo_Mesh->SetWorldScale3D(FVector(4.f, 50.f, 10.f));
    }

    Colision_Escudo = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Escudo"));
    Colision_Escudo->SetupAttachment(RootComponent);
    Colision_Escudo->SetBoxExtent(FVector(10.f, 10.f, 10.f));
    Colision_Escudo->OnComponentBeginOverlap.AddDynamic(this, &AEscudo_Nave_M::OnShieldOverlapBegin);

    Health = 100;
    Distancia_Escudo = 200.f;
    bIsShieldActive = false; // Asegúrate de inicializar esto en false
}

void AEscudo_Nave_M::BeginPlay()
{
    Super::BeginPlay();
    ActivateShield();
}

void AEscudo_Nave_M::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    AP_BU_MASTER_SHIP_CONS_02* MasterShip = Cast<AP_BU_MASTER_SHIP_CONS_02>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (MasterShip && bIsShieldActive)
    {
        SetActorLocation(MasterShip->GetActorLocation() + MasterShip->GetActorForwardVector() * Distancia_Escudo);
        SetActorRotation(MasterShip->GetActorRotation());
    }
}

void AEscudo_Nave_M::ActivateShield()
{
    if (!bIsShieldActive)
    {
        bIsShieldActive = true;
        Escudo_Mesh->SetVisibility(true);
        Colision_Escudo->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        Health = 100;  // Restablece la salud del escudo al activar
    }
}

void AEscudo_Nave_M::DeactivateShield()
{
    if (bIsShieldActive)
    {
        bIsShieldActive = false;
        Escudo_Mesh->SetVisibility(false, true);
    }
}

void AEscudo_Nave_M::Damage(float DamageAmount)
{
    Health -= DamageAmount;
    if (Health <= 0)
    {
        DeactivateShield();
    }
}

bool AEscudo_Nave_M::IsShieldActive() const
{
    return bIsShieldActive;
}

void AEscudo_Nave_M::OnShieldOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Damage(10.0f);
}
