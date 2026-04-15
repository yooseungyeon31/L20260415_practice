// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
}

void AMyPlayerController::OnPosses(APawn* aPawn)
{
	Super::OnPosses(aPawn);

	if (!IsLocalPlayerController())
	{
		return;
	}

	if (ULocalPlayer* LocalPlayer = Cast <ULocalPlayer>(Player))
	{
		if(UEhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem, public)
	}
}
