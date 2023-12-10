#ifndef POOL_H
#define POOL_

#include "stdint.h"

typedef uint16_t pool_t;

typedef struct {
    pool_t max;
    pool_t current;
} Pool;

void initializePool(Pool *pool, pool_t maxAmount);
void increasePool(Pool *pool, pool_t amount);
void decreasePool(Pool *pool, pool_t amount);

#endif //POOL_H