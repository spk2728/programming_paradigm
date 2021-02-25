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
