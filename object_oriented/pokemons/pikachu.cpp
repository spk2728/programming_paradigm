#include <cstdio>
#include <cstring>

#include "pokemon.h"

Pikachu::Pikachu(const char* s) : Pokemon(s) {}

void Pikachu::Thunderbolt(Pokemon* other) {
    printf("%s used \"10,000,000 Volt Thunderbolt!\"\n", name);
    other->TakeDamge(10);
    printf("\n");
}