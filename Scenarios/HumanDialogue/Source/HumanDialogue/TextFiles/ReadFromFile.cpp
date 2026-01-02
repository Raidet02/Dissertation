#include "ReadFromFile.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

TArray<FString> UReadFromFile::ReadFile(FString FilePath)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		return TArray<FString>();
	}

	TArray<FString> RetString;

	if (!FFileHelper::LoadANSITextFileToStrings(*FilePath, NULL, RetString))
	{
		return TArray<FString>();
	}

	return RetString;
}

void UReadFromFile::WriteToFile(FString FilePath, FString String)
{
	
}
