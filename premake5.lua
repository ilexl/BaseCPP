workspace "BaseCPP"
	architecture "x86_64"
	startproject "Application"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "BaseCPP/vendor/GLFW/include"
IncludeDir["Glad"] = "BaseCPP/vendor/Glad/include"
IncludeDir["ImGui"] = "BaseCPP/vendor/imgui"
IncludeDir["glm"] = "BaseCPP/vendor/glm"
IncludeDir["stb_image"] = "BaseCPP/vendor/stb_image"

group "Dependencies"
	include "BaseCPP/vendor/GLFW"
	include "BaseCPP/vendor/Glad"
	include "BaseCPP/vendor/imgui"

group ""

project "BaseCPP"
	location "BaseCPP"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "bcpch.h"
	pchsource "BaseCPP/src/bcpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/stb_image/**.h",
		"%{prj.name}/vendor/stb_image/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl",
	}

	defines
	{
		"_CRT_SECURE_NO_WARNINGS",
		"GLFW_INCLUDE_NONE"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.stb_image}"
	}

	links 
	{ 
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
		}

	filter "configurations:Debug"
		defines "bc_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "bc_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "bc_DIST"
		runtime "Release"
		optimize "on"

project "Application"
	location "Application"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"BaseCPP/vendor/spdlog/include",
		"BaseCPP/src",
		"BaseCPP/vendor",
		"%{IncludeDir.glm}"
	}

	links
	{
		"BaseCPP"
	}

	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"
		defines "bc_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "bc_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "bc_DIST"
		runtime "Release"
		optimize "on"
