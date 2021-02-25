#include <cstdio>
#include <cstring>

#include "pokemon.h"

Pikachu::Pikachu(const char* s) : Pokemon(s) {
    strcpy(name, "Pikachu");  //
}

void Pikachu::Thunderbolt(Pokemon* other) {
    printf("%s used 10,000,000 volt thunderbolt!\n", name);
    other->TakeDamge(10);
}