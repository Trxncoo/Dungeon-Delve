#include "pool.h"

void initializePool(Pool *pool, pool_t maxAmount) {
    pool->max = maxAmount;
    pool->current = maxAmount;
}

void increasePool(Pool *pool, pool_t amount) {
    pool_t newCurrent = pool->current + amount;
    if(newCurrent >= pool->max) {
        pool->current = pool->max;
    } else {
        pool->current = newCurrent;
    }
}

void decreasePool(Pool *pool, pool_t amount) {
    if(amount >= pool->current) {
        pool->current = 0;
    } else {
        pool->current -= amount;
    }
}