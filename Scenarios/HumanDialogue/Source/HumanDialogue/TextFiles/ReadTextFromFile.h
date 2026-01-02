#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ReadTextFromFile.generated.h"

UCLASS()
class HUMANDIALOGUE_API UReadTextFromFile : public USaveGame
{
	GENERATED_BODY()

public:
	FString SaveName = "HumanQuest";
	
	UPROPERTY(SaveGame, EditAnywhere)
	FString DialogueText;

	UFUNCTION()
	void LoadText();

	UFUNCTION()
	void GetText();
};
