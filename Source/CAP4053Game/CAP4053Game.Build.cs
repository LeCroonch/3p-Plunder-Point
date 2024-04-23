// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CAP4053Game : ModuleRules
{
	public CAP4053Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
