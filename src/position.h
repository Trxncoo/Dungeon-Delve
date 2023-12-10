#ifndef POSITION_H
#define POSITION_H

typedef struct {
    int x;
    int y;
} Position;

void initializePosition(Position *position, int x, int y);

#endif //POSITON_H