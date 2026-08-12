#ifndef RCP_HOOKS_H
#define RCP_HOOKS_H

#include <stddef.h>
#include <stdint.h>
#include <Rinternals.h>

/* Sentinel stored in TypeRecord.arguments[i] / dots_types[i] when a formal (or
   a ... element) is a missing argument (R_MissingArg: no default, not
   supplied). The value equals R's NA_INTEGER (INT_MIN), so when it is written
   into an integer vector it surfaces in R as NA -- matching injectr, which
   records missing arguments as NA. This avoids mis-recording them as `symbol`.
   We use the integer literal rather than the R_NaInt runtime global because the
   JIT stencils cannot link ordinary R globals. */
#define RCP_ARG_MISSING (-2147483647 - 1)

typedef struct {
    int* arguments;
    SEXP* dots_names;
    int* dots_types;
    size_t dots_count;
    size_t count;// for the number of arguments
    size_t capacity;
    int ret;
} TypeRecord;

typedef struct {
    TypeRecord *types;  
    size_t count;
    size_t capacity;
    SEXP *argument_names; // fixed formal names captured once per function
    size_t argument_count;
    int has_dots;
    SEXP first_arg_sym; // TAG of first formal; R_NilValue if no formals
    // We use it to identify where the arguments start, as locals are first prepended in the environment
    
} TypeTrace;

#define DEACTIVATE_S3_GENERICS

#endif