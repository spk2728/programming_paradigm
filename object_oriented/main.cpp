#include <cstdio>

#include "basic/basic.h"
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
    Pokemon a("Pokemon A");
    Pokemon b("Pokemon B");

    // Call public methods
    a.Attack(&b);
    b.Attack(&a);
    a.Attack(&b);
    b.Rest();

    // ERROR: cannot access private or protected members
    // a.hp = 100;
    // b.atk = 10;

    /***************************************************************************
     * Inheritance:
     * - A subclass (child) inherites all members from it's superclass (parent).
     * - This facilitates the reuse of code.
     * - A subclass can add new members and methods, and override existing
     *   methods.
     **************************************************************************/

    printf("\n>>> Round 2 <<<\n\n");

    // Create object of subclass with differnt atk
    Squirtle s("Squirtle");
    s.Attack(&b);

    // Create object of subclass with new methods
    Pikachu p("Pikachu");
    p.Attack(&b);
    p.Thunderbolt(&b);

    // Create object of subclass which overrides existing methods
    Charmander c("Charmander");
    c.Attack(&b);

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
    a.Rest();
    for (int i = 0; i < 3; i++) {
        list[i]->Attack(&a);
    }
}
