#include <stdio.h>
#include "fileHandler.h"
#include "menu.h"

int main() {
    initscr();
    refresh();
    Menu *menu = createMenu();
    initializeMenu(menu);
    displayMenu(menu);
    getch();
    endwin();
    return 0;
}