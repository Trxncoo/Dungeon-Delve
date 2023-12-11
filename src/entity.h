#ifndef ENTITY_H
#define ENTITY_H

#include <stdlib.h>
#include <string.h>
#include "pool.h"
#include "position.h"

#define MAX_NAME_SIZE 17 // 16 + 1 for '\0'

typedef struct {
    char name[MAX_NAME_SIZE];
    Position position;
    Pool health;
    Pool mana;
} Entity;

Entity *createEntity(const char *name, size_t nameSize); // TODO: REMOVE NAME AND INITIALIZATION FROM CREATION TO MAKE IT MORE MODULAR
int initializeEntity(Entity *entity, const char *name, size_t nameSize);

#endif //ENTITY_H