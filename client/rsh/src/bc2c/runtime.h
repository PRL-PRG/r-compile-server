#ifndef RUNTIME_H
#define RUNTIME_H

#include "opcodes.h"

// THIS HEADER NEEDS TO BE A C-compatible HEADER
// IT IS USED BY THE SERVER COMPILER

#define PUSH_VAL(n)                                                            \
  do {                                                                         \
    int __n__ = (n);                                                           \
    CHECK_OVERFLOW(__n__);                                                     \
    while (__n__-- > 0) {                                                      \
      (R_BCNodeStackTop++)->tag = INTSXP;                                      \
    }                                                                          \
  } while (0)

#define POP_VAL(n)                                                             \
  do {                                                                         \
    R_BCNodeStackTop -= (n);                                                   \
  } while (0)

#endif
