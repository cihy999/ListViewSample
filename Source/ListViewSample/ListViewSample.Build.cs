// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ListViewSample : ModuleRules
{
	public ListViewSample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"UMG",
		});
	}
}
