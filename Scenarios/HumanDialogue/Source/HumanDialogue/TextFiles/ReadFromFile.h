#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadFromFile.generated.h"

UCLASS()
class HUMANDIALOGUE_API UReadFromFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<FString> ReadFile(FString FilePath);

	UFUNCTION(BlueprintCallable)
	static void WriteToFile(FString FilePath, FString String);
};
