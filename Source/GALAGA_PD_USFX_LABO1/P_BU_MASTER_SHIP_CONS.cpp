// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BU_MASTER_SHIP_CONS.h"
#include "GALAGA_PD_USFX_LABO1Pawn.h"
#include "PROYECTIL_LAZER.h"
#include "PROYECTIL_MISSIL_P.h"
#include "PROYECTIL_ESFERA_ENERGIA.h"
#include "PROYECTIL_BOMBA_EXP.h"
#include "PROYECTIL_P.h"
#include "Escudo_Nave_M.h"
#include "P_FM_FABRICA_NAVES.h"



// Sets default values
AP_BU_MASTER_SHIP_CONS::AP_BU_MASTER_SHIP_CONS()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Vida = 1800.0f;
	Tiempo_Disparo = 0.0f;
    Tiempo_Disparo_Generar = 2.f;
    Distancia_Disparo = FVector(0.f, 0.f, 0.f);
}

void AP_BU_MASTER_SHIP_CONS::BeginPlay()
{
    Super::BeginPlay();

    //// Iniciar un temporizador para disparar cada 2 segundos, por ejemplo
    //GetWorld()->GetTimerManager().SetTimer(FiringTimerHandle, this, &AP_BU_MASTER_SHIP_CONS::FireProjectile, 2.0f, true, 2.0f);
}


// Called every frame
void AP_BU_MASTER_SHIP_CONS::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Blue, FString::Printf(TEXT("Vida Nave Maestra: %f"), Vida));
    }

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

    Tiempo_Disparo += DeltaTime;
    if (Tiempo_Disparo >= Tiempo_Disparo_Generar) {
        Tiempo_Disparo = 0.0f;
        // Dirección hacia adelante de la nave. Asumimos que la nave dispara hacia adelante
        const FVector ForwardDirection = - GetActorForwardVector();
        // Calcula la ubicación de disparo ajustando la distancia en la dirección hacia adelante
        const FVector SpawnLocation = GetActorLocation() + ForwardDirection /** Distancia_Disparo.X*/;

        const FRotator FireRotation = ForwardDirection.Rotation();
        UWorld* const World = GetWorld();
        if (World != nullptr) {
            World->SpawnActor<APROYECTIL_LAZER>(SpawnLocation, FireRotation);
        }
    }
}





//if (NaveMaestra)
//{
//    FVector SpawnLocation = NaveMaestra->GetActorLocation() + NaveMaestra->GetActorForwardVector() * 400; // Desplazamiento hacia adelante
//    FRotator SpawnRotation = NaveMaestra->GetActorRotation();

//    // Cambia APROYECTIL_LAZER por el tipo de proyectil que desees disparar
//    APROYECTIL_LAZER* Projectile = GetWorld()->SpawnActor<APROYECTIL_LAZER>(APROYECTIL_LAZER::StaticClass(), SpawnLocation, SpawnRotation);
//    if (Projectile)
//    {
//        // Establecer la velocidad inicial del proyectil en la dirección de la nave
//        Projectile->ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * Projectile->ProjectileMovement->MaxSpeed);
//        Projectile->ProjectileMovement->Activate();
//    }



// Called to bind functionality to input
void AP_BU_MASTER_SHIP_CONS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AP_BU_MASTER_SHIP_CONS::Construir_Escudo(AEscudo_Nave_M* NuevoEscudo)
{
    Escudo = NuevoEscudo;
    Escudo->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}



void AP_BU_MASTER_SHIP_CONS::Construir_Proyectil(APROYECTIL_P* NuevoProyectil)
{
    Proyectil = NuevoProyectil;
    Proyectil->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


    // Validar si el proyectil es válido
    if (!Proyectil)
    {
        UE_LOG(LogTemp, Error, TEXT("El proyectil no es válido"));
        return;
    }

    // Instanciar el proyectil específico según su tipo
    if (Proyectil->IsA(APROYECTIL_BOMBA_EXP::StaticClass()))
    {
        APROYECTIL_BOMBA_EXP* Bomba = GetWorld()->SpawnActor<APROYECTIL_BOMBA_EXP>(APROYECTIL_BOMBA_EXP::StaticClass());
        // Configurar y personalizar la bomba según sea necesario
        // Por ejemplo:
        // Bomba->SetDanioProvocado(20.0f);
    }
    else if (Proyectil->IsA(APROYECTIL_LAZER::StaticClass()))
    {
        APROYECTIL_LAZER* Lazer = GetWorld()->SpawnActor<APROYECTIL_LAZER>(APROYECTIL_LAZER::StaticClass());
        // Configurar y personalizar el láser según sea necesario
    }
    else if (Proyectil->IsA(APROYECTIL_MISSIL_P::StaticClass()))
    {
        APROYECTIL_MISSIL_P* Misil = GetWorld()->SpawnActor<APROYECTIL_MISSIL_P>(APROYECTIL_MISSIL_P::StaticClass());
        // Configurar y personalizar el misil según sea necesario
    }
    else if (Proyectil->IsA(APROYECTIL_ESFERA_ENERGIA::StaticClass()))
    {
        APROYECTIL_ESFERA_ENERGIA* Esfera = GetWorld()->SpawnActor<APROYECTIL_ESFERA_ENERGIA>(APROYECTIL_ESFERA_ENERGIA::StaticClass());
        // Configurar y personalizar la esfera de energía según sea necesario
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Tipo de proyectil desconocido"));
    }
}


void AP_BU_MASTER_SHIP_CONS::Construir_Fabrica_Naves(AP_FM_FABRICA_NAVES* NuevaFabrica)
{
    Fabrica_Nave = NuevaFabrica;
    Fabrica_Nave->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}



void AP_BU_MASTER_SHIP_CONS::Ubicacion_Nave_Maestra(FVector Posicion)
{
	NaveMaestra = GetWorld()->SpawnActor<AP_BU_MASTER_SHIP_CONS_02>(AP_BU_MASTER_SHIP_CONS_02::StaticClass(), Posicion, FRotator(0.f, 180.f, 0.f));
	if (NaveMaestra)
	{
		NaveMaestra->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		//NaveMaestra->SetMeshScale(FVector(3.0f, 3.0f, 3.0f)); // Escala x2 en todas las dimensiones
	}
	if (!NaveMaestra) { UE_LOG(LogTemp, Error, TEXT("NaveMaestra():Lodging is NULL, make sure it's initialized.")); return; }
}

void AP_BU_MASTER_SHIP_CONS::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Clear the firing timer when the actor is destroyed or unloaded
    GetWorld()->GetTimerManager().ClearTimer(FiringTimerHandle);
}

void AP_BU_MASTER_SHIP_CONS::BuildMesh()
{
	NaveMaestra->Malla_Maestro_A->SetStaticMesh(Malla_Nave_Maestra_B);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Nave_Mesh"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Escudo Creado"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Fabrica de Nave"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proyectiles Creado"));

}

void AP_BU_MASTER_SHIP_CONS::FireProjectile(float DeltaTime)
{
    //if (NaveMaestra)
    //{
    //    // Ajusta la distancia de disparo modificando el vector de desplazamiento
    //    FVector ForwardOffset = NaveMaestra->GetActorForwardVector() * DistanciaDisparo.X; // Ajusta aquí según necesites
    //    FVector SpawnLocation = NaveMaestra->GetActorLocation() + ForwardOffset;
    //    FRotator SpawnRotation = NaveMaestra->GetActorRotation();

    //    APROYECTIL_LAZER* Projectile = GetWorld()->SpawnActor<APROYECTIL_LAZER>(APROYECTIL_LAZER::StaticClass(), SpawnLocation, SpawnRotation);
    //    if (Projectile)
    //    {
    //        // Establecer la velocidad inicial del proyectil en la dirección de la nave
    //        Projectile->ProjectileMovement->Velocity = SpawnRotation.Vector() * Projectile->ProjectileMovement->InitialSpeed;
    //    }
    //}
}


AP_BU_MASTER_SHIP_CONS_02* AP_BU_MASTER_SHIP_CONS::Get_Master_Maestra()
{
	return nullptr;
}

