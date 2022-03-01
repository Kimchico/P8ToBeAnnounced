// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::save_array_text(FString save_directory, FString file_name, TArray<FString> save_text, bool allow_overwriting = false){
    // Set complete file path
    save_directory += "\\";
    save_directory += file_name;

    if(!allow_overwriting){
        if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*save_directory)){
            return false;
        }
    }

    FString final_string = "";
    for(FString& each : save_text){
        final_string += each;
        final_string += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(final_string, *save_directory);
}

