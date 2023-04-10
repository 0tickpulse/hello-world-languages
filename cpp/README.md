# Hello world in C++

C++, released in 1985 by Danish computer scientist Bjarne Stroustrup, is a high-level general-purpose, compiled language that was released as an extension of C or "C with Classes". It adds many features to C, such as classes, templates, and exceptions. Many companies provide C++ compilers, such as Microsoft, Intel, IBM, and Oracle.

While C++ was designed with systems programming in mind, it has also been used for other products. For example, a popular use of C++ is the Unreal Engine, which is used to create many popular video games such as Fortnite and Gears of War.

## Criticisms

> "C++ is a horrible [object-oriented] language… And limiting your project to C means that people don’t screw things up with any idiotic “object model” crap."
>
> Linus Torvalds, creator of Linux

The main criticism is that C++ is extremely complex and difficult to learn, with many non-orthogonal features that (in practice) restrict developers to coding with a mere subset of C++.

Other criticisms include long compilation times, extremely verbose error messages, and a lack of reflection.

## Prerequisites

- [GCC](https://gcc.gnu.org/): The GNU Compiler Collection, a compiler for C, C++, and other languages. You can also use the [Clang](https://clang.llvm.org/) compiler, which is a C/C++/Objective-C compiler.

## How to run

If you're on a Unix system, you can use the makefile to compile and run the program. Run `make build` to compile the program, and `make run` to run the program. Otherwise, follow these steps:

1. Run `gcc main.cpp -o main` to compile the program. If you use Clang, run `clang main.c -o main`.
2. Run `./main` to run the program.
