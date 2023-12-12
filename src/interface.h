#ifndef INTERFACE_H
#define INTERFACE_H

#include <ncurses.h>

WINDOW *createWindow(int maxHeight, int maxWidth, int beginY, int beginX);

#endif //INTERFACE_H