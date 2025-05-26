// Created by: Anshu Pathak
// Created on: May 18, 2025
// Last Modified On: May 19, 2025
// Purpose: main execution file for the Athena Interpreter/Compiler

#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    // Testing

    Chunk chunk;

    initChunk(&chunk);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant, 123);

    writeChunk(&chunk, OP_RETURN, 123);

    disassembleChunk(&chunk, "new chunk");
    freeChunk(&chunk);

    return 0;
}