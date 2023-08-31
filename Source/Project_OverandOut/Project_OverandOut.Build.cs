// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_OverandOut : ModuleRules
{
	public Project_OverandOut(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
