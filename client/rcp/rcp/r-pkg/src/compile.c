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

#include "rcp_common.h"
#include "runtime_internals.h"


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
SEXP LOAD_R_BUILTIN(const char* name)
{
    SEXP result = PROTECT(R_Primitive(name));
    R_PreserveObject(result);
    UNPROTECT(1);
    return result;
}

void* precompiled_functions[200];
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

    assert(i <= sizeof(precompiled_functions) / sizeof(*precompiled_functions));
    printf("%d\n", i);
}

#include "stencils/stencils.h"

static uintptr_t* const_pool_add(uintptr_t* constpool, size_t* constpool_size, uintptr_t value)
{
    for (size_t i = 0; i < *constpool_size; ++i)
    {
        if(constpool[i] == value)
            return &constpool[i];
    }
    //If it got here, the value is not in constpool and we need to add it
    constpool[*constpool_size] = value;
    return &constpool[(*constpool_size)++];
}

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

static void patch(uint8_t* inst, size_t body_size, const Stencil* stencil, const Hole* hole, int* imms, uintptr_t* immpool, size_t* immpool_size, const uint8_t* ro_low, const uint8_t* ro_near, SEXP * constpool, SEXP * bcells, SEXP * precompiled, uint8_t* executable, size_t * executable_lookup, int bytecode[])
{
    ptrdiff_t ptr;

    int used_indirection;

    switch(hole->kind)
    {
        case RELOC_RUNTIME_SYMBOL: 
        {
            ptr = (ptrdiff_t)hole->val.symbol;
            used_indirection = 1;
        } break;
        case RELOC_RCP_NEXTOP:
        {
            ptr = body_size - hole->offset;
            used_indirection = 1;
        } break;
        case RELOC_RCP_GOTO_IMM:
        {
            //fprintf(stderr, "goto imm %zu, points to code at index %d, which translates to %zu bytes\n", hole->val.imm_pos, imms[hole->val.imm_pos]-1, executable_lookup[imms[hole->val.imm_pos]-1]);
            ptr = (ptrdiff_t)&executable[executable_lookup[imms[hole->val.imm_pos]-1]];
            used_indirection = 1;
        } break;
        case RELOC_RCP_RAW_IMM:
        {
            ptr = imms[hole->val.imm_pos];
            used_indirection = 0;
        } break;
        case RELOC_RCP_CONST_AT_IMM:
        {
            ptr = (ptrdiff_t)&constpool[imms[hole->val.imm_pos]];
            used_indirection = 1;
        } break;
        case RELOC_RCP_CONSTCELL_AT_IMM:
        {
            int bcell_index = imms[hole->val.imm_pos];
            //printf("bcell_index: %d\n", bcell_index);
            ptr = (ptrdiff_t)&bcells[bcell_index];
            used_indirection = 1;
        } break;
        case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
        {
            int bcell_index = bytecode[imms[hole->val.imm_pos] - 3];
            //printf("bcell_index: %d\n", bcell_index);
            ptr = (ptrdiff_t)&bcells[bcell_index];
            used_indirection = 1;
        } break;
        case RELOC_RODATA:
        {
            // Point to different memory regions to allow efficient x86 relative addressing
            if(hole->is_pc_relative)
                ptr = (ptrdiff_t)ro_near;
            else
                ptr = (ptrdiff_t)ro_low;

            used_indirection = 1;
        } break;
        case RELOC_RCP_PRECOMPILED:
        {
            ptr = (ptrdiff_t)precompiled;
            used_indirection = 1;
        } break;
        case RELOC_RCP_CONST_STR_AT_IMM:
        {
            SEXP symbol = constpool[imms[hole->val.imm_pos]];
            ptr = (ptrdiff_t)CHAR(PRINTNAME(symbol));

            if (TYPEOF(symbol) != SYMSXP) 
                error("The const referenced is not a symbol.");
            
            //ptr = (ptrdiff_t)const_pool_add(immpool, immpool_size, (uintptr_t)CHAR(PRINTNAME(symbol)));
            used_indirection = 0;
            //fprintf(stderr, "%s\n", CHAR(PRINTNAME(fun))) ; // Extract the name of the function
        } break;
        default:
        {
            error("Unsupported relocation kind: %d\n", hole->kind);
            return;
        } break;
    }

    int indirection_correction = used_indirection - hole->indirection_level;

    for (; indirection_correction > 0; --indirection_correction)
    {
        ptr = *(uintptr_t*)ptr;
        fprintf(stderr, "dereferencing pointer\n");
    }
    for (; indirection_correction < 0; ++indirection_correction)
    {
        ptr = (ptrdiff_t)const_pool_add(immpool, immpool_size, (uintptr_t)ptr);
        fprintf(stderr, "creating a pointer\n");
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

    //fprintf(stderr, "0x%zx\n", ptr);
    memcpy(&inst[hole->offset], &ptr, hole->size);
}

void print_byte_array(const unsigned char * arr, size_t len) {
  for (size_t i = 0; i < len; i++)
  {
    fprintf(stderr, "0x%02X, ", arr[i]); // Print each byte in hex format
  }
  fprintf(stderr, "\n");
}

typedef struct {
    uintptr_t start;
    uintptr_t end;
} MemoryRegion;

void* find_free_space_near(void* target_ptr, size_t size) {
    uintptr_t target = (uintptr_t)target_ptr;
    FILE *maps = fopen("/proc/self/maps", "r");
    if (!maps) {
        perror("fopen");
        return NULL;
    }

    MemoryRegion prev = {0, 0};
    ptrdiff_t best_diff = PTRDIFF_MAX;//(ptrdiff_t)-1;
    uintptr_t best_addr = 0;

    char line[256];
    while (fgets(line, sizeof(line), maps)) {
        uintptr_t start, end;
        if (sscanf(line, "%lx-%lx", &start, &end) != 2) continue;

        // Check for gap between previous and current region
        if (prev.end && (start > prev.end)) {
            size_t gap = start - prev.end;
            if (gap >= size) {
                uintptr_t candidate = prev.end;
                ptrdiff_t diff = (candidate > target) ? (candidate - target) : (target - candidate);
                if (diff < best_diff) {
                    best_diff = diff;
                    best_addr = candidate;
                }
            }
        }

        prev.start = start;
        prev.end = end;
    }

    fclose(maps);

    return (void*)best_addr;
}

const Stencil* get_stencil(int opcode, const int * imms, const SEXP* r_constpool)
{
    switch(opcode)
    {
        case MATH1_OP:
        {
            fprintf(stderr, "Using specialized version of MATH1_OP\n");
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
            switch(TYPEOF(r_constpool[imms[0]]))
            {
                case REALSXP:
                    fprintf(stderr, "Using specialized version of LDCONST_OP: REAL\n");
                    return &_RCP_LDCONST_DBL_OP;
                case INTSXP:
                    fprintf(stderr, "Using specialized version of LDCONST_OP: INT\n");
                    return &_RCP_LDCONST_INT_OP;
                case LGLSXP:
                    fprintf(stderr, "Using specialized version of LDCONST_OP: LGL\n");
                    return &_RCP_LDCONST_LGL_OP;
                default:
                    fprintf(stderr, "Using specialized version of LDCONST_OP: SEXP\n");
                    return &_RCP_LDCONST_SEXP_OP;
            }
        } break;

        default:
            return &stencils[opcode];
    }
    return NULL;
}

rcp_exec_ptrs compile_bc(int bytecode[], int bytecode_size, SEXP* r_constpool, int r_constpool_size)
{
    rcp_exec_ptrs res;
    size_t insts_size = _RCP_INIT.body_size;
    size_t imms_capacity = 0;
    size_t imms_size = 0;

    size_t* inst_start = calloc(bytecode_size, sizeof(size_t));
    //size_t* inst_imm_start = calloc(bytecode_size, sizeof(size_t));

    for (int i = 0; i < bytecode_size; ++i)
    {
        const Stencil* stencil = get_stencil(bytecode[i], &bytecode[i+1], r_constpool);
        //fprintf(stderr, "Opcode: %s\n", OPCODES[bytecode[i]]);
        if(stencil->body_size == 0)
        {
            error("Opcode not implemented: %s\n", OPCODES[bytecode[i]]);
        }

        inst_start[i] = insts_size;
        insts_size += stencil->body_size;

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            int indirection_level = 0;

            switch(stencil->holes[j].kind)
            {
                case RELOC_RUNTIME_SYMBOL:
                case RELOC_RODATA:
                case RELOC_RCP_NEXTOP:
                case RELOC_RCP_GOTO_IMM:
                case RELOC_RCP_PRECOMPILED:
                case RELOC_RCP_CONST_AT_IMM:
                case RELOC_RCP_CONSTCELL_AT_IMM:
                case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
                    indirection_level = 1;
                    break;
                case RELOC_RCP_CONST_STR_AT_IMM:
                case RELOC_RCP_RAW_IMM:
                    indirection_level = 0;
                    break;
            }

            if(stencil->holes[j].indirection_level > indirection_level)
            {
                imms_capacity += stencil->holes[j].indirection_level-indirection_level;
            }
        }

        i += imms_cnt[bytecode[i]];
    }

    size_t total_size = insts_size + imms_capacity*sizeof(uintptr_t) + r_constpool_size*sizeof(*r_constpool) + r_constpool_size*sizeof(SEXP) + sizeof(precompiled_functions) + sizeof(rodata);

    void* mem = find_free_space_near(&Rf_ScalarInteger, total_size);


    uint8_t* memory = mmap(mem, total_size, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (memory == MAP_FAILED)
        exit(1);

    res.memory_high = memory;
    res.memory_high_size = total_size;

    SEXP* constpool =      (SEXP*) &memory[0];
    SEXP* bcells =         (SEXP*) &memory[r_constpool_size * sizeof(*r_constpool)];
    SEXP* precompiled =    (SEXP*) &memory[r_constpool_size * sizeof(*r_constpool) + r_constpool_size * sizeof(*bcells)];
    uintptr_t* imms = (uintptr_t*) &memory[r_constpool_size * sizeof(*r_constpool) + r_constpool_size * sizeof(*bcells) + sizeof(precompiled_functions)];
    uint8_t* ro_near =  (uint8_t*) &memory[r_constpool_size * sizeof(*r_constpool) + r_constpool_size * sizeof(*bcells) + sizeof(precompiled_functions) + imms_capacity * sizeof(*imms)];
    uint8_t* executable =          &memory[r_constpool_size * sizeof(*r_constpool) + r_constpool_size * sizeof(*bcells) + sizeof(precompiled_functions) + sizeof(rodata) + imms_capacity * sizeof(*imms)];

    res.eval = (void*)executable;


    uint8_t* ro_low = mmap(mem, sizeof(rodata), PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    memcpy(ro_low, rodata, sizeof(rodata));

    memcpy(ro_near, rodata, sizeof(rodata));

    for (int i = 0; i < r_constpool_size; ++i)
    {
        bcells[i] = R_NilValue;
        //bcells[i].tag = 0;
        //bcells[i].flags = 0;
        //bcells[i].u.sxpval = R_NilValue;
    }

    memcpy(precompiled, precompiled_functions, sizeof(precompiled_functions));
    

    res.memory_low = ro_low;
    res.memory_low_size = sizeof(rodata);

    res.bcells = bcells;
    res.bcells_size = r_constpool_size;

    for(int i = 0; i < r_constpool_size; ++i)
    {
        constpool[i] = r_constpool[i];//duplicate(r_constpool[i]);
        //R_PreserveObject(constpool[i]);
    }

    // start to copy-patch

    size_t executable_pos = 0;
    memcpy(&executable[executable_pos], _RCP_INIT.body, _RCP_INIT.body_size);
    for (size_t j = 0; j < _RCP_INIT.holes_size; ++j)
    {
        patch(&executable[executable_pos], _RCP_INIT.body_size, &_RCP_INIT, &_RCP_INIT.holes[j], NULL, NULL, 0, ro_low, ro_near, constpool, bcells, precompiled, executable, inst_start, bytecode);
    }
    executable_pos +=  _RCP_INIT.body_size;

    for (int i = 0; i < bytecode_size; ++i)
    {
        fprintf(stderr, "Copy-patching opcode: %s\n", OPCODES[bytecode[i]]);

        const Stencil* stencil = get_stencil(bytecode[i], &bytecode[i+1], r_constpool);

        memcpy(&executable[executable_pos], stencil->body, stencil->body_size);

        for (size_t j = 0; j < stencil->holes_size; ++j)
        {
            patch(&executable[executable_pos], stencil->body_size, stencil, &stencil->holes[j], &bytecode[i+1], imms, &imms_size, ro_low, ro_near, constpool, bcells, precompiled, executable, inst_start, bytecode);
        }

        //print_byte_array(&executable[executable_pos], stencils[bytecode[i]].body_size);

        executable_pos += stencil->body_size;

        i += imms_cnt[bytecode[i]];
    }
    free(inst_start);

    return res;
}

SEXP compile_to_bc(SEXP f, SEXP options)
{
    // Ensure the compiler package is loaded
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

    //vecsxp, tag=optimize, val=3

    // Create the function call: compile(f)
    call = Rf_lang3(compile_fun, f, options);
    UNPROTECT(1);
    PROTECT(call);

    // Evaluate the function call in R
    result = Rf_eval(call, R_GlobalEnv);
    UNPROTECT(1);

    return result;
}

void bytecode_info(const int* bytecode, int bytecode_size, const SEXP* consts, int const_size)
{
    printf("Constant pool size: %d\n", const_size);
    printf("Bytecode size: %d\n", bytecode_size);

    int instructions = 0;
    for (int i = 0; i < bytecode_size; ++i)
    {
        fprintf(stderr, "%d:\tOpcode: %d = %s\n", i, bytecode[i], OPCODES[bytecode[i]]);
        for (size_t j = 0; j < imms_cnt[bytecode[i]]; j++)
        {
            fprintf(stderr, "\tIMM: %d\n", bytecode[i+1+j]);
        }
        /*
        if (bytecode[i] == STARTFOR_OP)
        {
            fprintf(stderr, "%d\n", TYPEOF(consts[bytecode[i+1+j]]));
            Rf_PrintValue(consts[bytecode[i+1+j]]);
        }*/
        instructions++;
        i += imms_cnt[bytecode[i]];
    }

    printf("Instructions in bytecode: %d\n", instructions);
}

SEXP cmpfun(SEXP f, SEXP options) {
    prepare();
    SEXP compiled = PROTECT(compile_to_bc(f, options));
    SEXP const_list = BCODE_CONSTS(BODY(compiled));
    SEXP code = PROTECT(R_bcDecode(BCODE_CODE(BODY(compiled))));

    //Rf_PrintValue(code);
    //Rf_PrintValue(*consts);

    SEXP* consts = DATAPTR(const_list);
    int* bytecode = INTEGER(code) + 1;

    //uint32_t bytecode[] = { LDCONST_OP, 0, LDCONST_OP, 1, ADD_OP, 2, RETURN_OP };
    int bytecode_size = LENGTH(code) - 1;

    bytecode_info(bytecode, bytecode_size, consts, LENGTH(const_list));
    rcp_exec_ptrs res = compile_bc(bytecode, bytecode_size, consts, LENGTH(const_list));
    UNPROTECT(1);

    //print_byte_array((uint8_t*)res.eval, res.memory_high_size - ((uint8_t*)res.eval - (uint8_t*)res.memory_high));
    rcp_exec_ptrs* res_ptr = malloc(sizeof(rcp_exec_ptrs));
    memcpy(res_ptr, &res, sizeof(rcp_exec_ptrs));

    SEXP tag = PROTECT(install(RCP_PTRTAG));
    SEXP ptr = R_MakeExternalPtr(res_ptr, tag, R_NilValue);
    UNPROTECT(1);
    
    SET_BODY(compiled, ptr);
    UNPROTECT(1);

    R_RegisterCFinalizerEx(ptr, &R_RcpFree, TRUE);
    
    return compiled;
}
