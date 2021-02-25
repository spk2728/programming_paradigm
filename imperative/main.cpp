#include <cstdio>

#include "pokemon.h"

int main() {
    printf("Game start!\n");

    printf("\n>>> Round 1 <<<\n\n");

    // Create object
    Pokemon a = Create(POKEMON, "Pokemon A");
    Pokemon b = Create(POKEMON, "Pokemon B");

    // Drawback 1:
    // Caller can modify the struct directly
    //
    // The following code are valid but not appropriate:
    // a.hp = 100;
    // b.atk = 10;

    // Call public methods
    Attack(&a, &b);
    Attack(&b, &a);
    Attack(&a, &b);
    Rest(&b);

    // Drawback 2:
    // New or special features have to be implemented by conditional code
    // in each related function.
    printf("\n>>> Round 2 <<<\n\n");

    // Create object of subclass with differnt atk
    Pokemon s = Create(SQUIRTLE, "Squirtle");
    Attack(&s, &b);

    // Create object of subclass with new methods
    Pokemon p = Create(PIKACHU, "Pikachu");
    Attack(&p, &b);

    Thunderbolt(&p, &b);

    // Create object of subclass which overrides existing methods
    Pokemon c = Create(CHARMANDER, "Charmander");
    Attack(&c, &b);

    printf("\n>>> Round 3 <<<\n\n");

    // Superclass variable can hold objects of its subclasses
    Pokemon *list[3] = {&s, &p, &c};

    // When the method is called, it uses the suitable method based on its
    // actually class. (called dynamic binding)
    for (int i = 0; i < 3; i++) {
        Attack(list[i], &a);
    }
}
