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
#include "rcp_bc_info.h"
#include "runtime_internals.h"
#include "stencils/stencils.h"

#define UNPROTECT_SAFE(ptr)                         \
    do                                              \
    {                                               \
        assert(R_PPStack[R_PPStackTop - 1] == ptr); \
        UNPROTECT(1);                               \
    } while (0)

// Used as a hint where to map address space close to R internals to allow relative addressing
#define R_INTERNALS_ADDRESS (&Rf_ScalarInteger)
//#define BC_DEFAULT_OPTIMIZE_LEVEL 2

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

static void prepare_active_holes(void)
{
    for (size_t i = 0; i < sizeof(stencils_all) / sizeof(*stencils_all); i++)
    {
        const Stencil *stencil = stencils_all[i];
        for (size_t j = 0; j < stencil->holes_size; j++)
        {
            Hole *hole = &stencil->holes[j];
            switch (hole->kind) {
            case RELOC_RUNTIME_SYMBOL_DEREF: {
                hole->val.symbol = (const void*)(*((SEXP *)(hole->val.symbol)));
                hole->kind = RELOC_RUNTIME_SYMBOL;
            } break;
            case RELOC_RUNTIME_CALL: {
                void *(*fun)(const void *) = hole->val.call.sym;
                hole->val.symbol = fun(hole->val.call.arg);
                // Note: we assume that the returned value does not need to be protected from GC
                hole->kind = RELOC_RUNTIME_SYMBOL;
            } break;
            }
        }
    }
}

typedef struct {
    uint8_t rodata[sizeof(rodata)];
    size_t got_table_size;
    void* got_table[];
} mem_shared_data;

static rcp_sharedmem_ptrs *mem_shared;
static SEXP mem_shared_sexp;
static const uint8_t *notinlined_executable;

static void prepare_shared_memory()
{
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
    mem_shared->memory_functions_executable = (void*)notinlined_executable;
    mem_shared->memory_functions_executable_size = notinlined_size;

    mem_shared_sexp = PROTECT(R_MakeExternalPtr(mem_shared, R_NilValue, R_NilValue));
    R_PreserveObject(mem_shared_sexp);
    UNPROTECT(1); // mem_shared_sexp
    R_RegisterCFinalizerEx(mem_shared_sexp, &R_RcpSharedFree, TRUE);
}

#ifdef STEPFOR_SPECIALIZE
typedef struct {
  int cached_type;
  uint8_t *dst;
  uint8_t *src[stepfor_variant_count];
  uint16_t sizes[stepfor_variant_count];
  uint8_t data[stepfor_sum_size];
} StepFor_specialized;

StepFor_specialized stepfor_data;

void prepare_stepfor()
{
    stepfor_data.cached_type = -1; // Initialize to an invalid type
    stepfor_data.dst = NULL;
    size_t pos = 0;

    for (size_t a = 0; a < stepfor_variant_count; a++)
    {
        stepfor_data.sizes[a] = STEPFOR_OP_stencils[a].body_size;
        *(ptrdiff_t*)&stepfor_data.src[a] = pos;
        memcpy(&stepfor_data.data[pos], STEPFOR_OP_stencils[a].body, STEPFOR_OP_stencils[a].body_size);
        pos += STEPFOR_OP_stencils[a].body_size;
    }
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
    uint8_t **executable_lookup;
    int *bytecode;
    const int *bcell_lookup;
    const int *loopcntxt_lookup;
    uint8_t *executable_start;
} PatchContext;

static void patch(uint8_t *dst, uint8_t *loc, int pos, const Stencil *stencil, const Hole *hole, int hole_id, int *imms, int nextop, void* smc_variants, const PatchContext *ctx)
{
    ptrdiff_t ptr;
    const mem_shared_data *shared;

    assert(ctx != NULL);
    #ifdef MCMODEL_SMALL
    // Point to different memory regions to allow relative addressing in smaller memory model
    if (hole->is_pc_relative)
        shared = ctx->shared_near;
    else
        shared = ctx->shared_low;
    #else
    shared = ctx->shared_near;
    #endif

    assert(hole != NULL);
    switch (hole->kind)
    {
    case RELOC_RUNTIME_SYMBOL:
    {
        ptr = (ptrdiff_t)hole->val.symbol;
    }
    break;
    case RELOC_RUNTIME_SYMBOL_GOT:
    {
        assert(shared != NULL);
        ptr = (ptrdiff_t)&shared->got_table[hole->got_pos];
    }
    break;
    case RELOC_RUNTIME_SYMBOL_DEREF:
    {
        assert(hole->val.symbol != NULL);
        ptr = (ptrdiff_t)(*((SEXP *)(hole->val.symbol)));
    }
    break;
    case RELOC_RUNTIME_CALL:
    {
        assert(hole->val.call.sym != NULL);
        void* (*fun)(const void*) = hole->val.call.sym;
        ptr = (ptrdiff_t)fun(hole->val.call.arg);
    }
    break;
    case RELOC_RODATA:
    {
        ptr = (ptrdiff_t)shared->rodata;
    }
    break;
    case RELOC_RCP_EXEC_NEXT:
    {
        ptr = (ptrdiff_t)ctx->executable_lookup[nextop];
        assert(ptr != 0);
    }
    break;
    case RELOC_RCP_EXEC_IMM:
    {
        assert(ctx->executable_lookup != NULL);
        assert(imms != NULL);
        ptr = (ptrdiff_t)ctx->executable_lookup[imms[hole->val.imm_pos] - 1];
    }
    break;
    case RELOC_RCP_RAW_IMM:
    {
        assert(imms != NULL);
        ptr = imms[hole->val.imm_pos];
    }
    break;
    case RELOC_RCP_CONST_AT_IMM:
    {
        assert(ctx->constpool != NULL);
        assert(imms != NULL);
        ptr = (ptrdiff_t)ctx->constpool[imms[hole->val.imm_pos]];
    }
    break;
    case RELOC_RCP_CONST_STR_AT_IMM:
    {
        assert(ctx->constpool != NULL);
        assert(imms != NULL);
        SEXP symbol = ctx->constpool[imms[hole->val.imm_pos]];
        if (TYPEOF(symbol) != SYMSXP)
            error("The const referenced is not a symbol.");

        ptr = (ptrdiff_t)CHAR(PRINTNAME(symbol));
    }
    break;
    case RELOC_RCP_CONSTCELL_AT_IMM:
    {
        assert(ctx->bcell_lookup != NULL);
        assert(imms != NULL);
        int constant_index = imms[hole->val.imm_pos];
        int bcell_index = ctx->bcell_lookup[constant_index];
        ptr = offsetof(rcpEval_locals, vcache) + bcell_index * sizeof(SEXP);
    }
    break;
    case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
    {
        assert(ctx->bcell_lookup != NULL);
        assert(imms != NULL);
        assert(ctx->bytecode != NULL);
        int constant_index = ctx->bytecode[imms[hole->val.imm_pos] - 3];
        int bcell_index = ctx->bcell_lookup[constant_index];
        ptr = offsetof(rcpEval_locals, vcache) + bcell_index * sizeof(SEXP);
    }
    break;
    case RELOC_RCP_LOOPCNTXT:
    {
        assert(ctx->loopcntxt_lookup != NULL);
        ptr = ctx->loopcntxt_lookup[pos] + 1; // -1 to allow for a zero index with copy-and-patch (that does not allow value of 0)
    }
    break;
#ifdef STEPFOR_SPECIALIZE
    case RELOC_RCP_PATCHED_VARIANTS:
    {
        assert(smc_variants != NULL);
        ptr = (ptrdiff_t)smc_variants;
    }
    break;
#endif
    case RELOC_RCP_EXECUTABLE_START:
    {
        assert(ctx->executable_start != NULL);
        ptr = (ptrdiff_t)ctx->executable_start;
    }
    break;
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
        error("Offset to a value does not fit into required patch hole (%p does not fit into %hu bytes). Relocation type: %d. Stencil: %s. Hole: %d. Try to set memory model to large.\n", (void *)ptr, hole->size, hole->kind, stencil->name, hole_id);
    if (ptr == 0)
        warning("Zero integer passed as an argument to BC instruction. Relocation type: %d. Stencil: %s. Hole: %d. ", hole->kind, stencil->name, hole_id);

    memcpy(&dst[hole->offset], &ptr, hole->size);
}

static const Stencil *get_stencil(RCP_BC_OPCODES opcode, const int *imms, const SEXP *r_constpool)
{
    const Stencil* stencil_set = stencils[opcode];
    // For speciailized stencils
    switch(opcode)
    {
        case MATH1_BCOP:
            return &stencil_set[imms[1]];
        break;
        case LDCONST_BCOP:
        {
            SEXP constant = r_constpool[imms[0]];
            if (constant->sxpinfo.scalar && ATTRIB(constant) == R_NilValue)
            {
                switch (TYPEOF(constant))
                {
                case REALSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: REAL\n");
                    return &stencil_set[0];
                case INTSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: INT\n");
                    return &stencil_set[1];
                case LGLSXP:
                    DEBUG_PRINT("Using specialized version of LDCONST_OP: LGL\n");
                    return &stencil_set[2];
                default:
                    break;
                }
            }
            DEBUG_PRINT("Using specialized version of LDCONST_OP: SEXP\n");
            return &stencil_set[3];
        }
        break;
#ifdef STEPFOR_SPECIALIZE
        case STEPFOR_BCOP:
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
#ifdef SWITCH_SPECIALIZE
        case SWITCH_BCOP:
        {
            SEXP names = r_constpool[imms[1]];
            SEXP ioffsets = r_constpool[imms[2]];
            SEXP coffsets = r_constpool[imms[3]];

            Rboolean is_names_null = names == R_NilValue;
            int names_length = LENGTH(names);
            int ioffsets_length = LENGTH(ioffsets);
            DEBUG_PRINT("SWITCH_OP specialization: is_names_null=%d names_length=%d, ioffsets_length=%d\n", is_names_null, names_length, ioffsets_length);

            if(!is_names_null && names_length != 1 && ioffsets_length != 1)
                return &stencil_set[0];//&_RCP_SWITCH_000_OP;
            else if(!is_names_null && names_length != 1 && ioffsets_length == 1)
                return &stencil_set[1];//&_RCP_SWITCH_001_OP;
            else if(!is_names_null && names_length == 1 && ioffsets_length != 1)
                return &stencil_set[2];//&_RCP_SWITCH_010_OP;
            else if(!is_names_null && names_length == 1 && ioffsets_length == 1)
                return &stencil_set[3];//&_RCP_SWITCH_011_OP;
            else if(is_names_null && ioffsets_length != 1)
                return &stencil_set[4];//&_RCP_SWITCH_100_OP;
            else if(is_names_null && ioffsets_length == 1)
                return &stencil_set[5];//&_RCP_SWITCH_101_OP;
            else
                error("Invalid SWITCH_OP immediate values\n");
        }
        break;
#endif
        default:
            return &stencil_set[0];
    }
    return NULL;
}

static int jump_target(RCP_BC_OPCODES opcode, const int *imms) {
  int res = 0;
  switch (opcode) {
  case (GOTO_BCOP):
  case (STEPFOR_BCOP):
    res = imms[0];
    break;
  case (BRIFNOT_BCOP):
  case (STARTSUBSET_BCOP):
  case (STARTSUBSET2_BCOP):
  case (AND1ST_BCOP):
  case (OR1ST_BCOP):
  case (STARTSUBSET_N_BCOP):
  case (STARTSUBASSIGN_N_BCOP):
  case (STARTSUBSET2_N_BCOP):
  case (STARTSUBASSIGN2_N_BCOP):
  case (BASEGUARD_BCOP):
  case (STARTLOOPCNTXT_BCOP):
    res = imms[1];
    break;
  case (STARTFOR_BCOP):
    res = imms[2];
    break;
  }
  return res - 1;
}

static int can_fallthrough_from_opcode(RCP_BC_OPCODES opcode) {
  switch (opcode) {
  case (RETURN_BCOP):
  case (GOTO_BCOP):
  case (STARTFOR_BCOP):
  case (SWITCH_BCOP):
  case (DOTSERR_BCOP):
    return 0; // Always jumps
  default:
    return 1; // Can fallthrough
  }
}

static int unlikely_to_jump(RCP_BC_OPCODES opcode) {
  switch (opcode) {
  case (STARTSUBSET_BCOP):
  case (STARTSUBSET2_BCOP):
  case (STARTSUBSET_N_BCOP):
  case (STARTSUBASSIGN_N_BCOP):
  case (STARTSUBSET2_N_BCOP):
  case (STARTSUBASSIGN2_N_BCOP):
  case (BASEGUARD_BCOP):
    // These instructions are very unlikely to jump (mostly just in the case of errors)
    return 1; // Unlikely to jump
  default:
    return 0; // Likely to jump
  }
}

static int8_t stack_effect(RCP_BC_OPCODES opcode, int* imms) {
  int8_t res = RCP_BC_STACK_EFFECT[opcode];
  switch (opcode) {
  case (SUBSET_N_BCOP):
  case (SUBSET2_N_BCOP):
  case (SUBASSIGN_N_BCOP):
  case (SUBASSIGN2_N_BCOP):
    res -= imms[1];
  }
  return res;
}

typedef struct BasicBlock {
    int bytecode_start;
    int bytecode_end;
    int next_blocks_size;
    struct BasicBlock** next_blocks;
} BasicBlock;

typedef struct BasicBlockStackInfo {
    const BasicBlock* bb;
    int stack_depth_end;
    int stack_depth_max;
    int visited;
} BasicBlockStackInfo;

static void fill_stack_depth(int bytecode[], BasicBlockStackInfo* bb_stack)
{
    DEBUG_PRINT("Filling stack depth for block starting at bytecode %d ending at %d\n", bb_stack->bb->bytecode_start, bb_stack->bb->bytecode_end);
    bb_stack->stack_depth_max = INT_MIN;
    bb_stack->stack_depth_end = 0;
    bb_stack->visited = 0;
    for (int i = bb_stack->bb->bytecode_start; i <= bb_stack->bb->bytecode_end; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        bb_stack->stack_depth_end += stack_effect(bytecode[i], &bytecode[i + 1]);
        if (bb_stack->stack_depth_end > bb_stack->stack_depth_max)
            bb_stack->stack_depth_max = bb_stack->stack_depth_end;

        DEBUG_PRINT("At bytecode %d (opcode %s):\tcurrent depth: %d, max depth: %d\n", i, OPCODES_NAMES[bytecode[i]], bb_stack->stack_depth_end, bb_stack->stack_depth_max);

    }
    DEBUG_PRINT("This bytecode can continue to: ");
    for (int j = 0; j < bb_stack->bb->next_blocks_size; j++)
    {
        DEBUG_PRINT("%d, ", bb_stack->bb->next_blocks[j]->bytecode_start);
    }
    DEBUG_PRINT("\n");
}

static void link_basic_block(int bytecode[], int bytecode_size, BasicBlock* bb, BasicBlock* block_lookup, SEXP* constpool)
{
    bb->next_blocks_size = 0;
    if (bb->bytecode_end >= bytecode_size)
    {
      bb->next_blocks = NULL;
      return;
    }
    int i = bb->bytecode_end;

    RCP_BC_OPCODES opcode = bytecode[i];
    int* imms = &bytecode[i + 1];

    if (opcode == SWITCH_BCOP)
    {
        SEXP ioffsets_sexp = constpool[imms[2]];
        int* ioffsets = INTEGER(ioffsets_sexp);
        int ioffsets_size = LENGTH(ioffsets_sexp);

        SEXP coffsets_sexp = constpool[imms[3]];
        int* coffsets = INTEGER(coffsets_sexp);
        int coffsets_size = LENGTH(coffsets_sexp);

        bb->next_blocks = (BasicBlock **)S_alloc(ioffsets_size + coffsets_size, sizeof(BasicBlock *));

        for (int i = 0; i < ioffsets_size; i++)
        {
            BasicBlock* target_bb = &block_lookup[ioffsets[i] - 1];
            bb->next_blocks[(bb->next_blocks_size)++] = target_bb;
        }
        if(ioffsets_sexp != coffsets_sexp) // Avoid double-linking if both point to the same array
        {
            for (int i = 0; i < coffsets_size; i++)
            {
                BasicBlock* target_bb = &block_lookup[coffsets[i] - 1];
                bb->next_blocks[(bb->next_blocks_size)++] = target_bb;
            }
        }
    }
    else
    {
        int jmp_target = jump_target(opcode, &bytecode[i + 1]);
        int fallthrough_target = can_fallthrough_from_opcode(opcode)? (i + RCP_BC_ARG_CNT[opcode] + 1) : -1;

        bb->next_blocks = (BasicBlock **)S_alloc((fallthrough_target != -1) + (jmp_target != -1), sizeof(BasicBlock *));

        if(fallthrough_target != -1)
        {
            assert(block_lookup[fallthrough_target].bytecode_end != 0);
            bb->next_blocks[(bb->next_blocks_size)++] = &block_lookup[fallthrough_target];
        }
        if(jmp_target != -1)
        {
            assert(block_lookup[jmp_target].bytecode_end != 0);
            bb->next_blocks[(bb->next_blocks_size)++] = &block_lookup[jmp_target];
        }
    }
}

static BasicBlock* build_basic_blocks(int bytecode[], int bytecode_size, SEXP *constpool)
{
    BasicBlock* block_lookup = (BasicBlock *)S_alloc(bytecode_size, sizeof(BasicBlock));
    for (size_t i = 0; i < bytecode_size; i++)
        block_lookup[i].next_blocks = (void*)-1;
    
    block_lookup[0].next_blocks = NULL; // First instruction is always a block start
        
    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        RCP_BC_OPCODES opcode = bytecode[i];
        int* imms = &bytecode[i + 1];

        if (opcode == SWITCH_BCOP)
        {
            const SEXP ioffsets = constpool[imms[2]];
            for (int i = 0, size = LENGTH(ioffsets); i < size; i++)
                block_lookup[INTEGER(ioffsets)[i] - 1].next_blocks = NULL;

            const SEXP coffsets = constpool[imms[3]];
            if (ioffsets != coffsets) // Avoid double-marking if both point to the same array
            {
                for (int i = 0, size = LENGTH(coffsets); i < size; i++)
                    block_lookup[INTEGER(coffsets)[i] - 1].next_blocks = NULL;
            }
        }
        else
        {
            int jmp_target = jump_target(opcode, imms);
            if (jmp_target != -1)
            {
                block_lookup[jmp_target].next_blocks = NULL;
            
                //if (can_fallthrough_from_opcode(opcode))
                block_lookup[i + RCP_BC_ARG_CNT[opcode] + 1].next_blocks = NULL;
            }
        }

    }
    
    int j = 0, old_i = 0;
    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        if(block_lookup[i].next_blocks == NULL)
        {
            block_lookup[i].bytecode_start = i;
            block_lookup[j].bytecode_end = old_i;
            j = i;
        }
        old_i = i;
    }
    block_lookup[j].bytecode_end = old_i;


    for(int i = 0; i < bytecode_size; i++)
    {
        if(block_lookup[i].next_blocks == NULL)
        {
            link_basic_block(bytecode, bytecode_size, &block_lookup[i], block_lookup, constpool);
        }
    }
    

    for (int i = 0, j = 0; i < bytecode_size; i++)
    {
        if(block_lookup[i].next_blocks == NULL)
            DEBUG_PRINT("Basic block %d: bytecode %d to %d\n", j++, block_lookup[i].bytecode_start, block_lookup[i].bytecode_end);
    }
    return block_lookup;
}

static int max_stack_depth_recursive(BasicBlockStackInfo* block, BasicBlockStackInfo* blocks_stack, const BasicBlock* blocks)
{
    int max_depth = block->stack_depth_max;
    if(block->visited)
        return max_depth;

    block->visited = 1;

    for (int i = 0; i < block->bb->next_blocks_size; i++)
    {
        int next_depth = max_stack_depth_recursive(&blocks_stack[block->bb->next_blocks[i] - blocks], blocks_stack, blocks) + block->stack_depth_end;
        if (next_depth > max_depth)
            max_depth = next_depth;
    }

    DEBUG_PRINT("Max possible depth at block %d - %d is %d\n", block->bb->bytecode_start, block->bb->bytecode_end, max_depth);

    block->stack_depth_max = max_depth;

    return max_depth;
}

static int calculate_max_stack_depth(int bytecode[], int bytecode_size, BasicBlock* bbs)
{
    const void *vmax = vmaxget();

    BasicBlockStackInfo* block_stack = (BasicBlockStackInfo *)S_alloc(bytecode_size, sizeof(BasicBlockStackInfo));
    for(int i = 0; i < bytecode_size; i++)
    {
        if(bbs[i].next_blocks != (void*)-1)
        {
            block_stack[i].bb = &bbs[i];
            fill_stack_depth(bytecode, &block_stack[i]);
        }
    }

    DEBUG_PRINT("Created basic blocks for max stack depth calculation\n");
    int max_depth = max_stack_depth_recursive(&block_stack[0], block_stack, bbs);
    vmaxset(vmax);
    return max_depth;
}


static rcp_exec_ptrs copy_patch_internal(int bytecode[], int bytecode_size, SEXP *constpool, int constpool_size, CompilationStats *stats)
{
    rcp_exec_ptrs res;
    size_t insts_size = _RCP_INIT.body_size;
    int for_count = 0;

    const void *vmax = vmaxget(); // Save to restore it later to free memory allocated by the following calls
    uint8_t **inst_start = (uint8_t **)S_alloc(bytecode_size, sizeof(uint8_t *));
    int *used_bcells = (int *)S_alloc(constpool_size, sizeof(int));
    int *used_loopcntxt = (int *)S_alloc(bytecode_size, sizeof(int));
    int *bytecode_lut = (int *)R_alloc(bytecode_size, sizeof(int));
    uint8_t *bytecode_alignment = (uint8_t *)S_alloc(bytecode_size, sizeof(uint8_t));

    int count_opcodes = 0;
    uint8_t can_fallthrough = 0; // Whether the previous instruction can fallthrough to the next one. First instruction is always jumped at from shim.

    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        int jmp_target;
        int alignment_labels;
        int alignment_loops;

        const int *imms = &bytecode[i + 1];

        if (unlikely_to_jump(bytecode[i]))
        {
            alignment_labels = ALIGNMENT_LABELS_UNLIKELY;
            alignment_loops = ALIGNMENT_LOOPS_UNLIKELY;
        }
        else
        {
            alignment_labels = ALIGNMENT_LABELS;
            alignment_loops = ALIGNMENT_LOOPS;
        }

        jmp_target = jump_target(bytecode[i], imms);

        // If the previous instruction cannot fallthrough, this instruction is aligned (at least) to ALIGNMENT_JUMPS
        if(!can_fallthrough)
        {
            DEBUG_PRINT("Instruction %d is aligned due to previous instruction not falling through\n", i);
            bytecode_alignment[i] = MAX(bytecode_alignment[i], ALIGNMENT_JUMPS);
        }

        if (jmp_target > 0)
        {
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
        can_fallthrough = can_fallthrough_from_opcode(bytecode[i]);
    }

    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
        DEBUG_PRINT("Instruction %d (%s) alignment: %d\n", i, OPCODES_NAMES[bytecode[i]], bytecode_alignment[i]);

    int loopcntxts_size = 0;
    // First pass to calculate the sizes
    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        const int *imms = &bytecode[i + 1];
        const Stencil *stencil = get_stencil(bytecode[i], imms, constpool);
        // DEBUG_PRINT("Opcode: %s\n", OPCODES_NAMES[bytecode[i]]);
        if (stencil == NULL || stencil->body_size == 0)
            error("Opcode not implemented: %s\n", OPCODES_NAMES[bytecode[i]]);
        
        switch(bytecode[i])
        {
        case STARTFOR_BCOP:
            for_count++;
            break;
        case ENDLOOPCNTXT_BCOP:
            used_loopcntxt[i] = loopcntxts_size++;
            break;
        }

        size_t aligned_size = align_to_higher(insts_size, bytecode_alignment[i]);
        size_t aligned_diff = aligned_size - insts_size;
        //DEBUG_PRINT("Opcode: %s, size: %zu, aligned_size: %zu, aligned_diff: %zu\n", OPCODES_NAMES[bytecode[i]], insts_size, aligned_size, aligned_diff);

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
    DEBUG_PRINT("Loop rcntxts used in this closure: %d\n", loopcntxts_size);

    // Fill in LOOPCNTXT lookup table
    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        if (bytecode[i] == STARTLOOPCNTXT_BCOP)
            used_loopcntxt[i] = used_loopcntxt[bytecode[i + 2] - 1];
    }

    // Allocate memory
    size_t executable_size_aligned = align_to_higher(insts_size, getpagesize()); // Align to page size to be able to map it as executable memory

    size_t total_size = executable_size_aligned
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
#ifdef STEPFOR_SPECIALIZE
    StepFor_specialized* stepfor_storage = (StepFor_specialized*)&memory[executable_size_aligned];
#endif

    for (size_t i = 0; i < bytecode_size; i++)
    {
        if(inst_start[i])
            inst_start[i] += (ptrdiff_t)executable;
    }
    
    res.eval = (void *)executable;
    res.bcells_size = bcells_size;
    res.rcntxts_size = loopcntxts_size;

    BasicBlock* bbs = build_basic_blocks(bytecode, bytecode_size, constpool);

    res.max_stack_size = calculate_max_stack_depth(bytecode, bytecode_size, bbs);    
    DEBUG_PRINT("Max stack size needed: %d\n", res.max_stack_size);

    // Context for patching, passed to the patch function
    PatchContext ctx = {
        .shared_near = mem_shared->memory_shared_near,
        .shared_low = mem_shared->memory_shared_low,
        .constpool = constpool,
        .executable_lookup = inst_start,
        .bytecode = bytecode,
        .bcell_lookup = used_bcells,
        .loopcntxt_lookup = used_loopcntxt,
        .executable_start = executable
    };

    memset(executable, 0x90, executable_size_aligned); // Fill the executable memory with NOPs to fill the gapps between instructions in case of non-trivial alignment

    // Start to copy-patch
    memcpy(executable, _RCP_INIT.body, _RCP_INIT.body_size);
    for (size_t j = 0; j < _RCP_INIT.holes_size; ++j)
        patch(executable, executable, 0, &_RCP_INIT, &_RCP_INIT.holes[j], j, NULL, 0, NULL, &ctx);

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

        DEBUG_PRINT("Copy-patching opcode: %s\n", OPCODES_NAMES[opcode]);

        switch (opcode)
        {
#ifdef STEPFOR_SPECIALIZE
        case STARTFOR_BCOP:
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
            for (size_t i = 0; i < stepfor_variant_count; i++)
                stepfor_mem->src[i] += (ptrdiff_t)stepfor_mem->data;
                
            DEBUG_PRINT("PATCHING CORRESPONDING STEPFOR_OP at %d, ptr pointing to %p\n", stepfor_bc, stepfor_code);

            for (size_t a = 0; a < stepfor_variant_count; a++)
                for (size_t j = 0; j < STEPFOR_OP_stencils[a].holes_size; ++j)
                    patch(stepfor_mem->src[a], stepfor_mem->dst, bc_pos, &STEPFOR_OP_stencils[a], &STEPFOR_OP_stencils[a].holes[j], j, &bytecode[stepfor_bc + 1], stepfor_bc + RCP_BC_ARG_CNT[bytecode[stepfor_bc]] + 1, NULL, &ctx);

            smc_variants = stepfor_mem;
        }
        break;
        case STEPFOR_BCOP:
            // Stepfor was already handled during startfor
            continue;
#endif
        case SWITCH_BCOP:
        {
            SEXP ioffsets_sexp = constpool[opargs[2]];
            int* ioffsets = INTEGER(ioffsets_sexp);
            int ioffsets_size = LENGTH(ioffsets_sexp);

            SEXP coffsets_sexp = constpool[opargs[3]];
            int* coffsets = INTEGER(coffsets_sexp);
            int coffsets_size = LENGTH(coffsets_sexp);
            
            for (int i = 0; i < ioffsets_size; i++)
                ioffsets[i] = inst_start[ioffsets[i] - 1] - executable;

            if (ioffsets != coffsets) // Avoid double patching if they point to the same memory
            {
                for (int i = 0; i < coffsets_size; i++)
                    coffsets[i] = inst_start[coffsets[i] - 1] - executable;
                // Possible bug: if some elements of ioffsets and coffsets point to the same label, it will be patched twice
            }
        }
        break;
        case DOTCALL_BCOP:
            opargs[1] += 1; // Adjust to avoid zero (cannot patch zero with copy-and-patch). Needs to be set accordingly in stencils!
            break;
        default:
            break;
        }

        const Stencil *stencil = get_stencil(opcode, opargs, constpool);

        memcpy(inst_start[bc_pos], stencil->body, stencil->body_size);

        // Patch the holes
        for (size_t j = 0; j < stencil->holes_size; ++j)
            patch(inst_start[bc_pos], inst_start[bc_pos], bc_pos, stencil, &stencil->holes[j], j, opargs, bc_pos + RCP_BC_ARG_CNT[bytecode[bc_pos]] + 1, smc_variants, &ctx);
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
    if (mprotect(executable + executable_size_aligned, total_size - executable_size_aligned, PROT_READ | PROT_WRITE) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }

    stats->total_size += total_size;
    stats->executable_size += insts_size;

    return res;
}


static const uint8_t* prepare_notinlined_functions(void)
{
    if(notinlined_count == 0)
        return NULL;
    
    void* notinlined_lut[notinlined_count];

    uint8_t* mem_notinlined = mmap(get_near_memory(notinlined_size), notinlined_size, PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (mem_notinlined == MAP_FAILED)
        exit(1);

    // Copy ...
    uint8_t* offset = mem_notinlined;
    for (size_t i = 0; i < notinlined_count; i++)
    {
        const Stencil* stencil = &notinlined_stencils[i];
        memcpy(offset, stencil->body, stencil->body_size);
        notinlined_lut[i] = offset;
        offset += stencil->body_size;
    }

    // ... resolve other holes ...
    for (size_t i = 0; i < sizeof(stencils_all) / sizeof(*stencils_all); i++)
    {
        const Stencil *stencil = stencils_all[i];
        for (size_t j = 0; j < stencil->holes_size; j++)
        {
            Hole *hole = &stencil->holes[j];
            if (hole->kind == RELOC_NOTINLINED_FUNCTION)
            {
                DEBUG_PRINT("Patching notinlined function hole at imm_pos %d with address %p\n", hole->val.imm_pos, notinlined_lut[hole->val.imm_pos]);
                hole->val.symbol = notinlined_lut[hole->val.imm_pos];
                hole->kind = RELOC_RUNTIME_SYMBOL;
            }
        }
    }

    PatchContext ctx = {
        .shared_near = mem_shared->memory_shared_near,
        .shared_low = mem_shared->memory_shared_low,
        .constpool = NULL,
        .executable_lookup = NULL,
        .bytecode = NULL,
        .bcell_lookup = NULL,
        .loopcntxt_lookup = NULL,
        .executable_start = NULL
    };

    // ... and patch holes in notinlined functions
    for (size_t i = 0; i < notinlined_count; i++)
    {
        const Stencil* stencil = &notinlined_stencils[i];
        for (size_t j = 0; j < stencil->holes_size; ++j)
            patch(notinlined_lut[i], notinlined_lut[i], 0, stencil, &stencil->holes[j], j, NULL, 0, NULL, &ctx);
    }

    if (mprotect(mem_notinlined, notinlined_size, PROT_EXEC) != 0)
    {
        perror("mprotect failed");
        exit(1);
    }
    return mem_notinlined;
}


static SEXP original_cmpfun = NULL;

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
        DEBUG_PRINT("%d:\tOpcode: %d = %s\n", i, bytecode[i], OPCODES_NAMES[bytecode[i]]);
        for (size_t j = 0; j < RCP_BC_ARG_CNT[bytecode[i]]; j++)
        {
            DEBUG_PRINT("\tIMM: %d\n", bytecode[i + 1 + j]);
        }
        instructions++;
        i += RCP_BC_ARG_CNT[bytecode[i]];
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
    for (int i = 0; i < bytecode_size; i += RCP_BC_ARG_CNT[bytecode[i]] + 1)
    {
        int opcode = bytecode[i];
        int *opargs = &bytecode[i + 1];

        if(opcode == MAKECLOSURE_BCOP)
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

SEXP C_is_compiled(SEXP closure) {
    if (TYPEOF(closure) != CLOSXP) {
        Rf_error("Expected a closure");
    }

    SEXP body = BODY(closure);

    if (TYPEOF(body) != EXTPTRSXP)
        return Rf_ScalarLogical(FALSE);
    if (!RSH_IS_CLOSURE_BODY(body))
        return Rf_ScalarLogical(FALSE);

    return Rf_ScalarLogical(TRUE);
}

SEXP C_rcp_cmpfun(SEXP f, SEXP options)
{
    DEBUG_PRINT("Starting to JIT a function...\n");

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
    else
        PROTECT(options); // To balance PROTECT/UNPROTECT
    #endif

    struct timespec start, mid, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    CompilationStats stats = {0, 0};

    DEBUG_PRINT("Compiling to bytecode...\n");
    SEXP compiled = compile_to_bc(f, options);
    #ifdef BC_DEFAULT_OPTIMIZE_LEVEL
    UNPROTECT(1); // options
    #endif

    if(TYPEOF(BODY(compiled)) != BCODESXP)
        error("The BC compiler could not compile this function.");

    DEBUG_PRINT("Bytecode compilation finished.\n");

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
        DEBUG_PRINT(
            "Data size:\t%.0f B\n"
            "Executable size:\t%zu B\n"
            "Opcodes count:\t%zu\n"
            "Average opcode patched size:\t%.1f B\n",
            (double)(stats.total_size - stats.executable_size),
            stats.executable_size,
            stats.count_opcodes,
            (double)(stats.executable_size) / stats.count_opcodes
        );

        DEBUG_PRINT("Copy-patched in %.3f ms (%.3f for bytecode compilation + %.3f for copy-patch)\n", elapsed_time, elapsed_time_mid, elapsed_time - elapsed_time_mid);
    }

    return compiled;
}

static void save_original_cmpfun(void)
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
}

static SEXP cmpfun_call_sexp(void)
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
    UNPROTECT(3); // formals, call_expr, compiler_namespace

    return wrapper;
}

static SEXP C_rcp_override_cmpfun(SEXP cmpfun)
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

    // Unlock the binding before modifying it
    SEXP cmpfun_sym = PROTECT(Rf_install("cmpfun"));
    R_unLockBinding(cmpfun_sym, compiler_namespace);
    
    // Replace cmpfun in the compiler namespace
    Rf_defineVar(cmpfun_sym, cmpfun, compiler_namespace);
    
    // Re-lock the binding
    R_LockBinding(cmpfun_sym, compiler_namespace);
    
    UNPROTECT(2); // cmpfun_sym, compiler_namespace

    DEBUG_PRINT("cmpfun hooked\n");
}

SEXP C_rcp_cmppkg(SEXP package_name)
{
    if (TYPEOF(package_name) != STRSXP || LENGTH(package_name) != 1)
        error("Package name must be a single character string.");
    
    const char *pkg = CHAR(STRING_ELT(package_name, 0));
    
    // Get the package namespace
    SEXP getNamespace_call = Rf_lang2(
        PROTECT(Rf_install("getNamespace")),
        package_name
    );
    UNPROTECT(1);
    PROTECT(getNamespace_call);
    
    int error_occurred = 0;
    SEXP pkg_namespace = R_tryEval(getNamespace_call, R_GlobalEnv, &error_occurred);
    UNPROTECT_SAFE(getNamespace_call);
    
    if (error_occurred || pkg_namespace == R_UnboundValue) {
        error("Package '%s' is not loaded.  Please load it first with library().", pkg);
    }
    
    PROTECT(pkg_namespace);
    
    // Get all object names in the namespace
    SEXP ls_call = Rf_lang3(
        PROTECT(Rf_install("ls")),
        pkg_namespace,
        PROTECT(Rf_ScalarLogical(TRUE)) // all. names = TRUE
    );
    UNPROTECT(2); // ls and all.names arg
    PROTECT(ls_call);
    
    SEXP obj_names = Rf_eval(ls_call, R_GlobalEnv);
    UNPROTECT_SAFE(ls_call);
    PROTECT(obj_names);
    
    int n_objects = LENGTH(obj_names);
    int compiled_count = 0;
    int failed_count = 0;
    
    fprintf(stderr, "Compiling functions from package '%s'...\n", pkg);
    
    // Iterate through all objects
    for (int i = 0; i < n_objects; i++) {
        fprintf(stderr, "  Compiling:  %s\n", CHAR(STRING_ELT(obj_names, i)));
        SEXP name_sym = Rf_install(CHAR(STRING_ELT(obj_names, i)));
        PROTECT(name_sym);
        SEXP obj = Rf_findVarInFrame(pkg_namespace, name_sym);

        if (obj == R_UnboundValue)
            continue;

        if (TYPEOF(obj) == PROMSXP) {
            obj = Rf_eval(name_sym, pkg_namespace);
        }
        
        // Check if it's a function
        if (TYPEOF(obj) != CLOSXP){
            UNPROTECT_SAFE(name_sym);
            continue;
        }

        // Check if already compiled
        if (TYPEOF(BODY(obj)) == EXTPTRSXP && RSH_IS_CLOSURE_BODY(BODY(obj))) {
            fprintf(stderr, "  Skipping %s (already compiled)\n", CHAR(STRING_ELT(obj_names, i)));
            UNPROTECT_SAFE(name_sym);
            continue;
        }
        
        PROTECT(obj);
        // Try to compile the function
        SEXP cmpfun_call = Rf_lang3(
            PROTECT(Rf_install("rcp_cmpfun")),
            obj,
            R_NilValue
        );
        UNPROTECT(1); // install
        UNPROTECT_SAFE(obj);
        PROTECT(cmpfun_call);
        int comp_error = 0;
        SEXP compiled = R_tryEval(cmpfun_call, R_GlobalEnv, &comp_error);
        UNPROTECT_SAFE(cmpfun_call);
        
        if (comp_error) {
            Rf_warning("Failed to compile function %s in package %s.", CHAR(STRING_ELT(obj_names, i)), pkg);
            failed_count++;
            UNPROTECT_SAFE(name_sym);
            continue;
        }
        
        // Replace the function in-place in the namespace
        PROTECT(compiled);
        R_unLockBinding(name_sym, pkg_namespace);
        Rf_defineVar(name_sym, compiled, pkg_namespace);
        R_LockBinding(name_sym, pkg_namespace);
        UNPROTECT_SAFE(compiled);
        UNPROTECT_SAFE(name_sym);
        
        compiled_count++;
    }

    UNPROTECT_SAFE(obj_names);
    UNPROTECT_SAFE(pkg_namespace);
    
    fprintf(stderr, "Compilation complete:  %d succeeded, %d failed\n", 
            compiled_count, failed_count);
    
    // Return a list with statistics
    SEXP result = PROTECT(Rf_allocVector(VECSXP, 2));
    SET_VECTOR_ELT(result, 0, Rf_ScalarInteger(compiled_count));
    SET_VECTOR_ELT(result, 1, Rf_ScalarInteger(failed_count));
    
    SEXP names = PROTECT(Rf_allocVector(STRSXP, 2));
    SET_STRING_ELT(names, 0, Rf_mkChar("compiled"));
    SET_STRING_ELT(names, 1, Rf_mkChar("failed"));
    Rf_setAttrib(result, R_NamesSymbol, names);
    
    UNPROTECT_SAFE(names);
    UNPROTECT_SAFE(result);
    return result;
}

SEXP C_rcp_jit_enable()
{
    SEXP wrapper = cmpfun_call_sexp();
    PROTECT(wrapper);
    C_rcp_override_cmpfun(wrapper);
    UNPROTECT(1); // wrapper

    return R_NilValue;
}

SEXP C_rcp_jit_disable()
{
    C_rcp_override_cmpfun(original_cmpfun);
    return R_NilValue;
}

void rcp_init(void)
{
    refresh_near_memory_ptr(0);

    prepare_shared_memory();

    prepare_active_holes();

    notinlined_executable = prepare_notinlined_functions();

#ifdef STEPFOR_SPECIALIZE
    prepare_stepfor();
#endif

    save_original_cmpfun();

    DEBUG_PRINT("Allignment: LABELS=%d, JUMPS=%d, LOOPS=%d, UNLIKELY_LABELS=%d, UNLIKELY_LOOPS=%d\n", ALIGNMENT_LABELS, ALIGNMENT_JUMPS, ALIGNMENT_LOOPS, ALIGNMENT_LABELS_UNLIKELY, ALIGNMENT_LOOPS_UNLIKELY);

    DEBUG_PRINT("RCP initialized\n");
}

void rcp_destr(void)
{
    if(mem_shared_sexp != NULL) {
        R_ReleaseObject(mem_shared_sexp);
        mem_shared_sexp = NULL;
    }

    if (original_cmpfun != NULL) {
        C_rcp_override_cmpfun(original_cmpfun);
        DEBUG_PRINT("Restored original cmpfun\n");
        R_ReleaseObject(original_cmpfun);
        original_cmpfun = NULL;
    }
}