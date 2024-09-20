# Evalate Standard Library

Evalate comes pre-installed with a couple different header files so you can start working in the language easier. This doc will go over their names, functions, and authors.

## ``std``: Standard Library
``std`` will take regular functions such as ``println()`` and use the extern built-in function to convert them to C++ code and execute them.

### ``println(string text)``
Prints to the screen.
```cpp
std.println("test");
std.println("test2");
```
```
test
test2
```

### ``printrw(string text)``
Prints to the screen. Does not append ``\n`` like ``println()``.
```cpp
std.println("test");
std.println("test2");
```

```
testtest2
```

### TODO list
- Implementations in the extern() function to return values, so input functions can be added to std