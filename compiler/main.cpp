// Evalate Programming Language v0.0.0
// (C) Copyright 2024 Ben Daws, Evalate Authors
// MIT License

#define EVALATE_VERSION "v0.0.0"
#define EVALATE_BUILD "main" // can be "main" or "testing", testing gives all output it can :)
#define EVALATE_REPO "https://github.com/evalate/evalate" // If you provide your own distro-specific build, put it here

#include <iostream>

int main(int argc, char* argv) {
    std::cout << *argv << std::endl;
}