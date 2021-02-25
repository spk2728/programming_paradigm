#include <cstdio>
#include <cstring>

/**
 * Type of pokemons
 */
typedef enum { POKEMON, SQUIRTLE, PIKACHU, CHARMANDER } Type;

/**
 * Pokemon type.
 */
typedef struct {
    Type t;
    char name[100];
    int hp;
    int atk;
} Pokemon;

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
    p->hp = p->hp + 1;
    printf("%s rested and HP restored to %d.\n", p->name, p->hp);
}

/**
 * Takes damage and reduces hp.
 */
void TakeDamge(Pokemon* p, int dmg) {
    p->hp = p->hp - dmg;
    printf("%s received %d damage and HP reduced to %d.\n", p->name, dmg,
           p->hp);
}

/**
 * Attacks other pokemon
 */
void Attack(Pokemon* p, Pokemon* other) {
    printf("%s attacked %s!\n", p->name, other->name);
    TakeDamge(other, p->atk);
}

/**
 * Main program
 */
int main() {
    printf("Game start!\n");
    printf("\n>>> Round 1 <<<\n\n");

    // Create object
    Pokemon a = Create(POKEMON, "Pokemon A");
    Pokemon b = Create(POKEMON, "Pokemon B");

    // Call public methods
    Attack(&a, &b);
    Attack(&b, &a);
    Attack(&a, &b);
    Rest(&b);
    printf("\n");
}
