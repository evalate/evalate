# Evalate CLI
The CLI compiles your programs into executables. See all the flags and their usage below.

## ``-s=[file.evl]``
``-s`` defines the file to compile.

```bash
evalate -s=/home/eva/mycode.evl
```

When compiling using this flag, it's also common to use ``-o`` to define the output binary's name.

## ``-o=[bin]``
``-o`` defines what to name the generated binary.

### OSX / Linux / *nix
```bash
evalate -s=/home/eva/mycode.evl -o=/home/eva/myexecutable
```
### Windows
```bash
evalate -s=/home/eva/mycode.evl -o=/home/eva/myexecutable.exe
```