// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyCPPTest1HUD.generated.h"

UCLASS()
class AMyCPPTest1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyCPPTest1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

