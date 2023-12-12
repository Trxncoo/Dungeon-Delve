#include "menu.h"

Menu *createMenu() {
    Menu *newMenu = (Menu*) malloc(sizeof(Menu));

    if(newMenu == NULL) {
        return NULL;
    }

    return newMenu;
}

void initializeMenu(Menu *menu) {
    int maxHeight, maxWidth;
    getmaxyx(stdscr, maxHeight, maxWidth);
    menu->window = createWindow(maxHeight, maxWidth, 2, 2);
    box(menu->window, 0, 0);
    menu->selectedOption = START_GAME;
}


void displayMenu(Menu *menu) {
    wclear(menu->window);

    int maxHeight, maxWidth;
    getmaxyx(menu->window, maxHeight, maxWidth);

    int centerX = maxWidth / 2; 

    for(unsigned int i = START_GAME; i < MENU_CHOICES; ++i) {
        if(i == menu->selectedOption) {
            mvwprintw(menu->window, i + 2, centerX - 7, "> ");
        } else {
            mvwprintw(menu->window, i + 2, centerX - 7, "  ");

        }

         switch (i) {
            case START_GAME:
                mvwprintw(menu->window, i + 2, centerX - 5, "Start Game\n");
                break;
            case LOAD_GAME:
                mvwprintw(menu->window, i + 2, centerX - 5, "Load Game\n");
                break;
            case SETTINGS:
                mvwprintw(menu->window, i + 2, centerX - 5, "Settings\n");
                break;
            case EXIT_GAME:
                mvwprintw(menu->window, i + 2, centerX - 5, "Exit\n");
                break;
        }
    }

    wrefresh(menu->window);
}