# Hello world in Python

Python is a high-level, general-purpose programming language that is used for many different types of applications, with its main interpreter being CPython (written in C). It is used for web development, machine learning, data science, and much more. It is famous for its simplicity and readability.

Python is currently the most popular programming language in the world. Beginners often choose Python as their first programming language because it is easy to learn and has a large community of developers. Many libraries also exist for Python such as [NumPy](https://numpy.org/) and [Pandas](https://pandas.pydata.org/), improving the development process.

With the rise of AI and machine learning, Python has become even more popular with libraries such as [TensorFlow](https://www.tensorflow.org/) and [PyTorch](https://pytorch.org/). The primary reason that Python is used for machine learning is that Python can make direct calls to C++ code. This allows Python to be extremely fast while still being easy to use.

However, Python is also criticized a lot. It is infamous for being slow, even compared to similar languages like JavaScript. This is due to things such as the [Global Interpreter Lock](https://wiki.python.org/moin/GlobalInterpreterLock), which prevents multiple threads from running at the same time. In addition, its dynamic typing disallows it to be used in any large-scale projects.

## Prerequisites

- [Python](https://www.python.org/)

## How to run

1. Run `python hello_world.py`.

## Side note: Why the code contains an `if __name__ == "__main__"` statement

This common pattern in Python is used to prevent the code from being executed when the file is imported. This is because when a file is imported, the code inside the file is executed, leading to unexpected behavior:

```py
# my_library.py

def add(a: float, b: float):
    return a + b

print("I loaded!")
```

```py
# other_library.py

import my_library as ml

def subtract(a: float, b: float):
    return ml.add(a, -b)
```

```py
# main.py
import my_library as ml
import other_library as ol

print(ml.add(1, 2))
```

When `main.py` is run, the output is:

```bash
$ python main.py
I loaded!
I loaded!
3
```

This is because when `other_library.py` is imported, the code inside `my_library.py` is executed. While this isn't very problematic when it just prints something, imagine it loading a file or retrieving information from a server. You wouldn't want to accidentally repeat those actions. Hence, we can use the `if __name__ == "__main__"` statement to prevent this:

```py
# my_library.py

def add(a: float, b: float):
    return a + b

if __name__ == "__main__":
    print("I loaded!")
```

This way, the code inside the `if` statement is only executed when the file is run directly, not when it is imported. The output of `main.py` is now:

```bash
$ python main.py
3
```
