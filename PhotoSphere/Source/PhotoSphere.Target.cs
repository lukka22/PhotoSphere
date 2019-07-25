

using UnrealBuildTool;
using System.Collections.Generic;

public class PhotoSphereTarget : TargetRules
{
	public PhotoSphereTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "PhotoSphere" } );
	}
}
