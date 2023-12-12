#ifndef MENU_H
#define MENU_H

#include <stdlib.h>
#include "interface.h"

#define MAX_TITLE_SIZE 14

typedef enum {
    START_GAME,
    LOAD_GAME,
    SETTINGS,
    EXIT_GAME,
    MENU_CHOICES
} MenuOption;

typedef struct {
    MenuOption selectedOption;
    WINDOW *window;
} Menu;

Menu *createMenu();
void initializeMenu(Menu *menu);
void displayMenu(Menu *menu);


#endif //MENU_H