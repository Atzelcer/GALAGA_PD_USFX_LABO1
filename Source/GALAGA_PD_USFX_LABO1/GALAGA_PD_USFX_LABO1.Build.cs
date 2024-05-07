// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GALAGA_PD_USFX_LABO1 : ModuleRules
{
	public GALAGA_PD_USFX_LABO1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","UMG" });
		PublicDependencyModuleNames.AddRange(new string[] { });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
