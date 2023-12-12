#ifndef MENU_H
#define MENU_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//#include "interface.h"

typedef enum {
    MENU_HEIGHT = 30,
    MENU_WIDTH = 120
} MapDimensions;

typedef enum {
    START_GAME,
    LOAD_GAME,
    SETTINGS,
    EXIT_GAME,
    MENU_CHOICES
} MenuOption;

typedef struct {
    MenuOption selectedOption;
    char chars[MENU_HEIGHT][MENU_WIDTH + 1];
} Menu;

Menu *createMenu();
void initializeMenu(Menu *menu);
int readMenuFromFile(Menu *menu, const char *filename);

#endif //MENU_H