#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>
#include "player.h"

typedef struct {
    Player *playerData;

} GameState;

int saveGame(const char *fileName, const GameState *gameState);
int loadGame(const char *fileName, const GameState *gameState);

GameState *createGameState(Player *player);
int initializeGameState(GameState *gameState, Player *player);

#endif //FILE_HANDLER_H