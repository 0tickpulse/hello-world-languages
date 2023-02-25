# Hello world in C

C is a general-purpose, procedural computer programming language supporting concepts such as structured programming, lexical variable scope, and recursion, with a static type system.

C is a highly influential language: It is used in many projects such as the Linux kernel. Its syntax inspired the syntax of many other languages, such as C++, C#, Java, and JavaScript, so much so that they are often referred to as "C-syntax" languages.

However, the popularity of C has slowly declined over the years as users choose other languages such as Java, Python, and JavaScript. Those languages, while not as fast as C, offer higher-level abstractions such as garbage collection and are therefore easier to use. Performance is not as much of a concern as it used to be, as computers have become much faster over the years. Furthermore, other systems programming languages such as Rust and Go have been created to replace C.

## Prerequisites

- [GCC](https://gcc.gnu.org/): The GNU Compiler Collection, a compiler for C, C++, and other languages. You can also use the [Clang](https://clang.llvm.org/) compiler, which is a C/C++/Objective-C compiler.

## How to run

If you're on a Unix system, you can use the makefile to compile and run the program. Run `make build` to compile the program, and `make run` to run the program. Otherwise, follow these steps:

1. Run `gcc hello.c -o hello` to compile the program. If you use Clang, run `clang hello.c -o hello`.
2. Run `./hello` to run the program.
