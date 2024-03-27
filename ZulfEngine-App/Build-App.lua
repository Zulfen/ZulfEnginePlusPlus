project "ZulfEngine-App"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++20"
   targetdir "Binaries/%{cfg.buildcfg}"
   staticruntime "off"

   files { "src/**.h", "src/**.cpp" }

   includedirs
   {
      "src",

	  -- Include Core
	  "../ZulfEngine-Core/src",
      -- Include Graphics
	  "../ZulfEngine-Graphics/src",
      -- Include Input
	  --"../ZulfEngine-Input/src",
      -- Include Networking
	  --"../ZulfEngine-Networking/src"
      
   }

   links
   {
      "ZulfEngine-Core",
      "ZulfEngine-Graphics",
      --"ZulfEngine-Input",
      --"ZulfEngine-Networking"
   }

   targetdir ("../Binaries/" .. OutputDir .. "/%{prj.name}")
   objdir ("../Binaries/Intermediates/" .. OutputDir .. "/%{prj.name}")

   filter "system:windows"
       systemversion "latest"
       defines { "WINDOWS" }

   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"