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
    char **argument_names; // names captured once per function
    size_t argument_count;
    SEXP first_arg_sym; // TAG of first formal; R_NilValue if no formals
    // We use it to identify where the arguments start, as locals are first prepended in the environment
    
} TypeTrace;

#endif