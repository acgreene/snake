## Build

1. Install the [latest release](https://github.com/libsdl-org/SDL/releases) of [sdl2](https://www.libsdl.org/) onto your
   system. Here is the link to the [sdl2 installation instructions](https://wiki.libsdl.org/SDL2/Installation), and in
   case that is
   confusing [here is a guide that I found helpful](https://lazyfoo.net/tutorials/SDL/01_hello_SDL/index.php).

    - Ensure that you have the environment variable LD_LIBRARY_PATH set to the path on your system that contains the
      SDL
      shared libraries. If using an IDE with a CMake build tool, also ensure this environment variable is set there.
      I'm on linux and for me it was set to /usr/local/lib

2. Create the Makefile in the build directory:

```bash
cd build && cmake ../
```

3. Compile the project and make the executable:

```bash
make
```

4. Run the Snake executable

```bash
./Snake
```