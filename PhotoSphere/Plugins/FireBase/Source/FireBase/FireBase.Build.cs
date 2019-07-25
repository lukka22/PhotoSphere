// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class FireBase : ModuleRules
{
    private string EngineMajorVersion;
    private string EngineMinorVersion;
    private string EnginePatchVersion;


    private string ModulePath
    {
        get { return ModuleDirectory; }
    }

    string GetEngineDirectory()
    {
        string magicKey = "UE_ENGINE_DIRECTORY=";
        for (var i = 0; i < Definitions.Count; i++)
        {
            if (Definitions[i].IndexOf(magicKey) >= 0)
            {
                return Definitions[i].Substring(magicKey.Length + 1);
            }
        }

        return "";
    }

    private string ReadEngineVersion(string EngineDirectory)
    {
        string EngineVersionFile = Path.Combine(EngineDirectory, "Runtime", "Launch", "Resources", "Version.h");
        string[] EngineVersionLines = File.ReadAllLines(EngineVersionFile);
        for (int i = 0; i < EngineVersionLines.Length; ++i)
        {
            if (EngineVersionLines[i].StartsWith("#define ENGINE_MAJOR_VERSION"))
            {
                EngineMajorVersion = EngineVersionLines[i].Split('\t')[1].Trim(' ');
            }
            else if (EngineVersionLines[i].StartsWith("#define ENGINE_MINOR_VERSION"))
            {
                EngineMinorVersion = EngineVersionLines[i].Split('\t')[1].Trim(' ');
            }
            else if (EngineVersionLines[i].StartsWith("#define ENGINE_PATCH_VERSION"))
            {
                EnginePatchVersion = EngineVersionLines[i].Split('\t')[1].Trim(' ');
            }

        }

        return EngineMajorVersion + "." + EngineMinorVersion + "." + EnginePatchVersion;
    }


    public FireBase(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        string strEngineDir = GetEngineDirectory();
        string strEngineVersion = ReadEngineVersion(strEngineDir);

        System.Console.WriteLine("version:" + strEngineVersion);

        

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",

				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateIncludePaths.Add("FireBase/ThirdParty/FireBaseCpp/include");

            PrivateDependencyModuleNames.AddRange(
                new string[] {
                "Launch",
                }
                );

            PublicLibraryPaths.Add(Path.GetFullPath(Path.Combine(ModulePath, "ThirdParty/FireBaseCpp/libs/android/armeabi")));
            PublicLibraryPaths.Add(Path.GetFullPath(Path.Combine(ModulePath, "ThirdParty/FireBaseCpp/libs/android/armeabi-v7a")));
            //PublicLibraryPaths.Add(Path.GetFullPath(Path.Combine(ModulePath, "ThirdParty/FireBaseCpp/libs/android/arm64-v8a")));

            string[] StaticLibrariesAndroid = new string[] {
                "app",
                "database",
            };

            foreach (string Lib in StaticLibrariesAndroid)
            {
                PublicAdditionalLibraries.Add(Lib);
            }

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", Path.Combine(PluginPath, "FireBase_UPL.xml")));
        }
        else if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
        {
            PrivateIncludePaths.Add("FireBase/Private/Common");
            PrivateIncludePaths.Add("FireBase/Private/Windows");
            PrivateIncludePaths.Add("FireBase/ThirdParty/FireBaseCpp/include");

            PublicLibraryPaths.Add(Path.GetFullPath(Path.Combine(ModulePath, "ThirdParty/FireBaseCpp/libs/windows")));
        }
        /*else if(Target.Platform == UnrealTargetPlatform.UWP64 || Target.Platform == UnrealTargetPlatform.UWP32)
        {
            PrivateIncludePaths.Add("FireBase/Private/Common");
            PrivateIncludePaths.Add("FireBase/Private/Windows");
            PrivateIncludePaths.Add("FireBase/ThirdParty/FireBaseCpp/include");

            PublicLibraryPaths.Add(Path.GetFullPath(Path.Combine(ModulePath, "ThirdParty/FireBaseCpp/libs/windows")));
        }*/
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PrivateIncludePaths.Add("FireBase/Private/Common");
            PrivateIncludePaths.Add("FireBase/Private/Windows");
            PrivateIncludePaths.Add("FireBase/ThirdParty/FireBaseCpp/include");
        }
        else if(Target.Platform == UnrealTargetPlatform.IOS)
        {
            PrivateIncludePaths.Add("FireBase/Private/Common");
            PrivateIncludePaths.Add("FireBase/Private/Windows");
            PrivateIncludePaths.Add("FireBase/ThirdParty/FireBaseCpp/include");
        }
    }
}
