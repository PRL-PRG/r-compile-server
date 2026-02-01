#ifndef RCP_COMMON_H
#define RCP_COMMON_H

#include <stdint.h>
#include <stddef.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#ifdef DEBUG_MODE
#define DEBUG_PRINT(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG_PRINT(...) // No-op
#endif

typedef enum {
  RELOC_RUNTIME_SYMBOL,
  RELOC_RUNTIME_SYMBOL_GOT,
  RELOC_RUNTIME_SYMBOL_DEREF,
  RELOC_RUNTIME_CALL,
  RELOC_NOTINLINED_FUNCTION,
  RELOC_RODATA,
  RELOC_RCP_EXEC_NEXT,
  RELOC_RCP_EXEC_IMM,
  RELOC_RCP_RAW_IMM,
  RELOC_RCP_CONST_AT_IMM,
  RELOC_RCP_CONST_STR_AT_IMM,
  RELOC_RCP_CONSTCELL_AT_IMM,
  RELOC_RCP_CONSTCELL_AT_LABEL_IMM,
  RELOC_RCP_LOOPCNTXT,
  RELOC_RCP_PATCHED_VARIANTS,
  RELOC_RCP_EXECUTABLE_START
} RELOC_KIND;

struct HoleValueCall {
  const void* sym;
  const void* arg;
};

typedef struct {
  union Value {
    const void* symbol;
    char* symbol_name;
    size_t imm_pos;
    struct HoleValueCall call;
  } val;
  uintptr_t offset;
  ptrdiff_t addend;
  uint8_t kind;
  uint8_t size;
  uint8_t is_pc_relative;
  uint8_t got_pos;
} Hole; 

typedef struct {
  size_t body_size;
  uint8_t * body;
  size_t holes_size;
  Hole * holes;
  uint8_t alignment;
  const char* name;
  const uint8_t *debug_frame;
} Stencil;

typedef struct {
  size_t body_size;
  uint8_t * body;
  size_t holes_size;
  Hole * holes;
  uint8_t alignment;
  const char* name;
} StencilMutable;


#define X_MATH1_OPS                                                            \
  X(sqrt, SQRT_OP, Sqrt)                                                       \
  X(exp, EXP_OP, Exp)

#define X_ARITH_OPS                                                            \
  X(+, ADD_OP, Add)                                                            \
  X(-, SUB_OP, Sub)                                                            \
  X(*, MUL_OP, Mul)                                                            \
  X(/, DIV_OP, Div)                                                            \
  X(^, EXPT_OP, Expt)

#define X_REL_OPS                                                              \
  X(==, EQ_OP, Eq)                                                             \
  X(!=, NE_OP, Ne)                                                             \
  X(<, LT_OP, Lt)                                                              \
  X(<=, LE_OP, Le)                                                             \
  X(>, GT_OP, Gt)                                                              \
  X(>=, GE_OP, Ge)

#define X_UNARY_OPS                                                            \
  X(+, UPLUS_OP, UPlus)                                                        \
  X(-, UMINUS_OP, UMinus)

#define X_LOGIC2_OPS                                                           \
  X(&, AND_OP, And)                                                            \
  X(|, OR_OP, Or)

// X(name, idx as in math1, C function name)
#define X_MATH1_EXT_OPS                                                        \
  X(floor, 0, floor)                                                           \
  X(ceiling, 1, ceil)                                                          \
  X(sign, 2, sign)                                                             \
  X(expm1, 3, expm1)                                                           \
  X(log1p, 4, log1p)                                                           \
  X(cos, 5, cos)                                                               \
  X(sin, 6, sin)                                                               \
  X(tan, 7, tan)                                                               \
  X(acos, 8, acos)                                                             \
  X(asin, 9, asin)                                                             \
  X(atan, 10, atan)                                                            \
  X(cosh, 11, cosh)                                                            \
  X(sinh, 12, sinh)                                                            \
  X(tanh, 13, tanh)                                                            \
  X(acosh, 14, acosh)                                                          \
  X(asinh, 15, asinh)                                                          \
  X(atanh, 16, atanh)                                                          \
  X(lgamma, 17, lgammafn)                                                      \
  X(gamma, 18, gammafn)                                                        \
  X(digamma, 19, digamma)                                                      \
  X(trigamma, 20, trigamma)                                                    \
  X(cospi, 21, cospi)                                                          \
  X(sinpi, 22, sinpi)                                                          \
  X(tanpi, 23, Rtanpi)

#define RSH_R_SYMBOLS                                                          \
  X([, Rsh_Subset)                                                        \
  X([[, Rsh_Subset2)                                                      \
  X(value, Rsh_Value)                                                     \
  X([<-, Rsh_Subassign)                                                   \
  X([[<-, Rsh_Subassign2)                                                 \
  X(.External2, Rsh_DotExternal2)                                         \
  X(*tmp*, Rsh_Tmpval)                                                    \
  X(:, Rsh_Colon)                                                         \
  X(seq_along, Rsh_SeqAlong)                                              \
  X(seq_len, Rsh_SeqLen)                                                  \
  X(log, Rsh_Log)

#include "shared/opcodes.h"

#endif
