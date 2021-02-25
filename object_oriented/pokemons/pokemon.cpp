#include "pokemon.h"

#include <cstdio>
#include <cstring>

Pokemon::Pokemon(const char* s) {
    strcpy(name, s);
    hp = 20;
    atk = 1;
}

void Pokemon::Rest() {
    printf("%s rested for a while.\n", name);
    hp = hp + 1;
    printf("%s HP is restored to %d (+%d).\n", name, hp, 1);
    printf("\n");
}

void Pokemon::TakeDamge(int dmg) {
    hp = hp - dmg;
    printf("%s HP is reduced to %d (-%d).\n", name, hp, dmg);
}

void Pokemon::Attack(Pokemon* other) {
    printf("%s attacked %s!\n", name, other->name);
    other->TakeDamge(atk);
    printf("\n");
}
