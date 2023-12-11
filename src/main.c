#include <stdio.h>
#include "player.h"
int main() {
    const char nome[MAX_NAME_SIZE] = "tomas";
    Player *player = createPlayer(nome, sizeof(nome));

    printf("%s\n", player->entity.name);
    free(player);
    return 0;
}