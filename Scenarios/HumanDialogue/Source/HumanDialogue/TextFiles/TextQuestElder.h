#pragma once

#include "CoreMinimal.h"
#include "ReadFromFile.h"
#include "GameFramework/Actor.h"
#include "TextQuestElder.generated.h"

UCLASS()
class HUMANDIALOGUE_API ATextQuestElder : public AActor
{
	GENERATED_BODY()

public:
	ATextQuestElder();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> ElderP1Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> ElderP2Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> KnightDialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> PlayerP1Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> PlayerP2Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> PlayerP3Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> WalkerDialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> BarDialogue;

	UReadFromFile* ReadFromFile;

	UFUNCTION(BlueprintCallable)
	void GetDialogue();
	
protected:
	virtual void BeginPlay() override;
};
