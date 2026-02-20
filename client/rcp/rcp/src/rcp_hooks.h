#ifndef RCP_HOOKS_H
#define RCP_HOOKS_H

#include <stddef.h>
#include <stdint.h>

typedef struct {
    int* arguments;
    size_t count;// for the number of arguments
    size_t capacity;
    int ret;
} TypeRecord;

typedef struct {
    TypeRecord *types;  
    size_t count;
    size_t capacity;
} TypeTrace;

#endif