# Compilation of C or C++

GCC is a compiler from the GNU Project. There are several other options out there.

## [C](https://gcc.gnu.org/) <br>*- One to rule them all*

To compile a single C source file, run:
```sh
gcc <name-of-file>
```

If you want to specify the output binary use the **-o** option
```sh
gcc <name-of-file> -o <name-of-output-file>
```

## [C++](https://gcc.gnu.org/) <br>*- It is really the same*

TLDR:
```sh
g++ <name-of-file> -o <name-of-output-file>
```

### But why?

Long story short, C++ introduces a set of features that requires a different approach to combining multiple files, this is called [linking](https://stackoverflow.com/a/6264256).

Instead of using the shorthand *g++*, you could achive the same result by specifying which linker *gcc* is using by passing it in as an option
```sh
gcc <name-of-file> -lstdc++ -o <name-of-output-file>
```

If your C++ file does not perform a link step, this is unnecessary.