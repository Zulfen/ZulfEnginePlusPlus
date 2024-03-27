-- premake5.lua
workspace "New Project"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "App"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "ZulfEngine-Core"
	include "ZulfEngine-Core/Build-Core.lua"
group "ZulfEngine-Graphics"
	include "ZulfEngine-Graphics/Build-Graphics.lua"
group "ZulfEngine-Input"
	include "ZulfEngine-Input/Build-Input.lua"
group "ZulfEngine-Graphics"
	include "ZulfEngine-Core/Build-Graphics.lua"

include "ZulfEngine-App/Build-App.lua"