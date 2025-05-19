// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 18, 2025
// Purpose: main execution file for the Athena Interpreter/Compiler

#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    // Testing

    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);

    disassembleChunk(&chunk, "test chunk");

    freeChunk(&chunk);
    return 0;
}