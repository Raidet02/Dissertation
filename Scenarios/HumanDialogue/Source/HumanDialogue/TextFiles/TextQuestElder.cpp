#include "TextQuestElder.h"

#include "ReadFromFile.h"
#include "ReadTextFromFile.h"

ATextQuestElder::ATextQuestElder()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATextQuestElder::GetDialogue()
{
	ElderP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/ElderP1Dialogue.txt");
	ElderP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/ElderP2Dialogue.txt");
	KnightDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/KnightDialogue.txt");
	PlayerP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/PlayerP1Dialogue.txt");
	PlayerP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/PlayerP2Dialogue.txt");
	PlayerP3Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/PlayerP3Dialogue.txt");
	WalkerDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/WalkerDialogue.txt");
	BarDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/BarDialogue.txt");
}

void ATextQuestElder::BeginPlay()
{
	Super::BeginPlay();
}
