# x64 Conversion Status

## Progress

This document tracks the conversion of TLBB Server projects from 32-bit (Win32) to 64-bit (x64).

### Completed Projects (5/5) ✅

- [x] **Server.sln** - Solution file updated with x64 platform configurations
- [x] **BillingServer** (Billing.vcxproj)
- [x] **GameServer** (Server.vcxproj)
- [x] **LoginServer** (Login.vcxproj)
- [x] **ShareMemory** (ShareMemory.vcxproj)
- [x] **WorldServer** (World.vcxproj)

## Changes Made

For each project, the following configurations were added:

1. **Platform Configurations**: Added Debug|x64 and Release|x64
2. **PropertyGroups**: Added x64-specific configuration settings
3. **ImportGroups**: Added x64 property sheet imports
4. **Output Directories**: Configured separate output paths for x64 builds:
   - Debug_x64 and Release_x64 folders
5. **ItemDefinitionGroups**: Added compiler and linker settings for x64
6. **PrecompiledHeader**: Added x64 conditions for precompiled headers

## Build Instructions (After Completion)

### Using Visual Studio 2017+

1. Open `SourceCodeGameTLBB/Server/Server.sln`
2. Select **Release | x64** from the configuration dropdown
3. Build > Build Solution (or press F7)
4. The 64-bit executables will be in: `Server/_Bin/Release_x64/`

### Using MSBuild Command Line

```powershell
cd "F:\Source code\SourceCodeGameTLBB\Server"
msbuild Server.sln /p:Configuration=Release /p:Platform=x64
```

## Output Location

The 64-bit executables will be generated in:

- `F:\Source code\SourceCodeGameTLBB\Server\_Bin\Release_x64\`

Files:

- BillingServer.exe
- GameServer.exe
- LoginServer.exe
- ShareMemory.exe
- WorldServer.exe

## Notes

- The x64 build configurations inherit most settings from Win32
- Removed platform-specific settings like TargetMachine (automatically handled for x64)
- All include paths and dependencies remain the same
