#include "entity.h"

Entity *createEntity() {
    Entity *newEntity = (Entity*) malloc(sizeof(Entity));
    if(newEntity == NULL) {
        return NULL;
    }

    return newEntity;
}

int initializeEntity(Entity *entity, const char *name, size_t nameSize) {
    if(name == NULL || nameSize <= 0 || nameSize > MAX_NAME_SIZE) {
        return 0;
    }

    strncpy(entity->name, name, nameSize - 1);
    entity->name[nameSize - 1] = '\0';

    initializePosition(&entity->position, 0, 0);
    initializePool(&entity->health, 100);
    initializePool(&entity->mana, 100);
    return 1;
}