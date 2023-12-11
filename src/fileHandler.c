#include "fileHandler.h"

int saveGame(const char *fileName, const GameState *gameState) {
    FILE *file = fopen(fileName, "wb");
    if(file == NULL) {
        fclose(file);
        return 0;
    } 
    
    fwrite(gameState->playerData, sizeof(Player), 1, file);
    fclose(file);
    return 1;
}

int loadGame(const char *fileName, const GameState *gameState) {
    FILE *file = fopen(fileName, "rb");
    if(file == NULL) {
        fclose(file);
        return 0;
    } 
    
    fread(gameState->playerData, sizeof(Player), 1, file);
    fclose(file);
    return 1;
}

GameState *createGameState(Player *player) {
    GameState *newGameState = (GameState*) malloc(sizeof(GameState));
    if(newGameState == NULL) {
        return NULL;
    }

    int initResult = initializeGameState(newGameState, player);
    if(initResult == 0) {
        free(newGameState);
        return NULL;
    }

    return newGameState;
}

int initializeGameState(GameState *gameState, Player *player) {
    if(player == NULL) {
        return 0;
    }
    gameState->playerData = player;
    return 1;
}