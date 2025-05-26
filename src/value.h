// Created by: Anshu Pathak
// Created on: May 19, 2025
// Last Modified On: May 19, 2025
// Purpose: defines and holds the different value types we use for constants


#ifndef athena_value_h
#define athena_value_h

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);

void printValue(Value value);

#endif
