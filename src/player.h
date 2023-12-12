#ifndef PLAYER_H
#define PLAYER_H


#include "entity.h"

typedef struct {
    Entity entity;
    int level;
} Player;

Player *createPlayer();  
int initializePlayer(Player *player, const char *name, size_t nameSize);

#endif //PLAYER_H