// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HumanDialogue : ModuleRules
{
	public HumanDialogue(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"HumanDialogue",
			"HumanDialogue/Variant_Horror",
			"HumanDialogue/Variant_Horror/UI",
			"HumanDialogue/Variant_Shooter",
			"HumanDialogue/Variant_Shooter/AI",
			"HumanDialogue/Variant_Shooter/UI",
			"HumanDialogue/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
