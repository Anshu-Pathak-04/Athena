// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 18, 2025
// Purpose: Implementation of memory.h

#include <stdlib.h>
#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    // Frees pointer memory if newSize is 0 aka deallocating memory entirely
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }

    // Reallocates memory block to the larger memory block at the same location
    void* result = realloc(pointer, newSize);

    // In theory, reallocation/allocation can fail, in which case we terminate
    // Application would suggest this rarely, if ever happens
    if (result == NULL) exit(1);
    return result;
}


