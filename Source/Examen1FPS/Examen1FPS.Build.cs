// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Examen1FPS : ModuleRules
{
	public Examen1FPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
