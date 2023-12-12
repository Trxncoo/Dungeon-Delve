#include <stdio.h>
#include "fileHandler.h"
#include "menu.h"

int main() {
    Menu *menu = createMenu();
    initializeMenu(menu);
    for (int i = 0; i < MENU_HEIGHT; ++i) {
        printf("%s\n", menu->chars[i]);
    }
    return 0;
}