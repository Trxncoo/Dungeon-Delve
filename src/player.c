#include "player.h"

Player *createPlayer() {
    Player *newPlayer = (Player*) malloc(sizeof(Player));
    if(newPlayer == NULL) {
        return NULL;
    }

    return newPlayer;
}

int initializePlayer(Player *player, const char *name, size_t nameSize) {
    Entity *entity = &player->entity;
    int initialize = initializeEntity(entity, name, nameSize);
    if(initialize == 0) {
        return 0;
    }

    player->level = 1;
    return 1;
}
