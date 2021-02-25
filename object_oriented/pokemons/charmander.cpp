#include <cstdio>
#include <cstring>

#include "pokemon.h"

Charmander::Charmander(const char* s) : Pokemon(s) {
    strcpy(name, "Charmander");  //
}

void Charmander::Attack(Pokemon* other) {
    printf("%s attacked with flame!\n", name);
    other->TakeDamge(3);
    other->TakeDamge(2);
    other->TakeDamge(1);
}