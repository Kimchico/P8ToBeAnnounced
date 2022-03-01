// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class P8_VR_HOME_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (keywords = "Save"))
	static bool save_array_text(FString save_directory, FString file_name, TArray<FString> save_text, bool allow_overwriting);
};
