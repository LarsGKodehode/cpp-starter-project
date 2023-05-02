# C and C++ devcontainer

A simple devcontainer that comes with compilers for C and C++.

## Content

- [Test it](#test-it)
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
  - [C++](https://en.cppreference.com/w/cpp)