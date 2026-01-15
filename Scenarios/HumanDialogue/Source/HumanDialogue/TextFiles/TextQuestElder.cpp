#include "TextQuestElder.h"

#include "ReadFromFile.h"
#include "ReadTextFromFile.h"

ATextQuestElder::ATextQuestElder()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATextQuestElder::GetDialogue()
{
	ElderP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/ElderP1Dialogue.txt");
	ElderP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/ElderP2Dialogue.txt");
	KnightDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/KnightDialogue.txt");
	PlayerP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/PlayerP1Dialogue.txt");
	PlayerP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/PlayerP2Dialogue.txt");
	PlayerP3Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/PlayerP3Dialogue.txt");
	WalkerDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/WalkerDialogue.txt");
	BarDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/HumanDialogue/BarDialogue.txt");

	GAIElderP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIElderP1Dialogue.txt");
	GAIElderP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIElderP2Dialogue.txt");
	GAIKnightDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIKnightDialogue.txt");
	GAIPlayerP1Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIPlayerP1Dialogue.txt");
	GAIPlayerP2Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIPlayerP2Dialogue.txt");
	GAIPlayerP3Dialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIPlayerP3Dialogue.txt");
	GAIWalkerDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIWalkerDialogue.txt");
	GAIBarDialogue = ReadFromFile->ReadFile(FPaths::ProjectDir()+"/GAIDialogue/GAIBarDialogue.txt");
}

void ATextQuestElder::BeginPlay()
{
	Super::BeginPlay();
}
