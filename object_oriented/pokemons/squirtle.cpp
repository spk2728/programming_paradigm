#include <cstdio>
#include <cstring>

#include "pokemon.h"

Squirtle::Squirtle(const char* s) : Pokemon(s) {
    strcpy(name, "Squirtle");
    atk = 3;  // modify initial stat
}
