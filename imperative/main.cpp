#include <cstdio>

#include "pokemon.h"

int main() {
    printf("Game start!\n");

    /***************************************************************************
     * Encapsulation:
     * - Internal states, logics and implementations are hided from outside.
     * - Caller can only manipulate the object through public methods.
     * - This facilitate modular design and maintanence of code.
     **************************************************************************/

    printf("\n>>> Round 1 <<<\n\n");

    // Create object
    Pokemon a = Create(POKEMON, "Pokemon A");
    Pokemon b = Create(POKEMON, "Pokemon B");

    // Call public methods
    Attack(&a, &b);
    Attack(&b, &a);
    Attack(&a, &b);
    Rest(&b);

    // ERROR: cannot access private or protected members
    // a.hp = 100;
    // b.atk = 10;

    /***************************************************************************
     * Inheritance:
     * - A subclass inherites all members from it's superclass.
     * - This facilitate the reuse of code.
     * - A subclass can add new members and methods, and override existing
     *   methods.
     **************************************************************************/

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

    /***************************************************************************
     * Polymorphism:
     * - The same method behaves differently according to its caller's class.
     * - So each pokemon attacks in their own way!
     **************************************************************************/

    printf("\n>>> Round 3 <<<\n\n");

    // Superclass variable can hold objects of its subclasses
    Pokemon *list[3] = {&s, &p, &c};

    // When the method is called, it uses the suitable method based on its
    // actually class. (called dynamic binding)
    for (int i = 0; i < 3; i++) {
        Attack(list[i], &a);
    }
}
