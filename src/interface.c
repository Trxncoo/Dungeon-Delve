#include "interface.h"

WINDOW *createWindow(int maxHeight, int maxWidth, int beginY, int beginX) {
    WINDOW *newWindow = newwin(maxHeight, maxWidth, beginY, beginX);

    if(newWindow == NULL) {
        return NULL;
    }

    return newWindow;
}