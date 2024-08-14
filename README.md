## Installation

1. Ensure [vcpkg](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-cmd) is installed and
   your path to the installation directory is set in the environment variable
   ${VCPKG_ROOT}. Then run the following command:

```bash
vcpkg install
```

## Build

Note: configure the following option when running CMake:

-DCMAKE_TOOLCHAIN_FILE=/path-to-vcpkg/scripts/buildsystems/vcpkg.cmake

1. Configure the build using CMake:

```bash
cmake --preset=default 
```

2. Build the project:

```bash
cmake --build build
```

3. Run the application:

```bash
./build/snake
```

NOTE: If you are using a build configuration inside of an IDE, make sure your toolchain name is set to "default". In
CLion you can check
this by going to Settings > Build, Execution, Deployment > Toolchains > Name.