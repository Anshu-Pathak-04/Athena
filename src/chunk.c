// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 18, 2025
// Purpose: Implementation of chunk.h

#include <stdlib.h>
#include "chunk.h"
#include "memory.h"

void initChunk(Chunk* chunk) {
    // Initializes default Chunk as completely empty and with 0 space
    chunk->count = 0;
    chunk->capacity = 0;
    chunk->code = NULL;
}

void writeChunk(Chunk* chunk, uint8_t byte) {
    // Dynamically grows array, iff full
    if(chunk->capacity < chunk->count + 1) {
        int oldCapacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(oldCapacity);
        chunk->code = GROW_ARRAY(uint8_t, chunk->code, oldCapacity, chunk->capacity);
    }

    // Adds new bytecode instruction to the end of Chunk
    chunk->code[chunk->count] = byte;
    chunk->count++;
}

void freeChunk(Chunk* chunk) {
    FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
    initChunk(chunk);
}