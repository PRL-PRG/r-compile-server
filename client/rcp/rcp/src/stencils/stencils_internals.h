#pragma once
#define RSH_INLINE

// Keep `Rinlinedfuns.h` on GNU inline semantics, so its functions get no external definition here.
// With C99 semantics `INLINE_FUN` is a bare `inline`, and because `Rinternals.h` also declares each
// of them without `inline`, every stencil translation unit emits its own external copy and they
// collide when the stencils are linked together. `../../../../client/rsh/src/common2c/rsh_utils.h`
// does the same, but it can't help here: every stencil includes this header (and so `Rinternals.h`)
// first.
#ifndef C99_INLINE_SEMANTICS
#define C99_INLINE_SEMANTICS 0
#endif

#define RSH
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#undef USE_RINTERNALS
#undef RSH

typedef R_bcstack_t StackVal;

#define CONST_RUNTIME_VAR(symbol, type) ((type const)(void *const)(&_RCP_CRUNTIME0_##symbol))

extern const void *const _RCP_CRUNTIME0_R_NilValue[];
#define R_NilValue CONST_RUNTIME_VAR(R_NilValue, SEXP)

extern const void *const _RCP_CRUNTIME0_R_UnboundValue[];
#define R_UnboundValue CONST_RUNTIME_VAR(R_UnboundValue, SEXP)

extern const void *const _RCP_CRUNTIME0_R_MissingArg[];
#define R_MissingArg CONST_RUNTIME_VAR(R_MissingArg, SEXP)

extern const void *const _RCP_CRUNTIME0_R_TrueValue[];
#define R_TrueValue CONST_RUNTIME_VAR(R_TrueValue, SEXP)

extern const void *const _RCP_CRUNTIME0_R_FalseValue[];
#define R_FalseValue CONST_RUNTIME_VAR(R_FalseValue, SEXP)

extern const void *const _RCP_CRUNTIME0_R_LogicalNAValue[];
#define R_LogicalNAValue CONST_RUNTIME_VAR(R_LogicalNAValue, SEXP)

extern const void *const _RCP_CRUNTIME0_Rsh_ReflectivelyAccessed[];
#define Rsh_ReflectivelyAccessed CONST_RUNTIME_VAR(Rsh_ReflectivelyAccessed, SEXP)

extern const void *const _RCP_CRUNTIME0_R_DotsSymbol[];
#define R_DotsSymbol CONST_RUNTIME_VAR(R_DotsSymbol, SEXP)

extern const void *const _RCP_CRUNTIME0_R_DimSymbol[];
#define R_DimSymbol CONST_RUNTIME_VAR(R_DimSymbol, SEXP)

extern const void *const _RCP_CRUNTIME0_R_BaseEnv[];
#define R_BaseEnv CONST_RUNTIME_VAR(R_BaseEnv, SEXP)

extern const void *const _RCP_CRUNTIME0_R_BaseNamespace[];
#define R_BaseNamespace CONST_RUNTIME_VAR(R_BaseNamespace, SEXP)

extern const void *const _RCP_CRUNTIME0_R_ClassSymbol[];
#define R_ClassSymbol CONST_RUNTIME_VAR(R_ClassSymbol, SEXP)

#if __GNUC__ >= 14
#define STENCIL_ATTRIBUTES __attribute__((no_callee_saved_registers))
#else
#warning "Compiler does not support no_callee_saved_registers directive. Generated code will be slower."
#define STENCIL_ATTRIBUTES
#endif

#if RCP_TRACE
#define TRACE_PRINT(...) fprintf(stderr, __VA_ARGS__)
#else
#define TRACE_PRINT(...) ((void)0)
#endif

#undef PUSH_VAL
#define PUSH_VAL(n)                           \
	do                                        \
	{                                         \
		stack += (n);                         \
		assert(stack - 1 < R_BCNodeStackTop); \
	} while (0)

#undef POP_VAL
#define POP_VAL(n)    \
	do                \
	{                 \
		stack -= (n); \
	} while (0)

#ifdef PROFILE_STENCILS
// Hard-coded per-stencil timing: every opcode stencil is bracketed with a
// PROFILING_START/PROFILING_END pair (see RCP_OP_TEMPLATE_JUMP) that records its
// call count and rdtsc cycle total into the global stencil_profile_info[] array
// owned by compile.c. This is the original, compile-time profiling and is gated
// behind PROFILE_STENCILS (off by default). Lighter-weight per-instruction
// counting is available at runtime instead via the _RCP_CUSTOM_COUNTER plugins.
struct StencilProfileInfo
{
	size_t call_count;
	size_t total_cycles;
};
extern struct StencilProfileInfo stencil_profile_info[];
#define PROFILING_START(opcode) uint64_t _profiling_start_time = __rdtsc();
#define PROFILING_END(opcode)                               \
	do                                                      \
	{                                                       \
		uint64_t _profiling_end_time = __rdtsc();           \
		stencil_profile_info[opcode##_BCOP].call_count++;   \
		stencil_profile_info[opcode##_BCOP].total_cycles += \
			_profiling_end_time - _profiling_start_time;    \
	} while (0)
#else
#define PROFILING_START(opcode) ((void)0)
#define PROFILING_END(opcode)	((void)0)
#endif

#define RET_T StackVal

// Macros to define stencil functions
#define RCP_STENCIL_FUNCTION(name) __attribute__((noinline)) STENCIL_ATTRIBUTES RET_T name(void)

/* RSH_RCP_REGISTER_STACK and RSH_RCP_REGISTER_LOCALS are defined in
   Rinternals.h so the GNU R fork and the stencils agree on the ABI. */

#define PROLOGUE                                                                 \
	StackVal *restrict stack;                                                       \
	rcpEval_locals *restrict locals;                                             \
	do                                                                           \
	{                                                                            \
		register __typeof__(stack) stack_reg __asm__(RSH_RCP_REGISTER_STACK);    \
		stack = stack_reg;                                                       \
		register __typeof__(locals) locals_reg __asm__(RSH_RCP_REGISTER_LOCALS); \
		locals = locals_reg;                                                     \
	} while (0);

#define EPILOGUE                                                                          \
	do                                                                                    \
	{                                                                                     \
		register __typeof__(stack) stack_reg __asm__(RSH_RCP_REGISTER_STACK) = stack;     \
		asm volatile("" : : "r"(stack_reg));                                              \
		register __typeof__(locals) locals_reg __asm__(RSH_RCP_REGISTER_LOCALS) = locals; \
		asm volatile("" : : "r"(locals_reg));                                             \
	} while (0);

/* PATCHING SYMBOLS */

// Use only for calls, do not take address!
extern STENCIL_ATTRIBUTES RET_T _RCP_EXEC_NEXT(void);
#define NEXT                     \
	do                           \
	{                            \
		EPILOGUE;                \
		return _RCP_EXEC_NEXT(); \
	} while (0)

// The same as _RCP_EXEC_NEXT, when we need to take address (like &_RCP_EXEC_NEXT)
extern const void *const _RCP_NEXT_PTR[];
#define GET_NEXT_PTR() ((RET_T(STENCIL_ATTRIBUTES *)(void))(&_RCP_NEXT_PTR))

extern STENCIL_ATTRIBUTES RET_T _RCP_EXEC_IMM0(void);
extern STENCIL_ATTRIBUTES RET_T _RCP_EXEC_IMM1(void);
extern STENCIL_ATTRIBUTES RET_T _RCP_EXEC_IMM2(void);
extern STENCIL_ATTRIBUTES RET_T _RCP_EXEC_IMM3(void);
// Use only for calls, do not take address!
#define GOTO_IMM(i)                \
	do                             \
	{                              \
		EPILOGUE;                  \
		return _RCP_EXEC_IMM##i(); \
	} while (0)

extern const void *const _RCP_EXEC_PTR_IMM0[];
extern const void *const _RCP_EXEC_PTR_IMM1[];
extern const void *const _RCP_EXEC_PTR_IMM2[];
extern const void *const _RCP_EXEC_PTR_IMM3[];
// The same as _RCP_EXEC_IMM, when we need to take address (like &_RCP_EXEC_IMM0)
#define GET_IMM_PTR(i) ((RET_T(STENCIL_ATTRIBUTES *)(void))(&_RCP_EXEC_PTR_IMM##i))
//__attribute__((musttail))
//[[gnu::musttail]]

#define GET_RHO() locals->rho

extern const void *const _RCP_RAW_IMM0;
extern const void *const _RCP_RAW_IMM1;
extern const void *const _RCP_RAW_IMM2;
extern const void *const _RCP_RAW_IMM3;
#define GET_IMM(index) (int)(int64_t)&_RCP_RAW_IMM##index

extern const void *const _RCP_CONST_AT_IMM0[];
extern const void *const _RCP_CONST_AT_IMM1[];
extern const void *const _RCP_CONST_AT_IMM2[];
extern const void *const _RCP_CONST_AT_IMM3[];
#define GETCONST_IMM(i) (const SEXP const)(&_RCP_CONST_AT_IMM##i)

extern const void *const _RCP_CONST_STR_AT_IMM0[];
extern const void *const _RCP_CONST_STR_AT_IMM1[];
extern const void *const _RCP_CONST_STR_AT_IMM2[];
extern const void *const _RCP_CONST_STR_AT_IMM3[];
#define GETCONST_STR_IMM(i) (const char *const)&_RCP_CONST_STR_AT_IMM##i

extern const void *const _RCP_CONSTCELL_AT_IMM0;
extern const void *const _RCP_CONSTCELL_AT_IMM1;
extern const void *const _RCP_CONSTCELL_AT_IMM2;
extern const void *const _RCP_CONSTCELL_AT_IMM3;
#define GETCONSTCELL_IMM(i) (__builtin_assume_aligned((SEXP *)(&((uint8_t *)locals)[(unsigned)(uint64_t)&_RCP_CONSTCELL_AT_IMM##i]), __alignof__(SEXP *)))

extern const void *const _RCP_CONSTCELL_AT_LABEL_IMM0;
extern const void *const _RCP_CONSTCELL_AT_LABEL_IMM1;
extern const void *const _RCP_CONSTCELL_AT_LABEL_IMM2;
extern const void *const _RCP_CONSTCELL_AT_LABEL_IMM3;
#define GETCONSTCELL_LABEL_IMM(i) (__builtin_assume_aligned((SEXP *)(&((uint8_t *)locals)[(unsigned)(uint64_t)&_RCP_CONSTCELL_AT_LABEL_IMM##i]), __alignof__(SEXP *)))

// Custom data for stencils. The two versions point to identical data,
// but the REL version using more efficient encoding of the pointer,
// and can be used when its guaranteed that the data is within
// 2GB of the stencil code and/or in the lower 2GB.
extern void *const _RCP_CUSTOM_DATA_REL32_0;
extern void *const _RCP_CUSTOM_DATA_REL32_1;
extern void *const _RCP_CUSTOM_DATA_REL32_2;
extern void *const _RCP_CUSTOM_DATA_REL32_3;

extern void *const _RCP_CUSTOM_DATA_ABS64_0[];
extern void *const _RCP_CUSTOM_DATA_ABS64_1[];
extern void *const _RCP_CUSTOM_DATA_ABS64_2[];
extern void *const _RCP_CUSTOM_DATA_ABS64_3[];

#define GETCUSTOM_REL(i) (const void *)&_RCP_CUSTOM_DATA_REL32_##i
#define GETCUSTOM(i)	 (const void *)&_RCP_CUSTOM_DATA_ABS64_##i
#define GETVARIANTS()	 GETCUSTOM(0)

extern void *const _RCP_SMC_SELF[];
#define GETSELFADDR() ((void *)&_RCP_SMC_SELF) // memcpy destination (non-const)

// Self-modifying-code framework holes. A self-modifying variant overwrites its
// own live slot (GETSELFADDR) with a successor variant's pre-patched body
// (GETSMCVARIANT(n), the address of variant n in this site's block) of length
// GETSMCVARIANTSIZE(n) (variant n's exact body length).
extern const void *const _RCP_SMC_VARIANT0;
extern const void *const _RCP_SMC_VARIANT1;
extern const void *const _RCP_SMC_VARIANT2;
extern const void *const _RCP_SMC_VARIANT3;
#define GETSMCVARIANT_(n) ((const void *)&_RCP_SMC_VARIANT##n)
#define GETSMCVARIANT(n)  GETSMCVARIANT_(n) // extra layer so n is macro-expanded before ##

// Body size of variant n (its exact memcpy length)
extern const void *const _RCP_SMC_SIZE_VARIANT0;
extern const void *const _RCP_SMC_SIZE_VARIANT1;
extern const void *const _RCP_SMC_SIZE_VARIANT2;
extern const void *const _RCP_SMC_SIZE_VARIANT3;
#define GETSMCVARIANTSIZE_(n) ((size_t)(int)(int64_t)&_RCP_SMC_SIZE_VARIANT##n)
#define GETSMCVARIANTSIZE(n)  GETSMCVARIANTSIZE_(n)

extern const void *const _RCP_LOOPCNTXT;
#define GET_RCNTXT_INDEX() ((unsigned)(uint64_t)&_RCP_LOOPCNTXT - 1)
#define GET_LOCAL_RCNTXT() locals->rcntxts[GET_RCNTXT_INDEX()]

extern const void *const _RCP_EXECUTABLE[];
#define GETEXECUTABLE() (const void *const)&_RCP_EXECUTABLE

#define DIRECT_TAILJMP(ptr)                                                \
	{                                                                      \
		STENCIL_ATTRIBUTES RET_T (*call)(void) = (const void *const)(ptr); \
		EPILOGUE;                                                          \
		return call();                                                     \
	}

#define GOTO_VAL(i) DIRECT_TAILJMP(((uint8_t *)GETEXECUTABLE()) + i)

// Self-modifying-code copy primitive (declared extern in stencils.c and resolved
// through RELOC_RUNTIME_SYMBOL_GOT -- it is never extracted as a not-inlined stencil).
//
// Overwrites `size` bytes of live JIT code at `dst` (the calling variant's own
// slot) with the pre-patched successor variant at `src`, then jumps to `jmp`.
//
// It must run entirely OUTSIDE the slot it overwrites and never return into it
// (the caller's code has just been replaced). The caller tail-jumps here
// (`return rcp_smc_copy(...)`) and this function tail-jumps to `jmp`, so the JIT
// chain keeps its single stack frame and `jmp` is entered exactly as a normal
// stencil. stack/locals should not be touched.
extern STENCIL_ATTRIBUTES RET_T rcp_smc_copy(void *dst, const void *src, void *jmp, size_t size);

#include "x86intrin.h"
#include <assert.h>
static inline __attribute__((always_inline)) int eq_val(const R_bcstack_t a, const R_bcstack_t b)
{
	static_assert(sizeof(R_bcstack_t) == 16);
	__m128i x = _mm_loadu_si128((const __m128i *)&a);
	__m128i y = _mm_loadu_si128((const __m128i *)&b);
	return _mm_movemask_epi8(_mm_cmpeq_epi8(x, y)) == 0xFFFF;
}
