#include "player.h"

int initializePlayer(Player *player, const char *name, size_t nameSize) {
    if(name == NULL || nameSize <= 0 || nameSize > MAX_NAME_SIZE) {
        return 0;
    }

    strncpy(player->name, name, nameSize - 1);
    player->name[nameSize - 1] = '\0';

    initializePosition(&player->position, 0, 0);
    initializePool(&player->health, 100);
    initializePool(&player->mana, 100);

    return 1;
}
