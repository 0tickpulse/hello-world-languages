# Hello world in C-Sharp

C# (pronounced `See-Sharp`) is a high-level, general-purpose programming language developed by Microsoft that runs on the .NET Framework. It is used to create web apps, desktop apps, mobile apps, games, and more.

*Microsoft wanted to design this as an improvement to C++, but also took a lot of inspiration from Java, so much so that some call it "Microsoft's Java". What's ironic is that recently Java has been taking a lot of inspiration from C#.*

## Prerequisites

- [.NET Core](https://dotnet.microsoft.com/download): A free and open-source, managed computer software framework for Windows, Linux, and macOS.

## How to run

1. Run `dotnet run --project ./HelloWorld` to run the program.

## Side note: top-level statements

The code provided uses top-level statements, which is a new feature in C# 9.0. It allows you to write code without having to write a `Main` method:

```csharp
using System;

Console.WriteLine("Hello, World!");
```

This is equivalent to:

```csharp
using System;

public class Program
{
    public static void Main()
    {
        Console.WriteLine("Hello, World!");
    }
}
```

This addition allows you to write code that is more concise and easier to read. (Unlike C#, in Java you have to write a `public static void main(String[] args)` method for every program.)
