// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UBoxComponent;
class UArrowComponent;
class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;
class UFloatingPawnMovement;
class UMyStaticMeshComponent;

UCLASS()
class L20260415_PRACTICE_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void RotatePropeller(USceneComponent* Where, float RotaionSpeed);
	//----------------------------
	// 
	// 컴포넌트들을 선언하는 부분. AMyPawn을 만들기위해 필요한 부품들을 정리해둔 것
	//UPROPERTY -> 언리얼 엔진 시스템이 관리하게 만들어줌
	//VisibleAnyWhere-> 언리얼 에디터 디테일 창에서 설정 볼 수 있게 해줌
	//BlueprintReadOnly -> 블프에서 이 값을 읽기만 가능
	//	TObjectPtr<UBoxComponent> Box; -> 언리얼 엔진 권장하는 포인터 방식



	//충돌 박스
	UPROPERTY(VisibleAnyWhere,BlueprintReadOnly, Category = Components)
	TObjectPtr<UBoxComponent> Box;

	//스태틱매쉬
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UStaticMeshComponent> Body;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UMyStaticMeshComponent> Left;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UMyStaticMeshComponent> Right;

	//화살표 방향(캐릭터가 보는 방향
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UArrowComponent> Arrow;

	//카메라 거리 셀카봉
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<USpringArmComponent> SpringArm;

	//카메라
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UCameraComponent> Camera;

	//이동처리
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Components)
	TObjectPtr<UFloatingPawnMovement> Movement;

	void Pitch(float Value);

	void Roll(float Value);

	void Fire();

	void Boost();

	void Unboost();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Data)
	float MoveSpeed = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Data)
	float RotationSpeed = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Data)
	float BoostValue = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Data)
	float PropellerRotationSpeed = 7200.0f;
};
