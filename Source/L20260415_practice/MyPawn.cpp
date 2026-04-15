// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MyStaticMeshComponent.h"

//언리얼엔진 유틸리티
#include "Kismet/GameplayStatics.h"//이게 뭐지

#include "MyActor.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//여기서 부품 생성과 루트 설정함.

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box; //폰의 중심점을 박스로 하겠다. 
	Box->SetBoxExtent(FVector(40.0f, 44.2f, 12.4f));

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Box); //Body라는 매쉬를 Box에 자식으로 붙이겠다. 

	//에셋 외형 입히기 
	//하드디스크에 있는 모델 파일 찾아오기.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Body(TEXT("/Script/Engine.Blueprint'/Game/Blueprints/BP_Pawn.BP_Pawn'"));

	if (SM_Body.Succeeded())
	{
		Body->SetStaticMesh(SM_Body.Object);
	}

	Left = CreateDefaultSubobject<UMyStaticMeshComponent>(TEXT("Left"));
	Left->SetupAttachment(Body);
	

    Right = CreateDefaultSubobject<UMyStaticMeshComponent>(TEXT("Right"));
	Right->SetupAttachment(Body);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Propeller(TEXT("/Script/Engine.StaticMesh'/Game/P38/Meshes/SM_P38_Propeller.SM_P38_Propeller'"));
	if (SM_Propeller.Succeeded())
	{
		Left->SetStaticMesh(SM_Propeller.Object);
		Right->SetStaticMesh(SM_Propeller.Object);
	}

	Left->SetRelativeLocation(FVector(37.1f, -21.4f, 0.5f));
	Right->SetRelativeLocation(FVector(37.1f, 21.4f, 0.5f));

	//화살표
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Box);
	Arrow->SetRelativeLocation(FVector(200.f, 0, 0));


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Box);
	SpringArm->SocketOffset = FVector(0, 0, 33.33f);
	SpringArm->TargetArmLength = 120.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->MaxSpeed = MoveSpeed;
}

	


// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddMovementInput(GetActorForwardVector(), BoostValue);
	

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &AMyPawn::Pitch);
	PlayerInputComponent->BindAxis(TEXT("Roll"), this, &AMyPawn::Roll);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &AMyPawn::Fire);
	PlayerInputComponent->BindAction(TEXT("Boost"), EInputEvent::IE_Pressed, this, &AMyPawn::Boost);
	PlayerInputComponent->BindAction(TEXT("Boost"), EInputEvent::IE_Released, this, &AMyPawn::Unboost);


}

void AMyPawn::RotatePropeller(USceneComponent* Where, float RotaionSpeed)
{
	Where->AddLocalRotation(FRotator(0,0,RotaionSpeed * UGameplayStatics::GetWorldDeltaSeconds(GetWorld())));
}

void AMyPawn::Pitch(float Value)
{
	AddActorLocalRotation(FRotator(RotationSpeed * Value * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), 0, 0));
}

void AMyPawn::Roll(float Value)
{
	AddActorLocalRotation(FRotator(0, 0, RotationSpeed * Value * UGameplayStatics::GetWorldDeltaSeconds(GetWorld())));
}

void AMyPawn::Fire()
{
	GetWorld()->SpawnActor<AMyActor>(AMyActor::StaticClass(),
		Arrow->K2_GetComponentToWorld());
}

void AMyPawn::Boost()
{
	BoostValue = 1.0f;
}

void AMyPawn::Unboost()
{
	BoostValue = 0.5f;
}
