#ifndef PLAYER_H
#define PLAYER_H

#include <stdlib.h>
#include <string.h>
#include "pool.h"
#include "position.h"

#define MAX_NAME_SIZE 17 // 16 + 1 for '\0'

typedef struct {
    char name[MAX_NAME_SIZE];
    Position position;
    Pool health;
    Pool mana;
} Player;

int initializePlayer(Player *player, const char *name, size_t nameSize);

#endif //PLAYER_H