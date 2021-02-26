# Imperative Programming Paradigm (Single file)

## Introduction

In this practice, we will learn to

* Compile a **C++ program** using command line
* Seperate declaration and implementation using **header file**
* Create a **makefile** to automate build tasks

## Tasks

### Task 1: Add header file and makefile

1. Change working directory to `simple`
   
   ```sh
   cd simple
   ```

2. Compile `main.cpp` and run the executable `main.exe` produced
   
   ```sh
   g++ main.cpp -o main
   main
   ```

3. Add `pokemon.h` and `pokemon.cpp` to the folder. Move the `typedef` and `function` codes from `main.cpp` to the two files as follows:
   1. `pokemon.h` stores the `typedef` and `function` declarations
   2. `pokemon.cpp` stores the `function` implementations and `#include` the declarations from `pokemon.h`
   3. `main.cpp` now contains only the `main()` function and `#include` the declarations from `pokemon.h`

4. Compile and link all files to an executable `main.exe` and run it
   
   ```sh
   g++ pokemon.cpp main.cpp -o main
   main
   ```

5. Add `Makefile` to the folder. The file contains the commands and build dependencies as follows:
   
   ```makefile
   all: pokemon.o main

   clean:
      rm *.o *.exe

   main: pokemon.o
      g++ pokemon.o main.cpp -o main

   pokemon.o:
      g++ -c pokemon.cpp
   ```

6. Build the object files and executable using the `make` commands
   
   ```sh
   # Build object file
   make pokemon.o
   # Build executable (depends on pokemon.o)
   make main
   # Clean all object files and executable
   make clean
   # Build all target files
   make all
   # Build the first target
   make
   ```

7. Everytime you modify the code, you should clean the project  and re-build again

   ```sh
   make clean
   make
   ```

### Task 2: Add new pokemons

1. Squirtle has default atk of 3 instead of 1
2. Pikachu has a special attack "Thunderbolt" which deals 10 dmg.
3. Charmander's normal attack has a DoT effect (3 dmg, 2 dmg, 1 dmg).

## Next step

Move on to the [imperative](../imperative) folder and follow the instruction there to add and modify Pokemons.