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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIElderP1Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIElderP2Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIKnightDialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIPlayerP1Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIPlayerP2Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIPlayerP3Dialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIWalkerDialogue;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> GAIBarDialogue;

	UReadFromFile* ReadFromFile;

	UFUNCTION(BlueprintCallable)
	void GetDialogue();
	
protected:
	virtual void BeginPlay() override;
};
