/*
Evalate v1.0.0
(C) Copyright 2024 Evalate Authors <authors@evalate.dev>
MIT License
*/

#include "versioning.h"

#include <iostream>
#include <string>

extern std::string EVALATE_VER;
extern std::string EVALATE_COPYRIGHT;

int main(int argc, char* argv) {
    switch (argv[1]) {
        default:
            std::cout << "evalate: error: no valid arguments given." << std::endl;
    }
    return 0;
}