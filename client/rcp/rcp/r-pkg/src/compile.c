#include <stddef.h>
#define USE_RINTERNALS
#define RSH

#include <R.h>
#include <Rinternals.h>
#include <Rmath.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <assert.h>
#include <time.h> // Include for time measurement

#include "rcp_common.h"
#include "runtime_internals.h"

//#define MATH1_SPECIALIZE

// #define DEBUG_MODE 1
#ifdef DEBUG_MODE
#define DEBUG_PRINT(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG_PRINT(...) // No-op
#endif

void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function);

#define MAX2(a, b) ((a) > (b) ? (a) : (b))
#define MAX3(a, b, c) MAX2(MAX2(a, b), c)
#define MAX4(a, b, c, d) MAX2(MAX3(a, b, c), d)
#define MAX5(a, b, c, d, e) MAX2(MAX4(a, b, c, d), e)
#define MAX6(a, b, c, d, e, f) MAX2(MAX5(a, b, c, d, e), f)
#define MAX7(a, b, c, d, e, f, g) MAX2(MAX6(a, b, c, d, e, f), g)
#define MAX8(a, b, c, d, e, f, g, h) MAX2(MAX7(a, b, c, d, e, f, g), h)
#define MAX9(a, b, c, d, e, f, g, h, i) MAX2(MAX8(a, b, c, d, e, f, g, h), i)
#define MAX10(a, b, c, d, e, f, g, h, i, j) MAX2(MAX9(a, b, c, d, e, f, g, h, i), j)
#define MAX11(a, b, c, d, e, f, g, h, i, j, k) MAX2(MAX10(a, b, c, d, e, f, g, h, i, j), k)

static int fits_in(int64_t value, int size)
{
    switch (size)
    {
    case 1:
        return value >= INT8_MIN && value <= INT8_MAX;
    case 2:
        return value >= INT16_MIN && value <= INT16_MAX;
    case 4:
        return value >= INT32_MIN && value <= INT32_MAX;
    case 8:
        return value >= INT64_MIN && value <= INT64_MAX;
    default:
        return 0;
    }
}

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

// Rsh TODO: is the preserving needed?
static SEXP LOAD_R_BUILTIN(const char *name)
{
    SEXP result = PROTECT(R_Primitive(name));
    R_PreserveObject(result);
    UNPROTECT(1);
    return result;
}


void *precompiled_functions[
#ifdef MATH1_SPECIALIZE
    102
#else
    126
#endif
];

static void prepare_precompiled()
{
    int i = 0;

    //R_ARITH_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_ARITH_OPS
    #undef X

    //R_ARITH_OP_SYMS
    #define X(a, b, c) precompiled_functions[i++] = Rf_install(#a);
    X_ARITH_OPS
    #undef X

    //R_REL_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_REL_OPS
    #undef X

    //R_REL_OP_SYMS
    #define X(a, b, c) precompiled_functions[i++] = Rf_install(#a);
    X_REL_OPS
    #undef X

    //R_MATH1_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_MATH1_OPS
    #undef X

    //R_UNARY_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_UNARY_OPS
    #undef X

    //R_UNARY_OP_SYMS
    #define X(a, b, c) precompiled_functions[i++] = Rf_install(#a);
    X_UNARY_OPS
    #undef X

    //R_LOGIC2_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_LOGIC2_OPS
    #undef X

    //R_MATH1_EXT_OPS
    #define X(a, b, c) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    X_MATH1_EXT_OPS
    #undef X

    //R_MATH1_EXT_SYMS
    #define X(a, b, c) precompiled_functions[i++] = Rf_install(#a);
    X_MATH1_EXT_OPS
    #undef X

#ifndef MATH1_SPECIALIZE
    //R_MATH1_EXT_FUNS
    #define X(a, b, c) precompiled_functions[i++] = &c;
    X_MATH1_EXT_OPS
    #undef X
#endif

    //R_MATH1_EXT_SYMS
    #define X(a, b) precompiled_functions[i++] = Rf_install(#a);
    RSH_R_SYMBOLS
    #undef X

    //R_MATH1_EXT_OPS
    #define X(a, b) precompiled_functions[i++] = LOAD_R_BUILTIN(#a);
    RSH_R_SYMBOLS
    #undef X

    precompiled_functions[i++] = LOAD_R_BUILTIN("!");
    precompiled_functions[i++] = LOAD_R_BUILTIN("log");

    //printf("precompiled_functions size: %d\n", i);
    assert(i <= (sizeof(precompiled_functions) / sizeof(*precompiled_functions)));
}

#include "stencils/stencils.h"

uint8_t *mem_shared = NULL;
size_t *mem_shared_ref_count = NULL;
static void prepare_rodata()
{
    mem_shared = mmap(NULL, sizeof(rodata), PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    if (mem_shared == MAP_FAILED)
        exit(1);

    memcpy(mem_shared, rodata, sizeof(rodata));

    if (mprotect(mem_shared, sizeof(rodata), PROT_READ) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }

    mem_shared_ref_count = malloc(sizeof(*mem_shared_ref_count));
    *mem_shared_ref_count = 1;
}

typedef struct {
  int cached_type;
  uint8_t *dst;
  uint8_t *src[11];
  uint16_t sizes[11];
  uint8_t data[10 * (sizeof(uint8_t) + sizeof(int32_t)) /*JMPS*/
#define X(a, b)                          \
  + sizeof(__RCP_STEPFOR_##a##_OP_BODY) 
  X_STEPFOR_TYPES
#undef X
  ];
} StepFor_specialized;

#define stepfor_max_size MAX11( \
        sizeof(__RCP_STEPFOR_0_OP_BODY), \
        sizeof(__RCP_STEPFOR_1_OP_BODY), \
        sizeof(__RCP_STEPFOR_2_OP_BODY), \
        sizeof(__RCP_STEPFOR_3_OP_BODY), \
        sizeof(__RCP_STEPFOR_4_OP_BODY), \
        sizeof(__RCP_STEPFOR_5_OP_BODY), \
        sizeof(__RCP_STEPFOR_6_OP_BODY), \
        sizeof(__RCP_STEPFOR_7_OP_BODY), \
        sizeof(__RCP_STEPFOR_8_OP_BODY), \
        sizeof(__RCP_STEPFOR_9_OP_BODY), \
        sizeof(__RCP_STEPFOR_10_OP_BODY))

void prepare_variant_one(uint16_t *size, uint8_t **offset, uint8_t *mem, size_t *pos, const Stencil* stencil)
{
    *size = stencil->body_size;
    
    *offset = *pos;
    memcpy(&mem[*pos], stencil->body, stencil->body_size);
    *pos += stencil->body_size;

    int32_t offset_comparison = stepfor_max_size - stencil->body_size;

    // Different variants of StepFor (can) have different sizes, we need to ensure that all will finish executing at the same memory address.
    // This can be done by filling the gap with NOPs (0x90) for very small differences
    if (offset_comparison <= 2)
    {
        DEBUG_PRINT("StepFor correction: NOP\n");
        size_t gap_fill = stepfor_max_size - stencil->body_size;
        memset(&mem[*pos], 0x90, gap_fill); // NOPs to fill the gap
        *pos += gap_fill;
        *size += gap_fill; // Adjust size to include the NOPs
    }
    // If the offset fits in 1 byte, we can use a short jump (0xEB)
    else if (fits_in(offset_comparison - 2, 1))
    {
        DEBUG_PRINT("StepFor correction: Short jump\n");
        uint8_t jmp = 0xEB; // JMP instruction
        memcpy(&mem[*pos], &jmp, sizeof(jmp));
        *pos += sizeof(jmp);

        int8_t offset = (int8_t)(offset_comparison - 2);
        memcpy(&mem[*pos], &offset, sizeof(offset));
        *pos += sizeof(offset);
        *size += sizeof(jmp) + sizeof(offset); // Adjust size to include the JMP instruction
    }
    // If it doesn't, we need to use a near jump (0xE9)
    else
    {
        DEBUG_PRINT("StepFor correction: Near jump\n");
        uint8_t jmp = 0xE9; // JMP instruction
        memcpy(&mem[*pos], &jmp, sizeof(jmp));
        *pos += sizeof(jmp);

        int32_t offset = offset_comparison - 5;
        memcpy(&mem[*pos], &offset, sizeof(offset));
        *pos += sizeof(offset);
        *size += sizeof(jmp) + sizeof(offset); // Adjust size to include the JMP instruction
    }
}


StepFor_specialized stepfor_data;

void prepare_stepfor()
{
    stepfor_data.cached_type = -1; // Initialize to an invalid type
    stepfor_data.dst = NULL;
    size_t pos = 0;

#define X(a, b) \
    prepare_variant_one(&stepfor_data.sizes[a], &stepfor_data.src[a], stepfor_data.data, &pos, &_RCP_STEPFOR_##a##_OP);
X_STEPFOR_TYPES
#undef X
}

typedef struct {
    size_t total_size;
    size_t executable_size;
    size_t count_opcodes;
} CompilationStats;

static SEXP copy_patch_bc(SEXP bcode, CompilationStats *stats);


static uint8_t reloc_indirection(RELOC_KIND kind)
{
    switch (kind)
    {
    case RELOC_RUNTIME_SYMBOL:
        return 1;
    case RELOC_RODATA:
        return 1;
    case RELOC_RCP_PRECOMPILED:
        return 1;
    case RELOC_RHO:
        return 1;
    case RELOC_RCP_EXEC_NEXT:
        return 0;
    case RELOC_RCP_EXEC_IMM:
        return 0;
    case RELOC_RCP_RAW_IMM:
        return 0;
    case RELOC_RCP_CONST_AT_IMM:
        return 0;
    case RELOC_RCP_CONST_STR_AT_IMM:
        return 0;
    case RELOC_RCP_CONSTCELL_AT_IMM:
        return 1;
    case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
        return 1;
    case RELOC_RCP_PATCHED_VARIANTS:
        return 1;
    default:
        __builtin_unreachable();
    }
}

typedef struct {
    uint8_t *ro_low;
    uint8_t *ro_near;
    SEXP *constpool;
    SEXP *bcells;
    SEXP *precompiled;
    uint8_t *executable;
    size_t *executable_lookup;
    int *bytecode;
    SEXP *rho;
    const int *bcell_lookup;
} PatchContext;

static void patch(uint8_t *dst, uint8_t *loc, const Hole *hole, int *imms, int nextop, void* variants, const PatchContext *ctx)
{
    ptrdiff_t ptr;

    switch (hole->kind)
    {
    case RELOC_RUNTIME_SYMBOL:
    {
        ptr = (ptrdiff_t)hole->val.symbol;
    }
    break;
    case RELOC_RODATA:
    {
        // Point to different memory regions to allow efficient x86 relative addressing
        if (hole->is_pc_relative)
            ptr = (ptrdiff_t)ctx->ro_near;
        else
            ptr = (ptrdiff_t)ctx->ro_low;
    }
    break;
    case RELOC_RCP_PRECOMPILED:
    {
        ptr = (ptrdiff_t)ctx->precompiled;
    }
    break;
    case RELOC_RHO:
    {
        ptr = (ptrdiff_t)ctx->rho;
    }
    break;
    case RELOC_RCP_EXEC_NEXT:
    {
        ptr = (ptrdiff_t)&ctx->executable[ctx->executable_lookup[nextop]];
    }
    break;
    case RELOC_RCP_EXEC_IMM:
    {
        ptr = (ptrdiff_t)&ctx->executable[ctx->executable_lookup[imms[hole->val.imm_pos] - 1]];
    }
    break;
    case RELOC_RCP_RAW_IMM:
    {
        ptr = imms[hole->val.imm_pos];
    }
    break;
    case RELOC_RCP_CONST_AT_IMM:
    {
        ptr = (ptrdiff_t)ctx->constpool[imms[hole->val.imm_pos]];
    }
    break;
    case RELOC_RCP_CONST_STR_AT_IMM:
    {
        SEXP symbol = ctx->constpool[imms[hole->val.imm_pos]];
        if (TYPEOF(symbol) != SYMSXP)
            error("The const referenced is not a symbol.");

        ptr = (ptrdiff_t)CHAR(PRINTNAME(symbol));
    }
    break;
    case RELOC_RCP_CONSTCELL_AT_IMM:
    {
        int bcell_index = imms[hole->val.imm_pos];
        ptr = (ptrdiff_t)&ctx->bcells[ctx->bcell_lookup[bcell_index]];
    }
    break;
    case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
    {
        int bcell_index = ctx->bytecode[imms[hole->val.imm_pos] - 3];
        ptr = (ptrdiff_t)&ctx->bcells[ctx->bcell_lookup[bcell_index]];
    }
    break;
    case RELOC_RCP_PATCHED_VARIANTS:
    {
        ptr = (ptrdiff_t)variants;
    }
    break;
    default:
    {
        error("Unsupported relocation kind: %d\n", hole->kind);
        return;
    }
    break;
    }

    int indirection_correction = reloc_indirection(hole->kind) - hole->indirection_level;

    for (; indirection_correction > 0; --indirection_correction)
    {
        ptr = *(uintptr_t *)ptr;
        DEBUG_PRINT("dereferencing pointer\n");
    }

    ptr += hole->addend;
    if (hole->is_pc_relative)
        ptr -= (ptrdiff_t)&loc[hole->offset];

    // DEBUG_PRINT("0x%zx\n", ptr);

    if (!fits_in(ptr, hole->size))
    {
        error("Offset to a value does not fit into required patch hole (%p does not fit into %hu bytes). Relocation type: %d. Try to set memory model to large.\n", (void *)ptr, hole->size, hole->kind);
        return;
    }

    memcpy(&dst[hole->offset], &ptr, hole->size);
}

static size_t align_to_higher(size_t size, size_t alignment)
{
    if (alignment == 0)
    {
        return size; // No alignment needed
    }
    return (size + alignment - 1) & ~(alignment - 1);
}

static void *find_free_space_near(void *target_ptr, size_t size)
{
    uintptr_t target = (uintptr_t)target_ptr;
    FILE *maps = fopen("/proc/self/maps", "r");
    if (!maps)
    {
        perror("fopen");
        return NULL;
    }

    uintptr_t prev_start = 0, prev_end = 0;
    ptrdiff_t best_diff = PTRDIFF_MAX;
    uintptr_t best_addr = 0;

    char line[256];
    while (fgets(line, sizeof(line), maps))
    {
        uintptr_t start, end;
        if (sscanf(line, "%lx-%lx", &start, &end) != 2)
            continue;

        // Check for gap between previous and current region
        if (prev_end && (start > prev_end))
        {
            size_t gap = start - prev_end;
            if (gap >= size)
            {
                uintptr_t candidate = prev_end;
                ptrdiff_t diff = (candidate > target) ? (candidate - target) : (target - candidate);
                if (diff < best_diff)
                {
                    best_diff = diff;
                    best_addr = candidate;
                }
            }
        }

        prev_start = start;
        prev_end = end;
    }

    fclose(maps);

    return (void *)best_addr;
}

static const Stencil *get_stencil(int opcode, const int *imms, const SEXP *r_constpool)
{
    // For speciailized stencils
    switch(opcode)
    {
#ifdef MATH1_SPECIALIZE
        case MATH1_OP:
        {
            DEBUG_PRINT("Using specialized version of MATH1_OP\n");
            switch(imms[1])
            {
            #define X(a, b, c) case b: return &_RCP_MATH1_##b##_OP;
            X_MATH1_EXT_OPS
            #undef X
            default:
            {
                error("Invalid MATH1 IMM: %d\n", imms[1]);
                return NULL;
            }
            }
        }
        break;
#endif
        case LDCONST_OP:
        {
            SEXP constant = r_constpool[imms[0]];
            if (constant->sxpinfo.scalar && ATTRIB(constant) == R_NilValue)
            {
                switch (TYPEOF(constant))
                {
                case REALSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: REAL\n");
                    return &_RCP_LDCONST_DBL_OP;
                case INTSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: INT\n");
                    return &_RCP_LDCONST_INT_OP;
                case LGLSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: LGL\n");
                    return &_RCP_LDCONST_LGL_OP;
                default:
                    break;
                }
            }
            DEBUG_PRINT("Using specialized version of LDCONST_OP: SEXP\n");
            return &_RCP_LDCONST_SEXP_OP;
        }
        break;
        case STEPFOR_OP:
        {
            // Fake StepFor stencil to allocate correct memory size
            static Hole res_hole = {
                .kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM,
                .indirection_level = 1
            };
            static Stencil res = {
                .body_size = stepfor_max_size,
                .holes_size = 1,
                .holes = &res_hole
            };
            return &res;
        }
        break;

        default:
            return &stencils[opcode];
        }
        return NULL;
}


static rcp_exec_ptrs copy_patch_internal(int bytecode[], int bytecode_size, SEXP *constpool, int constpool_size, CompilationStats *stats)
{
    rcp_exec_ptrs res;
    size_t insts_size = _RCP_INIT.body_size;
    size_t for_count = 0;

    size_t *inst_start = calloc(bytecode_size, sizeof(size_t));
    int *used_bcells = calloc(constpool_size, sizeof(int));

    // First pass to calculate the sizes
    for (int i = 0; i < bytecode_size; ++i)
    {
        const int *imms = &bytecode[i + 1];
        const Stencil *stencil = get_stencil(bytecode[i], imms, constpool);
        // DEBUG_PRINT("Opcode: %s\n", OPCODES[bytecode[i]]);
        if (stencil == NULL || stencil->body_size == 0)
        {
            free(inst_start);
            free(used_bcells);
            error("Opcode not implemented: %s\n", OPCODES[bytecode[i]]);
        }

        if(bytecode[i] == STARTFOR_OP)
            for_count++;

        inst_start[i] = insts_size;
        insts_size += stencil->body_size;

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            const Hole *hole = &stencil->holes[j];
            int indirection_level = reloc_indirection(hole->kind);

            if (hole->indirection_level > indirection_level)
            {
                error("Unsupported patch symbol indirection level. Stencils need to be compiled with position dependent code (no-pic) switch.");
            }

            switch (hole->kind)
            {
            case RELOC_RCP_CONSTCELL_AT_IMM:
            {
                int bcell_index = imms[hole->val.imm_pos];
                // DEBUG_PRINT("bcell_index: %d\n", bcell_index);
                used_bcells[bcell_index]++;
            }
            break;
            case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
            {
                int bcell_index = bytecode[imms[hole->val.imm_pos] - 3];
                // DEBUG_PRINT("bcell_index: %d\n", bcell_index);
                used_bcells[bcell_index]++;
            }
            break;
            default:
            break;
            }
        }
        stats->count_opcodes++;

        i += imms_cnt[bytecode[i]];
    }

    DEBUG_PRINT("For loops used for this closure: %d\n", for_count);

    // Create bcell lookup table
    int bcells_size = 0;
    for (int i = 0; i < constpool_size; ++i)
    {
        if (used_bcells[i] != 0)
            bcells_size++;
    }

    DEBUG_PRINT("BCells used for this closure: %d\n", bcells_size);

    for (int i = 0, index = 0; i < constpool_size; ++i)
    {
        if (used_bcells[i] != 0)
            used_bcells[i] = index++;
    }

    // Allocate memory
    size_t rodata_size = align_to_higher(sizeof(rodata), sizeof(void *));

    size_t total_size = rodata_size + sizeof(SEXP) + insts_size + bcells_size * sizeof(SEXP) + sizeof(precompiled_functions) + (for_count * sizeof(StepFor_specialized));

    void *mem_address = find_free_space_near(&Rf_ScalarInteger, total_size);

    uint8_t *memory = mmap(mem_address, total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (memory == MAP_FAILED)
        exit(1);

    res.memory_private = memory;
    res.memory_private_size = total_size;

    // Split memory into sections
    uint8_t *ro_near = (uint8_t *)&memory[0];
    SEXP *rho = (SEXP *)&memory[rodata_size];
    SEXP *bcells = (SEXP *)&memory[rodata_size + sizeof(*rho)];
    SEXP *precompiled = (SEXP *)&memory[rodata_size + sizeof(*rho) + bcells_size * sizeof(*bcells)];
    StepFor_specialized* stepfor_storage = (StepFor_specialized*)&memory[rodata_size + sizeof(*rho) + bcells_size * sizeof(*bcells) + sizeof(precompiled_functions)];
    uint8_t *executable = &memory[rodata_size + sizeof(*rho) + bcells_size * sizeof(*bcells) + sizeof(precompiled_functions) + (for_count * sizeof(StepFor_specialized))];

    res.eval = (void *)executable;
    res.rho = rho;

    memcpy(ro_near, rodata, sizeof(rodata));
    memcpy(precompiled, precompiled_functions, sizeof(precompiled_functions));

    res.memory_shared = mem_shared;
    res.memory_shared_size = sizeof(rodata);
    res.memory_shared_refcount = mem_shared_ref_count;

    res.bcells = bcells;
    res.bcells_size = bcells_size;

    // Context for patching, passed to the patch function
    PatchContext ctx = {
        .ro_low = mem_shared,
        .ro_near = ro_near,
        .constpool = constpool,
        .bcells = bcells,
        .precompiled = precompiled,
        .executable = executable,
        .executable_lookup = inst_start,
        .bytecode = bytecode,
        .rho = rho,
        .bcell_lookup = used_bcells};

    // Start to copy-patch
    size_t executable_pos = 0;
    memcpy(&executable[executable_pos], _RCP_INIT.body, _RCP_INIT.body_size);
    for (size_t j = 0; j < _RCP_INIT.holes_size; ++j)
        patch(&executable[executable_pos], &executable[executable_pos], &_RCP_INIT.holes[j], NULL, 0, NULL, &ctx);

    executable_pos += _RCP_INIT.body_size;

    StepFor_specialized *stepfor_mem = stepfor_storage - 1;

    for (int i = 0; i < bytecode_size; i += imms_cnt[bytecode[i]] + 1)
    {
        DEBUG_PRINT("Copy-patching opcode: %s\n", OPCODES[bytecode[i]]);

        const Stencil *stencil = get_stencil(bytecode[i], &bytecode[i + 1], constpool);

        switch (bytecode[i])
        {
        case MAKECLOSURE_OP:
        {
            SEXP fb = constpool[bytecode[i + 1]];
            SEXP body = VECTOR_ELT(fb, 1);

            if (TYPEOF(body) == BCODESXP)
            {
                DEBUG_PRINT("**********\nCompiling closure\n");
                // constpool[bytecode[i+1]] = Rf_duplicate(constpool[bytecode[i+1]]); // Should not be needed, constpool is ours
                SEXP res = copy_patch_bc(body, stats);
                SET_VECTOR_ELT(fb, 1, res);
            }
            else if (TYPEOF(body) == EXTPTRSXP && RSH_IS_CLOSURE_BODY(body))
            {
                DEBUG_PRINT("Using precompiled closure\n");
            }
            else
            {
                error("Invalid closure type: %d\n", TYPEOF(body));
            }
            DEBUG_PRINT("**********\nClosure compiled\n");
        }
        break;
        case STARTFOR_OP:
        {
            stepfor_mem++;
            //printf("Using specialized StepFor at %p\n", stepfor_mem);
            *stepfor_mem = stepfor_data; // Copy the specialized StepFor data

            int stepfor_bc = bytecode[i + 1 + 2]-1;
            uint8_t *stepfor_code = &executable[inst_start[stepfor_bc]];

            // Set the destination pointer to point to where the stepfor code should be copied to
            stepfor_mem->dst = stepfor_code;

            // Set the source pointers to point to the specialized StepFor bodies
            for (size_t i = 0; i < sizeof(stepfor_mem->src)/sizeof(*stepfor_mem->src); i++)
                stepfor_mem->src[i] += (ptrdiff_t)stepfor_mem->data;
                
            DEBUG_PRINT("PATCHING CORRESPONDING STEPFOR_OP at %d, ptr pointing to %p\n", stepfor_bc, stepfor_code);
#define X(a, b)                                                           \
            for (size_t j = 0; j < _RCP_STEPFOR_##a##_OP.holes_size; ++j) \
                patch(stepfor_mem->src[a], stepfor_mem->dst, &_RCP_STEPFOR_##a##_OP.holes[j], &bytecode[stepfor_bc + 1], stepfor_bc + imms_cnt[bytecode[stepfor_bc]] + 1, NULL, &ctx);
X_STEPFOR_TYPES
#undef X
        }
        break;
        case STEPFOR_OP:

            // Stepfor was already handled above
            executable_pos += stencil->body_size;
            continue;
        default:
            break;
        }

        memcpy(&executable[executable_pos], stencil->body, stencil->body_size);

        // Patch the holes
        for (size_t j = 0; j < stencil->holes_size; ++j)
            patch(&executable[executable_pos], &executable[executable_pos], &stencil->holes[j], &bytecode[i + 1], i + imms_cnt[bytecode[i]] + 1, stepfor_mem, &ctx);

        executable_pos += stencil->body_size;
    }

    free(used_bcells);
    free(inst_start);

    if (mprotect(memory, total_size, PROT_READ | PROT_WRITE | PROT_EXEC) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }

    stats->total_size += total_size;
    stats->executable_size += insts_size;

    return res;
}

static SEXP compile_to_bc(SEXP f, SEXP options)
{
    SEXP compiler_package, compile_fun, call, result;

    // Load the compiler namespace
    compiler_package = Rf_eval(PROTECT(Rf_lang2(PROTECT(Rf_install("getNamespace")), PROTECT(Rf_mkString("compiler")))), R_GlobalEnv);
    UNPROTECT(3);
    PROTECT(compiler_package);

    // Find the "compile" function in the compiler namespace
    compile_fun = Rf_findVarInFrame(compiler_package, PROTECT(Rf_install("cmpfun")));
    UNPROTECT(2);

    if (compile_fun == R_UnboundValue)
    {
        error("Could not find compiler::cmpfun function.");
    }
    PROTECT(compile_fun);

    // Create the function call: compile(f)
    call = Rf_lang3(compile_fun, f, options);
    UNPROTECT(1);
    PROTECT(call);

    // Evaluate the function call in R
    result = Rf_eval(call, R_GlobalEnv);
    UNPROTECT(1);

    return result;
}

static void bytecode_info(const int *bytecode, int bytecode_size, const SEXP *consts, int const_size)
{
    DEBUG_PRINT("Constant pool size: %d\n", const_size);
    DEBUG_PRINT("Bytecode size: %d\n", bytecode_size);

    int instructions = 0;
    for (int i = 0; i < bytecode_size; ++i)
    {
        DEBUG_PRINT("%d:\tOpcode: %d = %s\n", i, bytecode[i], OPCODES[bytecode[i]]);
        for (size_t j = 0; j < imms_cnt[bytecode[i]]; j++)
        {
            DEBUG_PRINT("\tIMM: %d\n", bytecode[i + 1 + j]);
        }
        instructions++;
        i += imms_cnt[bytecode[i]];
    }

    DEBUG_PRINT("Instructions in bytecode: %d\n", instructions);
}

static SEXP copy_patch_bc(SEXP bcode, CompilationStats *stats)
{
    SEXP bcode_code = BCODE_CODE(bcode);
    SEXP bcode_consts = BCODE_CONSTS(bcode);

    SEXP code = PROTECT(R_bcDecode(bcode_code));

    int *bytecode = INTEGER(code) + 1;
    int bytecode_size = LENGTH(code) - 1;

    SEXP *consts = DATAPTR(bcode_consts);
    int consts_size = LENGTH(bcode_consts);

    bytecode_info(bytecode, bytecode_size, consts, consts_size);
    rcp_exec_ptrs res = copy_patch_internal(bytecode, bytecode_size, consts, consts_size, stats);
    UNPROTECT(1); // code

    for (int i = 0; i < res.bcells_size; ++i)
        res.bcells[i] = R_NilValue;
    *res.rho = R_NilValue;
    (res.memory_shared_refcount)++;

    rcp_exec_ptrs *res_ptr = malloc(sizeof(rcp_exec_ptrs));
    *res_ptr = res;

    SEXP ptr = R_MakeExternalPtr(res_ptr, Rsh_ClosureBodyTag, bcode_consts);
    PROTECT(ptr);
    R_RegisterCFinalizerEx(ptr, &R_RcpFree, TRUE);
    UNPROTECT(1); // ptr
    return ptr;
}

void rcp_init(void)
{
    prepare_precompiled();

    prepare_rodata();

    prepare_stepfor();
}

void rcp_destr(void)
{
    if (--(*mem_shared_ref_count) == 0)
    {
        munmap(mem_shared, sizeof(rodata));
        mem_shared = NULL;
        free(mem_shared_ref_count);
        mem_shared_ref_count = NULL;
    }
}

enum { STATS_COUNT = 5 };
static const char *stats_names[STATS_COUNT] = {
    "total_size",
    "executable_size",
    "opcodes_count",
    "elapsed_time",
    "elapsed_time_mid"
};

static double stats_values[STATS_COUNT];

SEXP C_rcp_cmpfun(SEXP f, SEXP options)
{
    struct timespec start, mid, end;

    if (TYPEOF(f) != CLOSXP)
        error("The first argument must be a closure.");

    CompilationStats stats = {0, 0};

    clock_gettime(CLOCK_MONOTONIC, &start);
    SEXP compiled = PROTECT(compile_to_bc(f, options));
    clock_gettime(CLOCK_MONOTONIC, &mid);
    SEXP ptr = copy_patch_bc(BODY(compiled), &stats);
    SET_BODY(compiled, ptr);
    clock_gettime(CLOCK_MONOTONIC, &end);
    UNPROTECT(1);

    double elapsed_time = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec) / 1000000.0;
    double elapsed_time_mid = (mid.tv_sec - start.tv_sec) * 1000.0 + (mid.tv_nsec - start.tv_nsec) / 1000000.0;

    // Check if R option "rcp.cmpfun.stats" is set to TRUE
    SEXP stats_option = Rf_GetOption1(Rf_install("rcp.cmpfun.stats"));
    int attach_stats = (stats_option != R_NilValue && LOGICAL(stats_option)[0] == TRUE);

    if (attach_stats) {
        stats_values[0] = (double)stats.total_size;
        stats_values[1] = (double)stats.executable_size;
        stats_values[2] = (double)stats.count_opcodes;
        stats_values[3] = elapsed_time;
        stats_values[4] = elapsed_time_mid;

        SEXP stats_vec = PROTECT(Rf_allocVector(REALSXP, STATS_COUNT));
        SEXP names     = PROTECT(Rf_allocVector(STRSXP, STATS_COUNT));

        for (size_t i = 0; i < STATS_COUNT; ++i) {
            REAL(stats_vec)[i] = stats_values[i];
            SET_STRING_ELT(names, i, Rf_mkChar(stats_names[i]));
        }

        Rf_setAttrib(stats_vec, R_NamesSymbol, names);
        Rf_setAttrib(compiled, Rf_install("stats"), stats_vec);

        UNPROTECT(2); // stats_vec, names
    } else {
        fprintf(stderr,
            "Data size:\t%.0f B\n"
            "Executable size:\t%zu B\n"
            "Opcodes count:\t%zu\n"
            "Average opcode patched size:\t%.1f B\n",
            (double)(stats.total_size - stats.executable_size),
            stats.executable_size,
            stats.count_opcodes,
            (double)(stats.executable_size) / stats.count_opcodes
        );

        fprintf(stderr, "Copy-patched in %.3f ms (%.3f for bytecode compilation + %.3f for copy-patch)\n", elapsed_time, elapsed_time_mid, elapsed_time - elapsed_time_mid);
    }

    return compiled;
}
