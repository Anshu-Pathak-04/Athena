// Created by: Anshu Pathak
// Created on: May 19, 2025
// Last Modified On: May 19, 2025
// Purpose: defines debugging functions


#ifndef athena_debug_h
#define athena_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif
