# C and C++ devcontainer

A simple devcontainer that comes with compilers for C and C++.

## Content

- [Test it](#test-it)
- [CMake](#cmake)
- [Prerequisites](#prequisite)
- [Configuration](#prequisite)
- [Resources](#resources)

## Test it

1. Clone repository and start a [devcontainer](https://code.visualstudio.com/docs/devcontainers/tutorial) in VS Code.

2. Manualy compile on of the programs inside *src*, [How to compile](docs/Compilers.md)

3. Run the program from the terminal by specifying the binary name.

Example:
```sh
# Compile
gcc src/hello.c -o helloWorld

# Run the binary
helloWorld
```

## [CMake](https://cmake.org/)

CMake is a build system for building, testing and packaging software. It is installed in the [devcontainer](.devcontainer/Dockerfile) under build tools, and uses the [CMakeLists.txt](CMakeLists.txt) spread around the repository.

To use:
1. Run the CMake configuration to setup CMake, [VS Code Command Palett](https://code.visualstudio.com/api/ux-guidelines/command-palette) > CMake: Configure. And select gcc as the compiler. <br>
This should create a build folder, where CMake will stor it's files

2. Run CMake with the build folder as an argument
```sh
cmake --build build
```
This walks through all the CMakeLists.txt and compiles, links and tests your project. At the end it spits out a executable inside [build/bin](build/bin/) that you can run from as a terminal program.

3. Run the executable
```sh
build/bin/CPPStarter
````

## Prequisite

- Some way to run containers, simplest is probably [Docker Desktop](https://www.docker.com/products/docker-desktop/)

## Configuration

This devcontainer uses a slim variant of Debian Bullseye. In other words, you will likely have to install any extra libraries you want to use into the container. If the package is available on the [Debian Package Repository](https://www.debian.org/distrib/packages) just add them to be installed at the last layer in the [Dockerfile](.devcontainer/Dockerfile), save and rebuild the container.

Otherwise you could use CMake to manage [external dependencies](https://cmake.org/cmake/help/latest/module/ExternalProject.html).

Another option, if the library is hosted in a Git Repository, you could go for [Git Submodules](https://lchsk.com/how-to-use-git-submodules-and-cmake-to-install-c-libraries).

A third option would be to add [Conan](https://conan.io/) to your project.

Lastly, if you have access to the source files, you could just grab them and dump them somewhere in the project. One pattern is to stuff all the external dependencies into a *vendor* folder.

## Resources

The docs section contains information and, possibly, introductory tutorials for how to use them.
References are far more technical. I recommend reading the headlines of the various standard libraries, to acquaint yourself with the structure of the languages, and to know where to look for information for **when** you get stuck.

- Docs
  - [GCC](https://gcc.gnu.org/onlinedocs/)
  - [CMake](https://cmake.org/documentation/)

- References
  - [C](https://en.cppreference.com/w/c)
  - [C Standard Library Headers](https://en.cppreference.com/w/c/header)
  - [C++](https://en.cppreference.com/w/cpp)
  - [C++ Standard Library Headers](https://en.cppreference.com/w/cpp/header)