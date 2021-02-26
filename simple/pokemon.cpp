#include <cstdio>
#include <cstring>

#include "pokemon.h"

/**
 * Creates a pokemon
 */
Pokemon Create(Type t, const char* name) {
    Pokemon p;
    p.t = t;
    strcpy(p.name, name);
    p.hp = 20;
    p.atk = 1;
    return p;
}

/**
 * Rests and recovers 1 hp.
 */
void Rest(Pokemon* p) {
    printf("%s rested for a while.\n", p->name);
    p->hp = p->hp + 1;
    printf("%s HP is restored to %d (+%d).\n", p->name, p->hp, 1);
    printf("\n");
}

/**
 * Takes damage and reduces hp.
 */
void TakeDamge(Pokemon* p, int dmg) {
    p->hp = p->hp - dmg;
    printf("%s HP is reduced to %d (-%d).\n", p->name, p->hp, dmg);
}

/**
 * Attacks other pokemon
 */
void Attack(Pokemon* p, Pokemon* other) {
    printf("%s attacked %s!\n", p->name, other->name);
    TakeDamge(other, p->atk);
    printf("\n");
}
