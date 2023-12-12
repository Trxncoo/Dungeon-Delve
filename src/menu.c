#include "menu.h"

Menu *createMenu() {
    Menu *newMenu = (Menu*) malloc(sizeof(Menu));
    if(newMenu == NULL) {
        return NULL;        // TODO: Handle Bad alloc
    }

    return newMenu;
}

void initializeMenu(Menu *menu) {
    readMenuFromFile(menu, "menu.txt");
    menu->selectedOption = START_GAME;
}

int readMenuFromFile(Menu *menu, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char line[MENU_WIDTH + 2];

    for(int i = 0; i < MENU_HEIGHT && fgets(line, sizeof(line), file) != NULL; ++i) {
        if (line[0] == '\n' || line[0] == '\r') {
            i--; // Skip empty lines
            continue;
        }
        line[strcspn(line, "\n\r")] = '\0'; // Remove newline
        
        strcpy(menu->chars[i], line); // Copy line to menu buffer
    } 

    fclose(file);
    return 1;
}

