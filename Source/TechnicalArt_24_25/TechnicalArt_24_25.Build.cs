// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TechnicalArt_24_25 : ModuleRules
{
	public TechnicalArt_24_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
