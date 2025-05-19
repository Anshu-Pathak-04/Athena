// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 18, 2025
// Purpose: defines macros and functions for handling Dynamic Arrays

#ifndef athena_memory_h
#define athena_memory_h

#include "common.h"

// Macro that calculates next best Chunk size;
// Common modifier is 2, but we use 1.5 in our case in order to minimize over-allocation
#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 1.5)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), \
    sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif
