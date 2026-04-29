// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MultiplayerTestGM.generated.h"

/**
 * 
 */
UCLASS()
class DATADRIVENUI_API AMultiplayerTestGM : public AGameModeBase
{
	GENERATED_BODY()

public:

	void PostLogin(APlayerController* NewPlayer) override;

	TArray<APlayerController*> playerList;
	
};
