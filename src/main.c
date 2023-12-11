#include <stdio.h>
#include "fileHandler.h"

int main() {

    Player *player = malloc(sizeof(Player));
    GameState *gameState = createGameState(player);

    loadGame("save.bin", gameState);
    printf("%s\n", player->entity.name);
    return 0;
}