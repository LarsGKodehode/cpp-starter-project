# C and C++ devcontainer

A simple devcontainer that comes with compilers for C and C++.

## Content

- [Test it](#test-it)
- [Prerequisites](#prequisite)
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

## Resources

The docs section contains information and, possibly, introductory tutorials for how to use them.
References are far more technical. I recommend reading the headlines of the various standard libraries, to acquaint yourself with the structure of the languages, and to know where to look for information for **when** you get stuck.

- Docs
  - [GCC](https://gcc.gnu.org/onlinedocs/)
  - [CMake](https://cmake.org/documentation/)

- References
  - [C](https://en.cppreference.com/w/c)
  - [C++](https://en.cppreference.com/w/cpp)