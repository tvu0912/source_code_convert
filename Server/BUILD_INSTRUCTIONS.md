# Build Instructions for 64-bit Executables

## ✅ Project Conversion Complete!

All 5 server projects have been successfully converted from 32-bit (Win32) to 64-bit (x64):

- ✅ BillingServer
- ✅ GameServer
- ✅ LoginServer
- ✅ ShareMemory
- ✅ WorldServer

## Method 1: Build Using Visual Studio (Recommended)

1. **Open the Solution:**

   - Navigate to: `F:\Source code\SourceCodeGameTLBB\Server`
   - Open `Server.sln` in Visual Studio 2017 or later

2. **Select x64 Configuration:**

   - In the toolbar, change the platform dropdown from "Win32" to **"x64"**
   - Change the configuration from "Debug" to **"Release"**

3. **Build:**

   - Click **Build → Build Solution** (or press F7)
   - Wait for all 5 projects to compile

4. **Find Your Executables:**
   - Location: `F:\Source code\SourceCodeGameTLBB\Server\_Bin\Release_x64\`
   - Files:
     - BillingServer.exe (64-bit)
     - GameServer.exe (64-bit)
     - LoginServer.exe (64-bit)
     - ShareMemory.exe (64-bit)
     - WorldServer.exe (64-bit)

## Method 2: Build Using MSBuild Command Line

Open **Developer Command Prompt for VS 2017** (or later) and run:

```cmd
cd "F:\Source code\SourceCodeGameTLBB\Server"
msbuild Server.sln /p:Configuration=Release /p:Platform=x64 /m
```

Or if you know your MSBuild path:

```powershell
& "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" Server.sln /p:Configuration=Release /p:Platform=x64 /m
```

## Method 3: Build Individual Projects

If you only need specific executables:

```cmd
msbuild Server\WorldServer\World\World.vcxproj /p:Configuration=Release /p:Platform=x64
msbuild Server\GameServer\Server\Server.vcxproj /p:Configuration=Release /p:Platform=x64
msbuild Server\LoginServer\Login\Login.vcxproj /p:Configuration=Release /p:Platform=x64
msbuild Server\BillingServer\Billing\Billing.vcxproj /p:Configuration=Release /p:Platform=x64
msbuild Server\ShareMemory\ShareMemory\ShareMemory.vcxproj /p:Configuration=Release /p:Platform=x64
```

## Verification

After building, verify the executables are 64-bit:

```powershell
cd "F:\Source code\SourceCodeGameTLBB\Server\_Bin\Release_x64"
dir *.exe

# Check if they're 64-bit using PowerShell:
Get-Item *.exe | ForEach-Object {
    $pe = [System.IO.File]::ReadAllBytes($_.FullName)[0..1]
    Write-Host "$($_.Name): $(if ([BitConverter]::ToUInt16($pe, 0) -eq 0x5A4D) {'PE File'} else {'Unknown'})"
}
```

## Troubleshooting

### Missing Visual Studio Build Tools

If MSBuild is not found, install:

- Visual Studio 2017 or later (Community Edition is free)
- Or "Build Tools for Visual Studio" from Microsoft

### Compilation Errors

If you encounter errors:

1. Ensure you have Visual Studio 2017 v141 toolset installed
2. Check that Windows SDK is installed
3. Verify all source files are present in the Common, Server directories

### Missing Dependencies

If linker errors occur, ensure:

- `ws2_32.lib` (Windows Sockets) is available (should be standard)
- All .lib files referenced in the projects exist

## Deploying to VPS

Once built, copy these files to your 64-bit Windows VPS:

- All `.exe` files from `_Bin\Release_x64\`
- Any required `.dll` files
- Configuration files (.ini, .conf, etc.)
- Data files if needed

## Notes

- The x64 builds output to separate directories (`Release_x64`) to avoid conflicts with 32-bit builds
- All compiler optimizations are enabled for Release builds
- The executables are statically linked with MultiThreaded runtime for portability
- Debug symbols (.pdb files) are generated for debugging if needed

## Support

If you encounter issues:

1. Check that Visual Studio 2017+ is installed with C++ workload
2. Verify the v141 platform toolset is installed
3. Ensure Windows 10 SDK is present
4. Try cleaning the solution and rebuilding (Build → Clean Solution, then Build Solution)
