// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 18, 2025
// Purpose: defines the structures and functions necessary for the bytecode "chunks"

#ifndef athena_chunk_h
#define athena_chunk_h

#include "common.h"
#include "value.h"

// Defines lists of OpCodes
typedef enum {
    OP_RETURN,
    OP_CONSTANT,
} OpCode;

// Defines structure of a bytecode instruction sequence
typedef struct {
    uint8_t* code;
    int count;
    int capacity;
    ValueArray constants;
    int* lines;
} Chunk;

// Handling functions for the chunks
void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
void freeChunk(Chunk* chunk);

int addConstant(Chunk* chunk, Value value);

#endif