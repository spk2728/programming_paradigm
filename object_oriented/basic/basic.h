#pragma once

#include "../pokemon.h"

/**
 * Squirtle has default atk of 3 instead of 1.
 */
class Squirtle : public Pokemon {
   public:
    Squirtle(const char* s);
};

/**
 * Pikachu has a special attack "Thunderbolt" which deals 10 dmg.
 */
class Pikachu : public Pokemon {
   public:
    Pikachu(const char* s);
    void Thunderbolt(Pokemon* other);  // New method
};

/**
 * Charmander's normal attack has a DoT effect (3 dmg, 2 dmg, 1 dmg).
 */
class Charmander : public Pokemon {
   public:
    Charmander(const char* s);
    void Attack(Pokemon* other);  // Override existing method
};