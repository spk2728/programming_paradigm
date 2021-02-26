# Object-oriented Programming Paradigm

## Introduction

In this practice, we will experience the benefits and drawbacks of [Object-oriented Programming Paradigm](https://en.wikipedia.org/wiki/Object-oriented_programming) using `C++`.

## Tasks

### Task 1: Add new pokemons

1. Change working directory to `object_oriented`.
   
   ```sh
   cd object_oriented
   ```

2. Build the project using the `make` commands.
   
   ```sh
   make clean
   make
   ```

3. Add a new pokemon `Bulbasaur` which has 30 HP and 2 ATK. It takes 1 less damage on every hit and has a special attack `VineWhip` which deals 5 damage.
   
4. Modify `main.cpp` and test the new pokemon.
   
5. Evaluate the changes required to add a number of new pokemons in the future.

### Task 2: Modify game mechanism and add DLC

1. Add a `def` property which represents the defend point of a `Pokemon`. The default `def` is `0`. 
2. Add a `rec` property which represents the recovery power of a `Pokemon`. The default `rec` is `1`.
3. Modify the `Attack` and `TakeDamage` functions to update the game mechanism. When `a` attacks `b`, the damage received by `b` is calculated by `dmg = a.atk - b.def`. 
4. Split the `Rest()` function into `Rest()` and `Restore(int)` such that `Rest()` would calls `Restore(rec)` to restores HP based on the value of `rec`.
5. Add `dlc` folder, `dlc/dlc.h` and `dlc/dlc.cpp` files
6. Add two new pokemons by declaring them in `dlc/dlc.h` and implementing in `dlc/dlc.cpp`
   1. `Chansey` which has 2 REC and a special move `NaturalCure` which restores 5 HP.
   2. `Geodude` which has 2 DEF and reflect half of the damage to the attacker when being attacked.

## Next step

Learning object-oriented programming through C++ is not recommended since C++ is much more difficult to learn and master.

Some beginner-friendly object-oriented programming languages:

* [C#](https://docs.microsoft.com/en-us/dotnet/csharp/)
* [Java](https://www.java.com/)