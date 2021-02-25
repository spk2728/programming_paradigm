#include "pokemon.h"

#include <cstdio>
#include <cstring>

Pokemon::Pokemon(const char* s) {
    strcpy(name, s);
    hp = 20;
    atk = 1;
}

void Pokemon::Rest() {
    hp = hp + 1;
    printf("%s rested and HP restored to %d.\n", name, hp);
}

void Pokemon::TakeDamge(int dmg) {
    hp = hp - dmg;
    printf("%s HP reduced to %d (-%d).\n", name, hp, dmg);
}

void Pokemon::Attack(Pokemon* other) {
    printf("%s attacked %s!\n", name, other->name);
    other->TakeDamge(atk);
}