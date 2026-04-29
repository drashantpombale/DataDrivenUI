// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/MultiplayerTestGM.h"
#include "Examples/MultiplayerTestPC.h"

void AMultiplayerTestGM::PostLogin(APlayerController* NewPlayer)
{

    Super::PostLogin(NewPlayer);

    playerList.Add(NewPlayer);
}
