#include "player.h"

Player *createPlayer(const char *name, size_t nameSize) {
    Player *newPlayer = (Player*) malloc(sizeof(Player));
    if(newPlayer == NULL) {
        return NULL;
    }

    int initResult = initializePlayer(newPlayer, name, nameSize);
    if(initResult == 0) {
        free(newPlayer);
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
