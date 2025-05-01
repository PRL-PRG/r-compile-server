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

//#define DEBUG_MODE 1
#ifdef DEBUG_MODE
    #define DEBUG_PRINT(...) fprintf(stderr, __VA_ARGS__)
#else
    #define DEBUG_PRINT(...) // No-op
#endif

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
static SEXP LOAD_R_BUILTIN(const char* name)
{
    SEXP result = PROTECT(R_Primitive(name));
    R_PreserveObject(result);
    UNPROTECT(1);
    return result;
}

uint8_t* ro_low = NULL;
size_t* shared_mem_ref_count = NULL;

void* precompiled_functions[126];
static void prepare()
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

    //R_MATH1_EXT_FUNS
    #define X(a, b, c) precompiled_functions[i++] = &c;
    X_MATH1_EXT_OPS
    #undef X

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

    //DEBUG_PRINT("precompiled_functions size: %d\n", i);
    assert(i <= sizeof(precompiled_functions) / sizeof(*precompiled_functions));
}

static SEXP copy_patch_bc(SEXP bcode);

#include "stencils/stencils.h"

static int fits_in_int64(int64_t value) {
    return value >= INT64_MIN && value <= INT64_MAX;
}

static int fits_in_int32(int64_t value) {
    return value >= INT32_MIN && value <= INT32_MAX;
}

static int fits_in_int16(int64_t value) {
    return value >= INT16_MIN && value <= INT16_MAX;
}

static int fits_in_int8(int64_t value) {
    return value >= INT8_MIN && value <= INT8_MAX;
}

static uint8_t reloc_indirection(RELOC_KIND kind)
{
    switch (kind)
    {
        case RELOC_RUNTIME_SYMBOL: 
            return 1;
        case RELOC_RCP_NEXTOP:
            return 0;
        case RELOC_RCP_GOTO_IMM:
            return 0;
        case RELOC_RHO:
            return 1;
        case RELOC_RCP_RAW_IMM:
            return 0;
        case RELOC_RCP_CONST_AT_IMM:
            return 0;
        case RELOC_RCP_CONSTCELL_AT_IMM:
            return 1;
        case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
            return 1;
        case RELOC_RODATA:
            return 1;
        case RELOC_RCP_PRECOMPILED:
            return 1;
        case RELOC_RCP_CONST_STR_AT_IMM:
            return 0;
        default:
            __builtin_unreachable();
    }
}

static void patch(uint8_t* inst, const Stencil* stencil, const Hole* hole, int* imms, const uint8_t* ro_low, const uint8_t* ro_near, SEXP * constpool, SEXP * bcells, SEXP * precompiled, uint8_t* executable, size_t * executable_lookup, int bytecode[], SEXP* rho, const int* bcell_lookup, int nextop)
{
    ptrdiff_t ptr;

    int used_indirection;

    switch(hole->kind)
    {
        case RELOC_RUNTIME_SYMBOL: 
        {
            ptr = (ptrdiff_t)hole->val.symbol;
        } break;
        case RELOC_RCP_NEXTOP:
        {
            ptr = (ptrdiff_t)&executable[executable_lookup[nextop]];
        } break;
        case RELOC_RCP_GOTO_IMM:
        {
            ptr = (ptrdiff_t)&executable[executable_lookup[imms[hole->val.imm_pos]-1]];
        } break;
        case RELOC_RHO:
        {
            ptr = (ptrdiff_t)rho;
        } break;
        case RELOC_RCP_RAW_IMM:
        {
            ptr = imms[hole->val.imm_pos];
        } break;
        case RELOC_RCP_CONST_AT_IMM:
        {
            ptr = (ptrdiff_t)constpool[imms[hole->val.imm_pos]];
        } break;
        case RELOC_RCP_CONSTCELL_AT_IMM:
        {
            int bcell_index = imms[hole->val.imm_pos];
            //DEBUG_PRINT("bcell_index: %d\n", bcell_index);
            ptr = (ptrdiff_t)&bcells[bcell_lookup[bcell_index]];
        } break;
        case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
        {
            int bcell_index = bytecode[imms[hole->val.imm_pos] - 3];
            //DEBUG_PRINT("bcell_index: %d\n", bcell_index);
            ptr = (ptrdiff_t)&bcells[bcell_lookup[bcell_index]];
        } break;
        case RELOC_RODATA:
        {
            // Point to different memory regions to allow efficient x86 relative addressing
            if(hole->is_pc_relative)
                ptr = (ptrdiff_t)ro_near;
            else
                ptr = (ptrdiff_t)ro_low;
        } break;
        case RELOC_RCP_PRECOMPILED:
        {
            ptr = (ptrdiff_t)precompiled;
        } break;
        case RELOC_RCP_CONST_STR_AT_IMM:
        {
            SEXP symbol = constpool[imms[hole->val.imm_pos]];
            if (TYPEOF(symbol) != SYMSXP) 
                error("The const referenced is not a symbol.");
            
            ptr = (ptrdiff_t)CHAR(PRINTNAME(symbol));
            //DEBUG_PRINT("%s\n", CHAR(PRINTNAME(fun))) ; // Extract the name of the function
        } break;
        default:
        {
            error("Unsupported relocation kind: %d\n", hole->kind);
            return;
        } break;
    }

    int indirection_correction = reloc_indirection(hole->kind) - hole->indirection_level;

    for (; indirection_correction > 0; --indirection_correction)
    {
        ptr = *(uintptr_t*)ptr;
        DEBUG_PRINT("dereferencing pointer\n");
    }

    ptr += hole->addend;
    if(hole->is_pc_relative)
        ptr -= (ptrdiff_t)&inst[hole->offset];

    int fits = 1;
    switch (hole->size)
    {
    case 1:
        fits = fits_in_int8(ptr);
        break;    
    case 2:
        fits = fits_in_int16(ptr);
        break;    
    case 4:
        fits = fits_in_int32(ptr);
        break;
    case 8:
        fits = fits_in_int64(ptr);
        break;
    default:
        fits = 0;
        break;
    }
    if(!fits)
    {
        error("Offset to a value does not fit into required patch hole (%p does not fit into %hu bytes). Relocation type: %d\n", (void*)ptr, hole->size, hole->kind);
        return;
    }

    //DEBUG_PRINT("0x%zx\n", ptr);
    memcpy(&inst[hole->offset], &ptr, hole->size);
}

static void print_byte_array(const unsigned char * arr, size_t len) {
  for (size_t i = 0; i < len; i++)
  {
    DEBUG_PRINT("0x%02X, ", arr[i]); // Print each byte in hex format
  }
  DEBUG_PRINT("\n");
}

static size_t align_to_higher(size_t size, size_t alignment) {
    if (alignment == 0) {
        return size; // No alignment needed
    }
    return (size + alignment - 1) & ~(alignment - 1);
}

static void* find_free_space_near(void* target_ptr, size_t size) {
    uintptr_t target = (uintptr_t)target_ptr;
    FILE *maps = fopen("/proc/self/maps", "r");
    if (!maps) {
        perror("fopen");
        return NULL;
    }

    uintptr_t prev_start = 0, prev_end = 0;
    ptrdiff_t best_diff = PTRDIFF_MAX;
    uintptr_t best_addr = 0;

    char line[256];
    while (fgets(line, sizeof(line), maps)) {
        uintptr_t start, end;
        if (sscanf(line, "%lx-%lx", &start, &end) != 2) continue;

        // Check for gap between previous and current region
        if (prev_end && (start > prev_end)) {
            size_t gap = start - prev_end;
            if (gap >= size) {
                uintptr_t candidate = prev_end;
                ptrdiff_t diff = (candidate > target) ? (candidate - target) : (target - candidate);
                if (diff < best_diff) {
                    best_diff = diff;
                    best_addr = candidate;
                }
            }
        }

        prev_start = start;
        prev_end = end;
    }

    fclose(maps);

    return (void*)best_addr;
}

static const Stencil* get_stencil(int opcode, const int * imms, const SEXP* r_constpool)
{
    switch(opcode)
    {
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
        } break;
        case LDCONST_OP:
        {
            SEXP constant = r_constpool[imms[0]];
            if (constant->sxpinfo.scalar && ATTRIB(constant) == R_NilValue)
            {
                switch(TYPEOF(constant))
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

        } break;

        default:
            return &stencils[opcode];
    }
    return NULL;
}

static rcp_exec_ptrs copy_patch_internal(int bytecode[], int bytecode_size, SEXP* constpool, int constpool_size)
{
    rcp_exec_ptrs res;
    size_t insts_size = _RCP_INIT.body_size;

    size_t* inst_start = calloc(bytecode_size, sizeof(size_t));
    int* used_bcells = calloc(constpool_size, sizeof(int));

    for (int i = 0; i < bytecode_size; ++i)
    {
        const int* imms = &bytecode[i+1];
        const Stencil* stencil = get_stencil(bytecode[i], imms, constpool);
        //DEBUG_PRINT("Opcode: %s\n", OPCODES[bytecode[i]]);
        if(stencil == NULL || stencil->body_size == 0)
        {
            free(inst_start);
            free(used_bcells);
            error("Opcode not implemented: %s\n", OPCODES[bytecode[i]]);
        }

        inst_start[i] = insts_size;
        insts_size += stencil->body_size;

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            const Hole* hole = &stencil->holes[j];
            int indirection_level = reloc_indirection(hole->kind);

            if(hole->indirection_level > indirection_level)
            {
                error("Unsupported patch symbol indirection level. Stencils need to be compiled with position dependent code (no-pic) switch.");
            }

            switch(hole->kind)
            {
                case RELOC_RCP_CONSTCELL_AT_IMM:
                {
                    int bcell_index = imms[hole->val.imm_pos];
                    //DEBUG_PRINT("bcell_index: %d\n", bcell_index);
                    used_bcells[bcell_index]++;
                } break;
                case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
                {
                    int bcell_index = bytecode[imms[hole->val.imm_pos] - 3];
                    //DEBUG_PRINT("bcell_index: %d\n", bcell_index);
                    used_bcells[bcell_index]++;
                } break;
            }
        }

        i += imms_cnt[bytecode[i]];
    }
    
    fprintf(stderr, "Binary size: %zu\n", insts_size);

    int bcells_size = 0;
    for (int i = 0; i < constpool_size; ++i)
    {
        if(used_bcells[i] != 0)
            bcells_size++;
    }

    DEBUG_PRINT("BCells used for this closure: %d\n", bcells_size);
        
    for (int i = 0, index = 0; i < constpool_size; ++i)
    {
        if(used_bcells[i] != 0)
            used_bcells[i] = index++;
    }

    size_t rodata_size = align_to_higher(sizeof(rodata), sizeof(void*));

    size_t total_size = rodata_size + sizeof(SEXP) + insts_size + bcells_size*sizeof(SEXP) + sizeof(precompiled_functions);

    void* mem_address = find_free_space_near(&Rf_ScalarInteger, total_size);


    uint8_t* memory = mmap(mem_address, total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (memory == MAP_FAILED)
        exit(1);

    __builtin_assume_aligned (memory, sysconf(_SC_PAGESIZE)); // memory is aligned to page size

    res.memory_private = memory;
    res.memory_private_size = total_size;

    uint8_t* ro_near =  (uint8_t*) &memory[0];
    SEXP* rho =            (SEXP*) &memory[rodata_size];
    SEXP* bcells =         (SEXP*) &memory[rodata_size + sizeof(*rho)];
    SEXP* precompiled =    (SEXP*) &memory[rodata_size + sizeof(*rho) + bcells_size * sizeof(*bcells)];
    uint8_t* executable =          &memory[rodata_size + sizeof(*rho) + bcells_size * sizeof(*bcells) + sizeof(precompiled_functions)];

    res.eval = (void*)executable;
    res.rho = rho;


    memcpy(ro_near, rodata, sizeof(rodata));

    for (int i = 0; i < bcells_size; ++i)
        bcells[i] = R_NilValue;
    *rho = R_NilValue;

    memcpy(precompiled, precompiled_functions, sizeof(precompiled_functions));
    

    res.memory_shared = ro_low;
    res.memory_shared_size = sizeof(rodata);
    res.memory_shared_refcount = shared_mem_ref_count;

    res.bcells = bcells;
    res.bcells_size = bcells_size;


    // start to copy-patch

    size_t executable_pos = 0;
    memcpy(&executable[executable_pos], _RCP_INIT.body, _RCP_INIT.body_size);
    for (size_t j = 0; j < _RCP_INIT.holes_size; ++j)
    {
        patch(&executable[executable_pos], &_RCP_INIT, &_RCP_INIT.holes[j], NULL, ro_low, ro_near, constpool, bcells, precompiled, executable, inst_start, bytecode, rho, used_bcells, 0);
    }
    executable_pos +=  _RCP_INIT.body_size;

    for (int i = 0; i < bytecode_size; ++i)
    {
        DEBUG_PRINT("Copy-patching opcode: %s\n", OPCODES[bytecode[i]]);

        if(bytecode[i] == MAKECLOSURE_OP)
        {
            SEXP fb = constpool[bytecode[i+1]];
            SEXP body = VECTOR_ELT(fb, 1);

            if(TYPEOF(body) == BCODESXP)
            {
                DEBUG_PRINT("**********\nCompiling closure\n");
                //constpool[bytecode[i+1]] = Rf_duplicate(constpool[bytecode[i+1]]); // TODO Is this needed?
                SEXP res = copy_patch_bc(body);
                SET_VECTOR_ELT(fb, 1, res);
            }
            else if(IS_RCP_PTR(body))
            {
                DEBUG_PRINT("Using precompiled closure\n");
            }
            else
            {
                error("Invalid closure type: %d\n", TYPEOF(body));
            }
            DEBUG_PRINT("**********\nClosure compiled\n");
        }

        const Stencil* stencil = get_stencil(bytecode[i], &bytecode[i+1], constpool);

        memcpy(&executable[executable_pos], stencil->body, stencil->body_size);

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            patch(&executable[executable_pos], stencil, &stencil->holes[j], &bytecode[i+1], ro_low, ro_near, constpool, bcells, precompiled, executable, inst_start, bytecode, rho, used_bcells, i + imms_cnt[bytecode[i]] + 1);
        }

        //print_byte_array(&executable[executable_pos], stencils[bytecode[i]].body_size);

        executable_pos += stencil->body_size;

        i += imms_cnt[bytecode[i]];
    }
    free(used_bcells);
    free(inst_start);

    if (mprotect(memory, total_size, PROT_READ | PROT_WRITE | PROT_EXEC) != 0) {
        perror("mprotect failed");
        exit(1);
    }

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

    if (compile_fun == R_UnboundValue) {
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

static void bytecode_info(const int* bytecode, int bytecode_size, const SEXP* consts, int const_size)
{
    DEBUG_PRINT("Constant pool size: %d\n", const_size);
    DEBUG_PRINT("Bytecode size: %d\n", bytecode_size);

    int instructions = 0;
    for (int i = 0; i < bytecode_size; ++i)
    {
        DEBUG_PRINT("%d:\tOpcode: %d = %s\n", i, bytecode[i], OPCODES[bytecode[i]]);
        for (size_t j = 0; j < imms_cnt[bytecode[i]]; j++)
        {
            DEBUG_PRINT("\tIMM: %d\n", bytecode[i+1+j]);
        }
        /*
        if (bytecode[i] == STARTFOR_OP)
        {
            DEBUG_PRINT(stderr, "%d\n", TYPEOF(consts[bytecode[i+1+j]]));
            Rf_PrintValue(consts[bytecode[i+1+j]]);
        }*/
        instructions++;
        i += imms_cnt[bytecode[i]];
    }

    DEBUG_PRINT("Instructions in bytecode: %d\n", instructions);
}

static SEXP copy_patch_bc(SEXP bcode)
{
    SEXP bcode_code = BCODE_CODE(bcode);
    SEXP bcode_consts = BCODE_CONSTS(bcode);

    SEXP code = PROTECT(R_bcDecode(bcode_code));

    int* bytecode = INTEGER(code) + 1;
    int bytecode_size = LENGTH(code) - 1;

    SEXP* consts = DATAPTR(bcode_consts);
    int consts_size = LENGTH(bcode_consts);

    bytecode_info(bytecode, bytecode_size, consts, consts_size);
    rcp_exec_ptrs res = copy_patch_internal(bytecode, bytecode_size, consts, consts_size);
    UNPROTECT(1); // code

    (res.memory_shared_refcount)++;

    rcp_exec_ptrs* res_ptr = malloc(sizeof(rcp_exec_ptrs));
    *res_ptr = res;

    SEXP tag = PROTECT(install(RCP_PTRTAG));
    SEXP ptr = R_MakeExternalPtr(res_ptr, tag, bcode_consts);
    UNPROTECT(1);// tag
    PROTECT(ptr);
    R_RegisterCFinalizerEx(ptr, &R_RcpFree, TRUE);
    UNPROTECT(1); // ptr
    return ptr;
}

SEXP rcp_init()
{
    prepare();

    ro_low = mmap(NULL, sizeof(rodata), PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    if (ro_low == MAP_FAILED)
        exit(1);

    __builtin_assume_aligned (ro_low, sysconf(_SC_PAGESIZE)); // memory is aligned to page size
    memcpy(ro_low, rodata, sizeof(rodata));

    if (mprotect(ro_low, sizeof(rodata), PROT_READ) != 0) {
        perror("mprotect failed");
        exit(1);
    }

    shared_mem_ref_count = malloc(sizeof(*shared_mem_ref_count));
    *shared_mem_ref_count = 1;
}

SEXP rcp_destr()
{
    if(--(*shared_mem_ref_count) == 0)
    {
        munmap(ro_low, sizeof(rodata));
        ro_low = NULL;
        free(shared_mem_ref_count);
        shared_mem_ref_count = NULL;
    }
}

SEXP C_rcp_cmpfun(SEXP f, SEXP options)
{
    struct timespec start, mid, end;

    if (TYPEOF(f) != CLOSXP)
        error("The first argument must be a closure.");

    clock_gettime(CLOCK_MONOTONIC, &start); // Start time measurement
    SEXP compiled = PROTECT(compile_to_bc(f, options));
    clock_gettime(CLOCK_MONOTONIC, &mid); // End time measurement
    SEXP ptr = copy_patch_bc(BODY(compiled));
    SET_BODY(compiled, ptr);
    clock_gettime(CLOCK_MONOTONIC, &end); // End time measurement
    UNPROTECT(1);

    double elapsed_time = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec) / 1000000.0;
    double elapsed_time_mid = (mid.tv_sec - start.tv_sec) * 1000.0 + (mid.tv_nsec - start.tv_nsec) / 1000000.0;
    fprintf(stderr, "Copy-patched in %.3f ms (%.3f for bytecode compilation + %.3f for copy-patch)\n", elapsed_time, elapsed_time_mid, elapsed_time - elapsed_time_mid);
    
    return compiled;
}
