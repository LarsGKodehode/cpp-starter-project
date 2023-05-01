# C and C++ devcontainer

A simple devcontainer that comes with compilers for C and C++.

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