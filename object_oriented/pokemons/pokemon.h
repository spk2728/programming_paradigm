#pragma once

/**
 * Parent class of Pokemon.
 * All types of pokemons are children of this class.
 */
class Pokemon {
   protected:
    char name[100];
    int hp;
    int atk;

   public:
    Pokemon(const char* s);
    void Rest();
    void TakeDamge(int dmg);
    virtual void Attack(Pokemon* other);  // Allow polymorphism
};

/**
 * Squirtle has default atk of 3 instead of 1.
 */
class Squirtle : public Pokemon {
   public:
    Squirtle(const char* s);
};

/**
 * Pikachu has a special attack "Thunderbolt" which causes 10 dmg.
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