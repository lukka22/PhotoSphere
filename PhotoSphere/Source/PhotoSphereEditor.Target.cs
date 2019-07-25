

using UnrealBuildTool;
using System.Collections.Generic;

public class PhotoSphereEditorTarget : TargetRules
{
	public PhotoSphereEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "PhotoSphere" } );
	}
}
