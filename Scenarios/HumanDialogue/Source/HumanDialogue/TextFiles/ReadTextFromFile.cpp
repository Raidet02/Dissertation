#include "ReadTextFromFile.h"

#include "Kismet/GameplayStatics.h"

void UReadTextFromFile::LoadText()
{
	if (UReadTextFromFile* LoadText = Cast<UReadTextFromFile>(UGameplayStatics::LoadGameFromSlot(TEXT("TEST.txt"), 0)))
	{
		UE_LOG(LogTemp, Warning, TEXT("TEST.txt"));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *LoadText->DialogueText);
	}
}

void UReadTextFromFile::GetText()
{
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *DialogueText);
}
