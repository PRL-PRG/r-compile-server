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
#include <time.h>
#include <omp.h>

void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function);
extern RCNTXT *R_GlobalContext; /* The global context */
extern SEXP R_ReturnedValue;    /* Slot for return-ing values */

#include "rcp_common.h"
#include "runtime_internals.h"
#include "stencils/stencils.h"

// Used as a hint where to map address space close to R internals to allow relative addressing
#define R_INTERNALS_ADDRESS (&Rf_ScalarInteger)
#define BC_DEFAULT_OPTIMIZE_LEVEL 3

#define MAX3(a, b, c) MAX(MAX(a, b), c)
#define MAX4(a, b, c, d) MAX(MAX3(a, b, c), d)
#define MAX5(a, b, c, d, e) MAX(MAX4(a, b, c, d), e)
#define MAX6(a, b, c, d, e, f) MAX(MAX5(a, b, c, d, e), f)
#define MAX7(a, b, c, d, e, f, g) MAX(MAX6(a, b, c, d, e, f), g)
#define MAX8(a, b, c, d, e, f, g, h) MAX(MAX7(a, b, c, d, e, f, g), h)
#define MAX9(a, b, c, d, e, f, g, h, i) MAX(MAX8(a, b, c, d, e, f, g, h), i)
#define MAX10(a, b, c, d, e, f, g, h, i, j) MAX(MAX9(a, b, c, d, e, f, g, h, i), j)
#define MAX11(a, b, c, d, e, f, g, h, i, j, k) MAX(MAX10(a, b, c, d, e, f, g, h, i, j), k)

#ifndef ALIGNMENT_LABELS
#define ALIGNMENT_LABELS 1
#endif
#ifndef ALIGNMENT_JUMPS
#define ALIGNMENT_JUMPS ALIGNMENT_LABELS
#endif
#ifndef ALIGNMENT_LOOPS
#define ALIGNMENT_LOOPS ALIGNMENT_LABELS
#endif
#ifndef ALIGNMENT_LABELS_UNLIKELY
#define ALIGNMENT_LABELS_UNLIKELY 1
#endif
#ifndef ALIGNMENT_LOOPS_UNLIKELY
#define ALIGNMENT_LOOPS_UNLIKELY 1
#endif

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

static void *near_memory_start = NULL;

static void refresh_near_memory_ptr(size_t size)
{
#ifdef MCMODEL_SMALL
    near_memory_start = find_free_space_near(R_INTERNALS_ADDRESS, size);
#endif
}

static void* get_near_memory(size_t size)
{
#ifdef MCMODEL_SMALL
    void *res = near_memory_start;
    near_memory_start += align_to_higher(size, getpagesize());
    return res;
#else
    return NULL;
#endif
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

#ifdef MATH1_SPECIALIZE
    #define PRECOMPILED_COUNT 102
#else
    #define PRECOMPILED_COUNT 126
#endif

static void prepare_precompiled(void* precompiled_functions[])
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
    assert(i <= PRECOMPILED_COUNT);
}

static const void** prepare_got_table(size_t* got_size)
{
    // Pass 1: count the number of GOT relocations and patch those that can be transformed into relative addressing
    size_t count = 0;
    for (size_t i = 0; i < sizeof(stencils_all) / sizeof(*stencils_all); i++)
    {
        const Stencil *stencil = stencils_all[i];
        for (size_t j = 0; j < stencil->holes_size; j++)
        {
            Hole *hole = &stencil->holes[j];
            if (hole->kind == RELOC_RUNTIME_SYMBOL_GOT)
            {
                ptrdiff_t offset = (ptrdiff_t)hole->val.symbol - (ptrdiff_t)R_INTERNALS_ADDRESS;
                if(fits_in(offset, hole->size)) // If the offset can fit in x86-64 relative address, transform it
                {
                    uint8_t* instr = &stencil->body[hole->offset - 2];
                    if(instr[0] == 0xFF && instr[1] == 0x25) // jmp [rip + offset]
                    {
                        instr[0] = 0x90; // NOP
                        instr[1] = 0xE9; // jmp rel32
                    }
                    else if(instr[0] == 0xFF && instr[1] == 0x15) // call [rip + offset]
                    {
                        instr[0] = 0x90; // NOP
                        instr[1] = 0xE8; // call rel32
                    }
                    else
                    {
                        fprintf(stderr, "Warning: Unsupported GOT relocation at offset 0x%lx in stencil %zu\n", hole->offset, i);
                        count++;
                        continue;
                    }

                    hole->kind = RELOC_RUNTIME_SYMBOL;
                }
                else
                    count++;
            }
        }
    }
    DEBUG_PRINT("Total GOT relocations: %zu\n", count);

    // Pass 2: collect unique GOT symbols
    const void** got_table_tmp = (const void**)R_alloc(count, sizeof(void*));
    *got_size = 0;

    for (size_t i = 0; i < sizeof(stencils_all) / sizeof(*stencils_all); i++)
    {
        const Stencil *stencil = stencils_all[i];
        for (size_t j = 0; j < stencil->holes_size; j++)
        {
            Hole *hole = &stencil->holes[j];
            hole->got_pos = 255;
            if (hole->kind == RELOC_RUNTIME_SYMBOL_GOT)
            {
                for (size_t k = 0; k < *got_size; k++)
                {
                    if(got_table_tmp[k] == hole->val.symbol)
                    {
                        hole->got_pos = k; // Already in the table, just set the position
                        goto found;
                    }
                }

                got_table_tmp[*got_size] = hole->val.symbol;
                hole->got_pos = *got_size;
                (*got_size)++;
                found:
            }
        }
    }
    DEBUG_PRINT("GOT table size: %zu\n", *got_size);
    if(*got_size > UINT8_MAX)
        error("Error: Too many GOT symbols, cannot fit into uint8_t. Increase the data type size to allow for more\n");

    return got_table_tmp;
}

typedef struct {
    uint8_t rodata[sizeof(rodata)];
    void* precompiled[PRECOMPILED_COUNT];
    size_t got_table_size;
    void* got_table[];
} mem_shared_data;

static rcp_sharedmem_ptrs *mem_shared;
static SEXP mem_shared_sexp;

static void prepare_shared_memory()
{
    void *precompiled[PRECOMPILED_COUNT];
    prepare_precompiled(precompiled);

    void *vmax = vmaxget();
    size_t got_table_size = 0;
    const void **got_table = prepare_got_table(&got_table_size);

    const size_t total_size = sizeof(mem_shared_data) + got_table_size * sizeof(void*);

    mem_shared_data *mem_shared_near = NULL;
    mem_shared_data *mem_shared_low = NULL;

    mem_shared_near = mmap(get_near_memory(total_size), total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (mem_shared_near == MAP_FAILED)
        exit(1);

    memcpy(mem_shared_near->rodata, rodata, sizeof(rodata));
    memcpy(mem_shared_near->precompiled, precompiled, sizeof(precompiled));
    mem_shared_near->got_table_size = got_table_size;
    memcpy(mem_shared_near->got_table, got_table, got_table_size * sizeof(void*));

    vmaxset(vmax);
    
    if (mprotect(mem_shared_near, total_size, PROT_READ) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }

#ifdef MCMODEL_SMALL
    mem_shared_low = mmap(NULL, total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    if (mem_shared_low == MAP_FAILED)
        exit(1);
    memcpy(mem_shared_low, mem_shared_near, sizeof(mem_shared_data));
    if (mprotect(mem_shared_low, sizeof(mem_shared_data), PROT_READ) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }
#endif

    mem_shared = R_Calloc(1, rcp_sharedmem_ptrs);
    mem_shared->memory_shared_near = mem_shared_near;
    mem_shared->memory_shared_low = mem_shared_low;
    mem_shared->memory_shared_size = total_size;

    mem_shared_sexp = PROTECT(R_MakeExternalPtr(mem_shared, R_NilValue, R_NilValue));
    R_PreserveObject(mem_shared_sexp);
    UNPROTECT(1); // mem_shared_sexp
    R_RegisterCFinalizerEx(mem_shared_sexp, &R_RcpSharedFree, TRUE);
}

#ifdef STEPFOR_SPECIALIZE
typedef struct {
  int cached_type;
  uint8_t *dst;
  uint8_t *src[11];
  uint16_t sizes[11];
  uint8_t data[0
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

static void prepare_variant_one(uint16_t *size, ptrdiff_t *offset, uint8_t *mem, size_t *pos, const Stencil* stencil)
{
    *size = stencil->body_size;
    
    *offset = *pos;
    memcpy(&mem[*pos], stencil->body, stencil->body_size);
    *pos += stencil->body_size;
}

StepFor_specialized stepfor_data;

void prepare_stepfor()
{
    stepfor_data.cached_type = -1; // Initialize to an invalid type
    stepfor_data.dst = NULL;
    size_t pos = 0;

#define X(a, b) \
    prepare_variant_one(&stepfor_data.sizes[a], (ptrdiff_t*)&stepfor_data.src[a], stepfor_data.data, &pos, &_RCP_STEPFOR_##a##_OP);
X_STEPFOR_TYPES
#undef X
}
#endif

typedef struct {
    size_t total_size;
    size_t executable_size;
    size_t count_opcodes;
} CompilationStats;

typedef struct {
    mem_shared_data *shared_near;
    mem_shared_data *shared_low;
    SEXP *constpool;
    SEXP *bcells;
    uint8_t **executable_lookup;
    int *bytecode;
    SEXP *rho;
    const int *bcell_lookup;
} PatchContext;

static void patch(uint8_t *dst, uint8_t *loc, const Hole *hole, int *imms, int nextop, void* smc_variants, const PatchContext *ctx)
{
    ptrdiff_t ptr;
    const mem_shared_data *shared;

    #ifdef MCMODEL_SMALL
    // Point to different memory regions to allow relative addressing in smaller memory model
    if (hole->is_pc_relative)
        shared = ctx->shared_near;
    else
        shared = ctx->shared_low;
    #else
    shared = ctx->shared_near;
    #endif

    switch (hole->kind)
    {
    case RELOC_RUNTIME_SYMBOL:
    {
        ptr = (ptrdiff_t)hole->val.symbol;
    }
    break;
    case RELOC_RUNTIME_SYMBOL_GOT:
    {
        ptr = (ptrdiff_t)&shared->got_table[hole->got_pos];
    }
    break;
    case RELOC_RODATA:
    {
        ptr = (ptrdiff_t)shared->rodata;
    }
    break;
    case RELOC_RCP_PRECOMPILED:
    {
        ptr = (ptrdiff_t)shared->precompiled;
    }
    break;
    case RELOC_RHO:
    {
        ptr = (ptrdiff_t)ctx->rho;
    }
    break;
    case RELOC_RCP_EXEC_NEXT:
    {
        ptr = (ptrdiff_t)ctx->executable_lookup[nextop];
    }
    break;
    case RELOC_RCP_EXEC_IMM:
    {
        ptr = (ptrdiff_t)ctx->executable_lookup[imms[hole->val.imm_pos] - 1];
    }
    break;
    case RELOC_RCP_RAW_IMM:
    {
        ptr = imms[hole->val.imm_pos];
        if(ptr == 0)
            error("Zero integer passed as an argument to BC instruction.");
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
#ifdef STEPFOR_SPECIALIZE
    case RELOC_RCP_PATCHED_VARIANTS:
    {
        ptr = (ptrdiff_t)smc_variants;
    }
    break;
#endif
    default:
    {
        error("Unsupported relocation kind: %d\n", hole->kind);
        return;
    }
    break;
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
#ifdef STEPFOR_SPECIALIZE
        case STEPFOR_OP:
        {
            // Fake StepFor stencil to allocate correct memory size
            static Hole res_hole = {
                .kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM
            };
            static Stencil res = {
                .body_size = stepfor_max_size,
                .holes_size = 1,
                .holes = &res_hole,
                .alignment = 1
            };
            return &res;
        }
        break;
#endif
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

    const void *vmax = vmaxget(); // Save to restore it later to free memory allocated by the following calls
    uint8_t **inst_start = (uint8_t **)S_alloc(bytecode_size, sizeof(uint8_t *));
    int *used_bcells = (int *)S_alloc(constpool_size, sizeof(int));
    int *bytecode_lut = (int *)R_alloc(bytecode_size, sizeof(int));
    uint8_t *bytecode_alignment = (uint8_t *)S_alloc(bytecode_size, sizeof(uint8_t));

    int count_opcodes = 0;
    uint8_t can_fallthrough = 0; // Whether the previous instruction can fallthrough to the next one. First instruction is always jumped at from shim.

    for (int i = 0; i < bytecode_size; i += imms_cnt[bytecode[i]] + 1)
    {
        int jmp_target;
        int alignment_labels;
        int alignment_loops;

        const int *imms = &bytecode[i + 1];

        switch (bytecode[i])
        {
        case (STARTSUBSET_OP):
        case (STARTSUBSET2_OP):
        case (STARTSUBSET_N_OP):
        case (STARTSUBASSIGN_N_OP):
        case (STARTSUBSET2_N_OP):
        case (STARTSUBASSIGN2_N_OP):
            // These instructions are very unlikely to jump (mostly just in case of errors)
            alignment_labels = ALIGNMENT_LABELS_UNLIKELY;
            alignment_loops = ALIGNMENT_LOOPS_UNLIKELY;
            break;
        default:
            alignment_labels = ALIGNMENT_LABELS;
            alignment_loops = ALIGNMENT_LOOPS;
            break;
        }

        switch (bytecode[i])
        {
        case (GOTO_OP):
        case (STEPFOR_OP):
            jmp_target = imms[0];
            break;
        case (BRIFNOT_OP):
        case (STARTSUBSET_OP):
        case (STARTSUBSET2_OP):
        case (AND1ST_OP):
        case (OR1ST_OP):
        case (STARTSUBSET_N_OP):
        case (STARTSUBASSIGN_N_OP):
        case (STARTSUBSET2_N_OP):
        case (STARTSUBASSIGN2_N_OP):
            jmp_target = imms[1];
            break;
        case (STARTFOR_OP):
            jmp_target = imms[2];
            break;
        default:
            jmp_target = -1;
            break;
        }

        // If the previous instruction cannot fallthrough, this instruction is aligned (at least) to ALIGNMENT_JUMPS
        if(!can_fallthrough)
        {
            DEBUG_PRINT("Instruction %d is aligned due to previous instruction not falling through\n", i);
            bytecode_alignment[i] = MAX(bytecode_alignment[i], ALIGNMENT_JUMPS);
        }

        if (jmp_target > 0)
        {
            jmp_target -= 1; // Convert to 0-based index
            if (jmp_target > i) // Forward jump (not a loop)
            {
                DEBUG_PRINT("Forward jump from %d to %d\n", i, jmp_target);
                bytecode_alignment[jmp_target] = MAX(bytecode_alignment[jmp_target], alignment_labels);
            }
            else // Backward jump (a loop)
            {
                DEBUG_PRINT("Backward jump from %d to %d\n", i, jmp_target);
                bytecode_alignment[jmp_target] = MAX(bytecode_alignment[jmp_target], alignment_loops);
            }
        }

        // Update alignment based on stencil requirements
        bytecode_alignment[i] = MAX(bytecode_alignment[i], get_stencil(bytecode[i], imms, constpool)->alignment);

        // Determine whether the next instruction can be jumped to directly or not
        switch (bytecode[i])
        {
        case (RETURN_OP):
        case (GOTO_OP):
        case (STARTFOR_OP):
            can_fallthrough = 0; // Always jumps
            break;
        default:
            can_fallthrough = 1; // Can fallthrough
            break;
        }
    }

    for (int i = 0; i < bytecode_size; i += imms_cnt[bytecode[i]] + 1)
        DEBUG_PRINT("Instruction %d (%s) alignment: %d\n", i, OPCODES[bytecode[i]], bytecode_alignment[i]);

    // First pass to calculate the sizes
    for (int i = 0; i < bytecode_size; i += imms_cnt[bytecode[i]] + 1)
    {
        const int *imms = &bytecode[i + 1];
        const Stencil *stencil = get_stencil(bytecode[i], imms, constpool);
        // DEBUG_PRINT("Opcode: %s\n", OPCODES[bytecode[i]]);
        if (stencil == NULL || stencil->body_size == 0)
            error("Opcode not implemented: %s\n", OPCODES[bytecode[i]]);
        
#ifdef STEPFOR_SPECIALIZE
        if(bytecode[i] == STARTFOR_OP)
            for_count++;
#endif

        size_t aligned_size = align_to_higher(insts_size, bytecode_alignment[i]);
        size_t aligned_diff = aligned_size - insts_size;
        //DEBUG_PRINT("Opcode: %s, size: %zu, aligned_size: %zu, aligned_diff: %zu\n", OPCODES[bytecode[i]], insts_size, aligned_size, aligned_diff);

        inst_start[i] = (uint8_t*)aligned_size;
        insts_size += stencil->body_size + aligned_diff;
        bytecode_lut[count_opcodes++] = i;

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            const Hole *hole = &stencil->holes[j];

            switch (hole->kind)
            {
            case RELOC_RCP_CONSTCELL_AT_IMM:
            {
                int bcell_index = imms[hole->val.imm_pos];
                used_bcells[bcell_index] = 1;
            }
            break;
            case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
            {
                int bcell_index = bytecode[imms[hole->val.imm_pos] - 3];
                used_bcells[bcell_index] = 1;
            }
            break;
            default:
                break;
            }
        }
    }

    stats->count_opcodes += count_opcodes;
    DEBUG_PRINT("Total opcodes: %d\n", count_opcodes);

    DEBUG_PRINT("For loops used for this closure: %d\n", for_count);

    // Create bcell lookup table
    int bcells_size = 0;
    for (int i = 0; i < constpool_size; ++i)
        if (used_bcells[i] != 0)
            used_bcells[i] = bcells_size++;

    DEBUG_PRINT("Unique bcells used in this closure: %d\n", bcells_size);

    // Allocate memory
    size_t executable_size_aligned = align_to_higher(insts_size, getpagesize()); // Align to page size to be able to map it as executable memory

    size_t total_size = executable_size_aligned + sizeof(SEXP) + bcells_size * sizeof(SEXP)
#ifdef STEPFOR_SPECIALIZE
    + (for_count * sizeof(StepFor_specialized))
#endif
    ;
    uint8_t *memory = mmap(get_near_memory(total_size), total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    if (memory == MAP_FAILED)
    {
#ifdef MCMODEL_SMALL
        fprintf(stderr, "mmap failed, trying to refresh near memory pointer...\n");
        refresh_near_memory_ptr(total_size);
        memory = mmap(get_near_memory(total_size), total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        if (memory == MAP_FAILED)
            exit(1);
#else
        exit(1);
#endif
    }

    res.memory_private = memory;
    res.memory_private_size = total_size;

    // Split memory into sections
    uint8_t *executable = &memory[0];
    SEXP *rho = (SEXP *)&memory[executable_size_aligned];
    SEXP *bcells = (SEXP *)&memory[executable_size_aligned + sizeof(*rho)];
#ifdef STEPFOR_SPECIALIZE
    StepFor_specialized* stepfor_storage = (StepFor_specialized*)&memory[executable_size_aligned + sizeof(*rho) + bcells_size * sizeof(*bcells)];
#endif

    for (size_t i = 0; i < bytecode_size; i++)
    {
        if(inst_start[i])
            inst_start[i] += (ptrdiff_t)executable;
    }
    

    res.eval = (void *)executable;
    res.rho = rho;

    res.bcells = bcells;
    res.bcells_size = bcells_size;

    // Context for patching, passed to the patch function
    PatchContext ctx = {
        .shared_near = mem_shared->memory_shared_near,
        .shared_low = mem_shared->memory_shared_low,
        .constpool = constpool,
        .bcells = bcells,
        .executable_lookup = inst_start,
        .bytecode = bytecode,
        .rho = rho,
        .bcell_lookup = used_bcells
    };

    memset(executable, 0x90, executable_size_aligned); // Fill the executable memory with NOPs to fill the gapps between instructions in case of non-trivial alignment

    // Start to copy-patch
    memcpy(executable, _RCP_INIT.body, _RCP_INIT.body_size);
    for (size_t j = 0; j < _RCP_INIT.holes_size; ++j)
        patch(executable, executable, &_RCP_INIT.holes[j], NULL, 0, NULL, &ctx);

#ifdef STEPFOR_SPECIALIZE
    StepFor_specialized *stepfor_pool = stepfor_storage;
#endif

#ifdef DEBUG_MODE
    struct timespec start, mid, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
#endif

    #pragma omp parallel for
    for (int i = 0; i < count_opcodes; i++)
    {
        int bc_pos = bytecode_lut[i];
        int  opcode = bytecode[bc_pos];
        int* opargs = &bytecode[bc_pos + 1];
        void *smc_variants = NULL;

        DEBUG_PRINT("Copy-patching opcode: %s\n", OPCODES[opcode]);

        switch (opcode)
        {
#ifdef STEPFOR_SPECIALIZE
        case STARTFOR_OP:
        {
            StepFor_specialized *stepfor_mem;

            #pragma omp atomic capture // Get own memory for this startfor
            stepfor_mem = stepfor_pool++;

            *stepfor_mem = stepfor_data; // Copy the specialized StepFor data

            int stepfor_bc = bytecode[bc_pos + 1 + 2]-1;
            uint8_t *stepfor_code = inst_start[stepfor_bc];

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
            smc_variants = stepfor_mem;
        }
        break;
        case STEPFOR_OP:
            // Stepfor was already handled during startfor
            continue;
#endif
        default:
            break;
        }

        const Stencil *stencil = get_stencil(opcode, opargs, constpool);

        memcpy(inst_start[bc_pos], stencil->body, stencil->body_size);

        // Patch the holes
        for (size_t j = 0; j < stencil->holes_size; ++j)
            patch(inst_start[bc_pos], inst_start[bc_pos], &stencil->holes[j], opargs, bc_pos + imms_cnt[bytecode[bc_pos]] + 1, smc_variants, &ctx);
    }

#ifdef DEBUG_MODE
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed_time = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec) / 1000000.0;
    fprintf(stderr, "Copy-patching took %.3f ms\n", elapsed_time);
#endif

    vmaxset(vmax);

    int prot = PROT_EXEC;
#ifdef STEPFOR_SPECIALIZE
    prot |= PROT_WRITE;
#endif

    if (mprotect(executable, executable_size_aligned, prot) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }
    if (mprotect(rho, total_size - executable_size_aligned, PROT_READ | PROT_WRITE) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }

    stats->total_size += total_size;
    stats->executable_size += insts_size;

    return res;
}

static SEXP original_cmpfun = NULL;
static SEXP original_tryCmpfun = NULL;

static SEXP compile_to_bc(SEXP f, SEXP options)
{
    // Create the function call: compile(f)
    SEXP call = PROTECT(Rf_lang3(original_cmpfun, f, options));

    // Evaluate the function call in R
    SEXP result = Rf_eval(call, R_GlobalEnv);
    UNPROTECT(1); // call

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

    int *bytecode = INTEGER(code);
    int bytecode_size = LENGTH(code);

    if(bytecode_size == 0)
        error("Cannot compile empty bytecode.\n");

    // Skip the first member in the array, it is the version number
    bytecode += 1;
    bytecode_size -= 1;

    SEXP *consts = DATAPTR(bcode_consts);
    int consts_size = LENGTH(bcode_consts);

    // First compile all closures recursively, depth first
    for (int i = 0; i < bytecode_size; i += imms_cnt[bytecode[i]] + 1)
    {
        int opcode = bytecode[i];
        int *opargs = &bytecode[i + 1];

        if(opcode == MAKECLOSURE_OP)
        {
            SEXP fb = consts[opargs[0]];
            SEXP body = VECTOR_ELT(fb, 1);

            if (TYPEOF(body) == BCODESXP)
            {
                DEBUG_PRINT("**********\nCompiling closure\n");
                // constpool[opargs[0]] = Rf_duplicate(constpool[opargs[0]]); // Should not be needed, constpool is ours
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
    }

    bytecode_info(bytecode, bytecode_size, consts, consts_size);
    rcp_exec_ptrs res = copy_patch_internal(bytecode, bytecode_size, consts, consts_size, stats);
    UNPROTECT(1); // code

    for (int i = 0; i < res.bcells_size; ++i)
        res.bcells[i] = R_NilValue;
    *res.rho = R_NilValue;

    rcp_exec_ptrs *res_ptr = R_Calloc(1, rcp_exec_ptrs);
    *res_ptr = res;

    SEXP prot = PROTECT(Rf_allocVector(VECSXP, 2));
    SET_VECTOR_ELT(prot, 0, bcode_consts);
    SET_VECTOR_ELT(prot, 1, mem_shared_sexp);

    SEXP ptr = R_MakeExternalPtr(res_ptr, Rsh_ClosureBodyTag, prot);
    UNPROTECT(1); // prot
    PROTECT(ptr);
    R_RegisterCFinalizerEx(ptr, &R_RcpFree, TRUE);
    UNPROTECT(1); // ptr
    return ptr;
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

    #ifdef BC_DEFAULT_OPTIMIZE_LEVEL
    if (options == R_NilValue)
    {
        // Create the options list with optimize = 3
        options = PROTECT(Rf_allocVector(VECSXP, 1));
        SEXP optimize_value = PROTECT(Rf_ScalarInteger(BC_DEFAULT_OPTIMIZE_LEVEL));
        SET_VECTOR_ELT(options, 0, optimize_value);
        UNPROTECT(1); // optimize_value

        // Set the names for the options list
        SEXP options_names = PROTECT(Rf_allocVector(STRSXP, 1));
        SET_STRING_ELT(options_names, 0, Rf_mkChar("optimize"));
        Rf_setAttrib(options, R_NamesSymbol, options_names);
        UNPROTECT(1); // options_names
    }
    #else
    PROTECT(options); // To balance PROTECT/UNPROTECT
    #endif

    CompilationStats stats = {0, 0};
    clock_gettime(CLOCK_MONOTONIC, &start);

    SEXP compiled = compile_to_bc(f, options);
    UNPROTECT(1); // options

    if(TYPEOF(BODY(compiled)) != BCODESXP)
        error("The BC compiler could not compile this function.");

    PROTECT(compiled);

    clock_gettime(CLOCK_MONOTONIC, &mid);
    SEXP ptr = copy_patch_bc(BODY(compiled), &stats);
    SET_BODY(compiled, ptr);
    clock_gettime(CLOCK_MONOTONIC, &end);
    UNPROTECT(1); // compiled

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

SEXP C_rcp_tryCmpfun(SEXP f)
{
    if (TYPEOF(f) != CLOSXP)
        error("The first argument must be a closure.");

    SEXP result = R_NilValue;

    SEXP symbol = PROTECT(Rf_install("rcp_cmpfun"));
    SEXP call = Rf_lang3(symbol, f, R_NilValue);
    UNPROTECT(1); // symbol
    PROTECT(call);
    
    int error_occurred = 0;
    SEXP try_result = R_tryEval(call, R_GlobalEnv, &error_occurred);

    UNPROTECT(1); // call
    
    if (error_occurred) {
        // Get the compiler namespace
        SEXP compiler_namespace = Rf_eval(
            PROTECT(Rf_lang2(
                PROTECT(Rf_install("getNamespace")),
                PROTECT(Rf_mkString("compiler"))
            )),
            R_GlobalEnv
        );
        UNPROTECT(3);
        PROTECT(compiler_namespace);
        
        // Get the last error condition using geterrmessage()
        SEXP geterrmessage_call = PROTECT(Rf_lang1(Rf_install("geterrmessage")));
        SEXP error_msg = R_tryEval(geterrmessage_call, R_GlobalEnv, NULL);
        UNPROTECT(1); // geterrmessage_call
        
        const char *msg_str = (error_msg != R_NilValue && TYPEOF(error_msg) == STRSXP && LENGTH(error_msg) > 0)
            ? CHAR(STRING_ELT(error_msg, 0))
            : "Unknown compilation error";
        
        // Call notifyCompilerError from the compiler namespace
        SEXP notify_call = PROTECT(Rf_lang2(
            Rf_install("notifyCompilerError"),
            PROTECT(Rf_mkString(msg_str))
        ));
        
        R_tryEval(notify_call, compiler_namespace, NULL);
        UNPROTECT(3); // notify_call, string, compiler_namespace

        result = f; // Return original function on error
    } else {
        result = try_result;
    }
    
    return result;
}

static void install_cmpfun_hook(void)
{
    // Get the compiler namespace
    SEXP compiler_namespace = Rf_eval(
        PROTECT(Rf_lang2(
            PROTECT(Rf_install("getNamespace")),
            PROTECT(Rf_mkString("compiler"))
        )),
        R_GlobalEnv
    );
    UNPROTECT(3);
    PROTECT(compiler_namespace);

    // Save the original cmpfun to a global variable
    original_cmpfun = Rf_findVarInFrame(compiler_namespace, Rf_install("cmpfun"));
    if (original_cmpfun == R_UnboundValue) {
        error("Could not find compiler::cmpfun function");
    }

    PROTECT(original_cmpfun);
    R_PreserveObject(original_cmpfun);
    UNPROTECT(1);

    // Unlock the binding before modifying it
    SEXP cmpfun_sym = PROTECT(Rf_install("cmpfun"));
    R_unLockBinding(cmpfun_sym, compiler_namespace);

    // Build the body: .Call("C_rcp_cmpfun", f, options, PACKAGE = "rcp")
    SEXP call_sym = PROTECT(Rf_install(".Call"));
    SEXP fun_name = PROTECT(Rf_mkString("C_rcp_cmpfun"));
    SEXP f_sym = PROTECT(Rf_install("f"));
    SEXP options_sym = PROTECT(Rf_install("options"));
    SEXP last_arg = PROTECT(Rf_mkString("rcp")); // Add PACKAGE argument
    
    // Create the call expression
    SEXP call_expr = Rf_lang5(call_sym, fun_name, f_sym, options_sym, last_arg);
    UNPROTECT(5); // call_sym, fun_name, f_sym, options_sym
    PROTECT(call_expr);

    // Add PACKAGE as a named argument to the last cons cell
    SEXP package_sym = PROTECT(Rf_install("PACKAGE"));
    //SET_TAG(last_arg, package_sym);
    SET_TAG(CDR(CDDDR(call_expr)), package_sym);
    UNPROTECT(1); // package_sym
    
    // Create formal arguments: pairlist(f = , options = NULL)
    SEXP formals = PROTECT(Rf_cons(R_MissingArg, Rf_cons(R_NilValue, R_NilValue)));
    SET_TAG(formals, Rf_install("f"));
    SET_TAG(CDR(formals), Rf_install("options"));
    
    // Create the closure
    SEXP wrapper = PROTECT(Rf_allocSExp(CLOSXP));
    SET_FORMALS(wrapper, formals);
    SET_BODY(wrapper, call_expr);
    SET_CLOENV(wrapper, compiler_namespace);
    
    // Replace cmpfun in the compiler namespace
    Rf_defineVar(cmpfun_sym, wrapper, compiler_namespace);

    UNPROTECT(3); // wrapper, formals, call_expr
    
    // Re-lock the binding
    R_LockBinding(cmpfun_sym, compiler_namespace);
    
    UNPROTECT(2); // cmpfun_sym, compiler_namespace

    DEBUG_PRINT("Installed cmpfun hook\n");
}

static void install_tryCmpfun_hook(void)
{
    // Get the compiler namespace
    SEXP compiler_namespace = Rf_eval(
        PROTECT(Rf_lang2(
            PROTECT(Rf_install("getNamespace")),
            PROTECT(Rf_mkString("compiler"))
        )),
        R_GlobalEnv
    );
    UNPROTECT(3);
    PROTECT(compiler_namespace);

    // Save the original tryCmpfun
    original_tryCmpfun = Rf_findVarInFrame(compiler_namespace, Rf_install("tryCmpfun"));
    if (original_tryCmpfun == R_UnboundValue) {
        warning("Could not find compiler::tryCmpfun function");
        UNPROTECT(1);
        return;
    }

    PROTECT(original_tryCmpfun);
    R_PreserveObject(original_tryCmpfun);
    UNPROTECT(1);

    // Unlock the binding
    SEXP tryCmpfun_sym = PROTECT(Rf_install("tryCmpfun"));
    R_unLockBinding(tryCmpfun_sym, compiler_namespace);

    // Build the call: .Call("C_rcp_tryCmpfun", f, PACKAGE = "rcp")
    SEXP call_sym = PROTECT(Rf_install(".Call"));
    SEXP fun_name = PROTECT(Rf_mkString("C_rcp_tryCmpfun"));
    SEXP f_sym = PROTECT(Rf_install("f"));
    SEXP last_arg = PROTECT(Rf_mkString("rcp")); // Add PACKAGE argument
    
    SEXP call_expr = Rf_lang4(call_sym, fun_name, f_sym, last_arg);
    UNPROTECT(4); // call_sym, fun_name, f_sym
    PROTECT(call_expr);
    
    SEXP package_sym = PROTECT(Rf_install("PACKAGE"));
    SET_TAG(CDDDR(call_expr), package_sym);
    UNPROTECT(1); // package_sym

    // Create formals: pairlist(f = )
    SEXP formals = PROTECT(Rf_cons(R_MissingArg, R_NilValue));
    SET_TAG(formals, Rf_install("f"));
    
    // Create the closure
    SEXP wrapper = PROTECT(Rf_allocSExp(CLOSXP));
    SET_FORMALS(wrapper, formals);
    SET_BODY(wrapper, call_expr);
    SET_CLOENV(wrapper, compiler_namespace);
    
    // Replace tryCmpfun
    Rf_defineVar(tryCmpfun_sym, wrapper, compiler_namespace);

    UNPROTECT(3); // wrapper, formals, call_expr
    
    // Re-lock the binding
    R_LockBinding(tryCmpfun_sym, compiler_namespace);
    
    UNPROTECT(2); // tryCmpfun_sym, compiler_namespace

    DEBUG_PRINT("Installed tryCmpfun hook\n");
}


void rcp_init(void)
{
    refresh_near_memory_ptr(0);

    prepare_shared_memory();

#ifdef STEPFOR_SPECIALIZE
    prepare_stepfor();
#endif

    install_cmpfun_hook();
    //install_tryCmpfun_hook();

    DEBUG_PRINT("Allignment: LABELS=%d, JUMPS=%d, LOOPS=%d, UNLIKELY_LABELS=%d, UNLIKELY_LOOPS=%d\n", ALIGNMENT_LABELS, ALIGNMENT_JUMPS, ALIGNMENT_LOOPS, ALIGNMENT_LABELS_UNLIKELY, ALIGNMENT_LOOPS_UNLIKELY);

    DEBUG_PRINT("RCP initialized\n");
}

void rcp_destr(void)
{
    if(mem_shared_sexp != NULL) {
        R_ReleaseObject(mem_shared_sexp);
        mem_shared_sexp = NULL;
    }

    // TODO restore binding?

    if (original_cmpfun != NULL) {
        R_ReleaseObject(original_cmpfun);
        original_cmpfun = NULL;
    }

    if (original_tryCmpfun != NULL) {
        R_ReleaseObject(original_tryCmpfun);
        original_tryCmpfun = NULL;
    }
}