// Evalate Programming Language v0.0.0
// (C) Copyright 2024 Ben Daws, Evalate Authors
// MIT License

#include "headers/split.h"

std::vector<std::string> parsestring(char *string) {
    /*
    What does parsestring() do?

    It just takes the command line flags from parseflags() and splits
    based on = sign and "" strings. It is just used for parsing each
    flag and is better than relying on exact positioning for flags.
    */

   return split(string, "=");
}

std::vector<std::string> parseflags(char *argv) {
    std::vector<std::string> args;
    
    for (int i = 0; i < sizeof(argv); i++) {
        args[i] = argv[i];
    }
    
    return args;
}