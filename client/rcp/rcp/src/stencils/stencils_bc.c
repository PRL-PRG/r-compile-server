#include "stencils_internals.h"

#include <opcodes.h>

#include "../rcp_bc_info.h"
// Loop contexts are driven from stencils-runtime.c -- see the long comment
// there for why the sigsetjmp cannot live in a helper that returns.
#include "../rcp_loopcntxt.h"

// Macros to define stencil functions
#define RCP_OP_EX(op, ex) RCP_STENCIL_FUNCTION(_RCP_##op##_OP_##ex)
#define RCP_STENCIL(op)	  RCP_STENCIL_FUNCTION(_RCP_##op##_OP)

// Macros to help generate boilerplate for stencil functions
#define RCP_OP_TEMPLATE_JUMP(name, body, continuation)                                 \
	RCP_STENCIL(name)                                                                  \
	{                                                                                  \
		PROLOGUE;                                                                      \
		TRACE_PRINT(__FUNCTION__);                                                     \
		TRACE_PRINT("\tSTART\n");                                                      \
		PROFILING_START(name);                                                         \
		PUSH_VAL(RCP_BC_STACK_EFFECT_##name > 0 ? RCP_BC_STACK_EFFECT_##name : 0);     \
		body                                                                           \
			POP_VAL(RCP_BC_STACK_EFFECT_##name < 0 ? -RCP_BC_STACK_EFFECT_##name : 0); \
		TRACE_PRINT(__FUNCTION__);                                                     \
		TRACE_PRINT("\tDONE\n");                                                       \
		PROFILING_END(name);                                                           \
		continuation                                                                   \
			NEXT;                                                                      \
	}

#define RCP_OP_TEMPLATE_CONTINUE(name, body) RCP_OP_TEMPLATE_JUMP(name, body, )

#define EXPAND(x)						 x
#define GET_MACRO(_1, _2, _3, name, ...) name
#define RCP_OP(...)						 EXPAND(GET_MACRO(__VA_ARGS__, RCP_OP_TEMPLATE_JUMP, RCP_OP_TEMPLATE_CONTINUE)(__VA_ARGS__))

RCP_OP(RETURN,
	   Value ret = Rsh_Return(stack);
	   ,
	   return ret;)

RCP_OP(GOTO,
	   ,
	   GOTO_IMM(0);)

RCP_OP(BRIFNOT,
	   Rboolean condition = Rsh_BrIfNot(stack, GETCONST_IMM(0));
	   ,
	   if (condition)
		   GOTO_IMM(1);)

#define BRIFNOT_VARIANT_INERT 2
#define BRIFNOT_VARIANT_CHECK 1

RCP_STENCIL_FUNCTION(_RCP_SMC_BRIFNOT_RECCONST_2) // ambiguous / inert
{
	PROLOGUE;
	Rboolean condition = Rsh_BrIfNot(stack, GETCONST_IMM(0));
	if (condition)
		GOTO_IMM(1);
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_SMC_BRIFNOT_RECCONST_1) // monomorphic
{
	PROLOGUE;
	char condition = Rsh_BrIfNot(stack, GETCONST_IMM(0));
	char *recording = (char *)GETCUSTOM_REL(0);
	if (condition != *recording)
	{
		char *result = (char *)GETCUSTOM_REL(1);
		*result = 0;
		POP_VAL(1);
		if (condition)
		{
			EPILOGUE;
			return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(BRIFNOT_VARIANT_INERT), GET_IMM_PTR(1), GETSMCVARIANTSIZE(BRIFNOT_VARIANT_INERT));
		}
		EPILOGUE;
		return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(BRIFNOT_VARIANT_INERT), GET_NEXT_PTR(), GETSMCVARIANTSIZE(BRIFNOT_VARIANT_INERT));
	}
	if (condition)
		GOTO_IMM(1);
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_SMC_BRIFNOT_RECCONST_0) // entry: record
{
	PROLOGUE;
	char condition = Rsh_BrIfNot(stack, GETCONST_IMM(0));
	char *recording = (char *)GETCUSTOM_REL(0);
	*recording = condition;
	POP_VAL(1);
	if (condition)
	{
		EPILOGUE;
		return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(BRIFNOT_VARIANT_CHECK), GET_IMM_PTR(1), GETSMCVARIANTSIZE(BRIFNOT_VARIANT_CHECK));
	}
	EPILOGUE;
	return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(BRIFNOT_VARIANT_CHECK), GET_NEXT_PTR(), GETSMCVARIANTSIZE(BRIFNOT_VARIANT_CHECK));
}

RCP_OP(POP,
	   Rsh_Pop(stack);)

RCP_OP(DUP,
	   Rsh_Dup(stack);)

RCP_OP(STARTLOOPCNTXT,
	   // Runs the whole loop inside Rsh_RunLoopCntxt's frame; it comes back
	   // only once the loop is over (via ENDLOOPCNTXT) or the function
	   // returned from inside the loop.
	   RcpLoopExit loop_exit = Rsh_RunLoopCntxt(stack, locals, &GET_LOCAL_RCNTXT(), GET_RHO(), (void *)GET_NEXT_PTR(), (void *)GET_IMM_PTR(1));
	   , if (loop_exit.resume == NULL) {
		   return Rsh_LoopCntxtRetVal(); // a RETURN inside the loop: keep unwinding
	   } stack = loop_exit.stack;
	   DIRECT_TAILJMP(loop_exit.resume);)

RCP_OP(ENDLOOPCNTXT,
	   Value exit_res = Rsh_EndLoopCntxtJmp(stack, &GET_LOCAL_RCNTXT(), (void *)GET_NEXT_PTR());
	   ,
	   // Unwind the tail-jump chain back to this loop's Rsh_RunLoopCntxt frame,
	   // which resumes at the GET_NEXT_PTR() handed over above.
	   return exit_res;)

#ifdef STEPFOR_SPECIALIZE
extern Rboolean RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho);

// Each element/ISQ sequence type has two adjacent variants: i0 is the base
// (element types: direct data pointer; ISQ: increasing) and i1 = i0 + 1 the
// sub-variant (ALTREP element method / decreasing). STARTFOR picks between them
// with the runtime 0/1 sub-axis; Rsh_DoStepFor takes the same 0/1 as `spec`.
// Indices are contiguous from 0; the axis-less LISTSXP variant (16) has no
// sub-variant and is handled outside the table. There is no generic catch-all
// variant: Rsh_StartFor rejects any type not covered here before STEPFOR runs.
//
// EXPRSXP and VECSXP share the VECSXP row: Rsh_DoStepFor's case for the two is
// identical and ignores the type, so the emitted stencils are byte-for-byte the
// same. The base table below just points EXPRSXP at the same index.
#define X_STEPFOR_TYPES \
	X(ISQSXP, 0, 1)     \
	X(INTSXP, 2, 3)     \
	X(REALSXP, 4, 5)    \
	X(LGLSXP, 6, 7)     \
	X(CPLXSXP, 8, 9)    \
	X(STRSXP, 10, 11)   \
	X(RAWSXP, 12, 13)   \
	X(VECSXP, 14, 15)

// stepfor_variant_count is emitted by the extractor, but this file is compiled
// before that header exists, so derive the bound here: two per table row plus
// the LISTSXP (16) variant.
#define X(T, i0, i1) +2
enum
{
	STEPFOR_VARIANT_COUNT = 1 X_STEPFOR_TYPES
};
#undef X

// Must match the SmcSiteHeader-compatible layout in compile.c: the {dst,
// variants[]} prefix, then STEPFOR's selection cache and the variant blob.
typedef struct
{
	uint8_t *ptr;  // address of this variant's pre-patched body in data[]
	uint32_t size; // its exact body length (memcpy length)
} SmcVariant;
typedef struct
{
	uint8_t *dst;
	SmcVariant variants[STEPFOR_VARIANT_COUNT];
	int cached_type;
	uint8_t data[];
} StepFor_specialized;
#endif

// type -> base variant index. Element/ISQ types come from the table; LISTSXP
// and NILSXP (an empty `for (x in NULL)`) share the axis-less list variant.
// Unhandled types default to the 0xFF sentinel: Rsh_StartFor rejects every such
// type before STEPFOR runs, so this is only a debug backstop (STARTFOR asserts
// the resolved index is in range). The runtime sub-offset (ALTREP-ness / ISQ
// direction, both 0/1) is added on top. Sized to span the 5-bit SEXPTYPE range
// so any type indexes in bounds.
#ifdef STEPFOR_SPECIALIZE
static const uint8_t stepfor_variant_base[32] = {
	[0 ... 31] = 0xFF,
#define X(T, i0, i1) [T] = (i0),
	X_STEPFOR_TYPES
#undef X
	[EXPRSXP] = 14, // shares the VECSXP variant (identical stepper)
	[LISTSXP] = 16,
	[NILSXP] = 16,
};
#endif

RCP_OP(STARTFOR, Rsh_StartFor(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONSTCELL_IMM(1), GET_RHO());

#ifdef STEPFOR_SPECIALIZE
	   StepFor_specialized *stepfor_mem = (StepFor_specialized *)GETVARIANTS();

	   RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2))); Value *seq = GET_VAL(-4);

	   // Base variant from the type table, plus the runtime sub-axis resolved
	   // once here so STEPFOR stays branch-free: ISQ direction, else ALTREP-ness
	   // (0 for LISTSXP/NULL, so those fold into the table's base with no check).
	   int i = stepfor_variant_base[info->type] +
			   (info->type == ISQSXP ? (VAL_ISQ(*seq).n1 > VAL_ISQ(*seq).n2)
									  : ALTREP(VAL_SXP(*seq)));
	   assert(i < STEPFOR_VARIANT_COUNT); // else an unsupported type (0xFF base)
	   info->variant = i;

	   // Copy the specialized StepFor code if it is not already cached
	   if (UNLIKELY(stepfor_mem->cached_type != i)) {
    memcpy(stepfor_mem->dst, stepfor_mem->variants[i].ptr, stepfor_mem->variants[i].size);
    stepfor_mem->cached_type = i; }
#endif
	   ,
	   GOTO_IMM(2);)

#ifdef STEPFOR_SPECIALIZE

// One specialized STEPFOR per variant. The guard catches a recursive call that
// installed a variant for a different loop into this shared slot: STARTFOR set
// info->variant to what the current loop needs, so a mismatch means the live
// code is stale and we fall back to the runtime-dispatching stepper.
#define STEPFOR_SPECIALIZED_FN(a, b, spec)                                  \
	static INLINE NODISCARD Rboolean Rsh_StepFor_Specialized_##a(           \
		Value *stack, BCell *cell, SEXP rho)                                \
	{                                                                       \
		RshLoopInfo *__info__ = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2))); \
		if (UNLIKELY(__info__->variant != (a)))                             \
			return RCP_STEPFOR_Fallback(stack, cell, rho);                  \
		return Rsh_DoStepFor(GET_VAL(-4), __info__, GET_VAL(-1), cell, rho, \
							 (b), (spec));                                  \
	}
#define X(T, i0, i1)                 \
	STEPFOR_SPECIALIZED_FN(i0, T, 0) \
	STEPFOR_SPECIALIZED_FN(i1, T, 1)
X_STEPFOR_TYPES
#undef X
STEPFOR_SPECIALIZED_FN(16, LISTSXP, -1)

#define STEPFOR_SPECIALIZED_OP(a)                                                     \
	RCP_OP_EX(STEPFOR, a)                                                             \
	{                                                                                 \
		PROLOGUE;                                                                     \
		if (Rsh_StepFor_Specialized_##a(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO())) \
			GOTO_IMM(0);                                                              \
		else                                                                          \
			NEXT;                                                                     \
	}
#define X(T, i0, i1)           \
	STEPFOR_SPECIALIZED_OP(i0) \
	STEPFOR_SPECIALIZED_OP(i1)
X_STEPFOR_TYPES
#undef X
STEPFOR_SPECIALIZED_OP(16)

#else

RCP_OP(STEPFOR,
	   Rboolean condition = Rsh_StepFor(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO());
	   ,
	   if (condition)
		   GOTO_IMM(0);)

#endif

RCP_OP(ENDFOR,
	   Rsh_EndFor(stack, GET_RHO());)

RCP_OP(INVISIBLE,
	   Rsh_Invisible(stack);)

// Generic version
// RCP_OP(LDCONST) {
//  PUSH_VAL(1);
//  R_Visible = TRUE;
//  SET_VAL(stack, GETCONST_IMM(0));
//  NEXT;
//}

// Specialized versions
RCP_OP_EX(LDCONST, INT)
{
	PROLOGUE;
	PUSH_VAL(1);
	Rsh_LdConstInt(stack, GETCONST_IMM(0));
	NEXT;
}
RCP_OP_EX(LDCONST, DBL)
{
	PROLOGUE;
	PUSH_VAL(1);
	Rsh_LdConstDbl(stack, GETCONST_IMM(0));
	NEXT;
}
RCP_OP_EX(LDCONST, LGL)
{
	PROLOGUE;
	PUSH_VAL(1);
	Rsh_LdConstLgl(stack, GETCONST_IMM(0));
	NEXT;
}
RCP_OP_EX(LDCONST, SEXP)
{
	PROLOGUE;
	PUSH_VAL(1);
	Rsh_LdConst(stack, GETCONST_IMM(0));
	NEXT;
}

RCP_OP(LDNULL,
	   Rsh_LdNull(stack);)

RCP_OP(LDTRUE,
	   Rsh_LdTrue(stack);)

RCP_OP(LDFALSE,
	   Rsh_LdFalse(stack);)

RCP_OP(GETVAR,
	   Rsh_GetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(DDVAL,
	   Rsh_DdVal(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(SETVAR,
	   Rsh_SetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(GETFUN,
	   Rsh_GetFun(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(GETBUILTIN,
	   Rsh_GetBuiltin(stack, GETCONST_IMM(0));)

RCP_OP(GETINTLBUILTIN,
	   Rsh_GetIntlBuiltin(stack, GETCONST_IMM(0));)

RCP_OP(CHECKFUN,
	   Rsh_CheckFun(stack);)

#ifdef MAKEPROM_SPECIALIZE
RCP_OP_EX(MAKEPROM, 0_DEFAULT)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	Rsh_do_makeprom(stack, GETCONST_IMM(0), GET_RHO(), -1);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	NEXT;
}
RCP_OP_EX(MAKEPROM, 1_BCODESXP)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	Rsh_do_makeprom(stack, GETCONST_IMM(0), GET_RHO(), BCODESXP);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	NEXT;
}
RCP_OP_EX(MAKEPROM, 2_EXTPTRSXP)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	Rsh_do_makeprom(stack, GETCONST_IMM(0), GET_RHO(), EXTPTRSXP);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	NEXT;
}
#else
RCP_OP(MAKEPROM,
	   Rcp_MakeProm(stack, GETCONST_IMM(0), GET_RHO(), TYPEOF(GETCONST_IMM(0)));)
#endif

RCP_OP(DOMISSING,
	   Rsh_DoMissing(stack);)

RCP_OP(SETTAG,
	   Rsh_SetTag(stack, GETCONST_IMM(0));)

RCP_OP(DODOTS,
	   Rsh_DoDots(stack, GET_RHO());)

RCP_OP(PUSHARG,
	   Rsh_PushArg(stack);)

RCP_OP(PUSHCONSTARG,
	   Rsh_PushConstArg(stack, GETCONST_IMM(0));)

RCP_OP(PUSHNULLARG,
	   Rsh_PushNullArg(stack);)

RCP_OP(PUSHTRUEARG,
	   Rsh_PushTrueArg(stack);)

RCP_OP(PUSHFALSEARG,
	   Rsh_PushFalseArg(stack);)

RCP_OP(CALL,
	   Rsh_Call(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(CALLBUILTIN,
	   Rsh_CallBuiltin(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(CALLSPECIAL,
	   Rsh_CallSpecial(stack, GETCONST_IMM(0), GET_RHO());)

#ifdef MAKECLOSURE_SPECIALIZE
RCP_OP_EX(MAKECLOSURE, 0_NO_SRCREF)
{
    PROLOGUE;
    PUSH_VAL(1);
    TRACE_PRINT(__FUNCTION__);
    TRACE_PRINT("\tSTART\n");
    Rsh_do_MakeClosure(stack, GETCONST_IMM(0), NULL, NULL, GET_RHO(), FALSE);
    TRACE_PRINT(__FUNCTION__);
    TRACE_PRINT("\tDONE\n");
    NEXT;
}
RCP_OP_EX(MAKECLOSURE, 1_SRCREF)
{
    PROLOGUE;
    PUSH_VAL(1);
    TRACE_PRINT(__FUNCTION__);
    TRACE_PRINT("\tSTART\n");
    Rsh_do_MakeClosure(stack, GETCONST_IMM(0), NULL, NULL, GET_RHO(), TRUE);
    TRACE_PRINT(__FUNCTION__);
    TRACE_PRINT("\tDONE\n");
    NEXT;
}
#else
RCP_OP(MAKECLOSURE,
	   // We have to provide placeholder NULLs to remain compatible with BC2C
	   Rsh_MakeClosure(stack, GETCONST_IMM(0), NULL, NULL, GET_RHO());)
#endif

RCP_OP(UMINUS,
	   Rsh_UMinus(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(UPLUS,
	   Rsh_UPlus(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(ADD,
	   Rsh_Add(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SUB,
	   Rsh_Sub(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(MUL,
	   Rsh_Mul(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(DIV,
	   Rsh_Div(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(EXPT,
	   Rsh_Expt(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SQRT,
	   Rsh_Sqrt(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(EXP,
	   Rsh_Exp(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(EQ,
	   Rsh_Eq(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(NE,
	   Rsh_Ne(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(LT,
	   Rsh_Lt(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(LE,
	   Rsh_Le(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(GE,
	   Rsh_Ge(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(GT,
	   Rsh_Gt(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(AND,
	   Rsh_And(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(OR,
	   Rsh_Or(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(NOT,
	   Rsh_Not(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(DOTSERR,
	   Rsh_DotsErr(stack);)

RCP_OP(STARTASSIGN,
	   Rsh_StartAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(ENDASSIGN,
	   Rsh_EndAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(STARTSUBSET, Rboolean condition = Rsh_StartSubset(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(3);
    GOTO_IMM(1); })

RCP_OP(DFLTSUBSET,
	   Rsh_DfltSubset(stack, GET_RHO());)

RCP_OP(STARTSUBASSIGN, Rboolean condition = Rsh_StartSubassign(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(4);
    GOTO_IMM(1); })

RCP_OP(DFLTSUBASSIGN,
	   Rsh_DfltSubassign(stack, GET_RHO());)

RCP_OP(STARTSUBSET2, Rboolean condition = Rsh_StartSubset2(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(3);
    GOTO_IMM(1); })

RCP_OP(DFLTSUBSET2,
	   Rsh_DfltSubset2(stack, GET_RHO());)

RCP_OP(STARTSUBASSIGN2, Rboolean condition = Rsh_StartSubassign2(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(4);
    GOTO_IMM(1); })

RCP_OP(DFLTSUBASSIGN2,
	   Rsh_DfltSubassign2(stack, GET_RHO());)

RCP_OP(DOLLAR,
	   Rsh_Dollar(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());)

RCP_OP(DOLLARGETS,
	   Rsh_DollarGets(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());)

RCP_OP(ISNULL,
	   Rsh_IsNull(stack);)

RCP_OP(ISLOGICAL,
	   Rsh_IsLogical(stack);)

RCP_OP(ISINTEGER,
	   Rsh_IsInteger(stack);)

RCP_OP(ISDOUBLE,
	   Rsh_IsDouble(stack);)

RCP_OP(ISCOMPLEX,
	   Rsh_IsComplex(stack);)

RCP_OP(ISCHARACTER,
	   Rsh_IsCharacter(stack);)

RCP_OP(ISSYMBOL,
	   Rsh_IsSymbol(stack);)

RCP_OP(ISOBJECT,
	   Rsh_IsObject(stack);)

RCP_OP(ISNUMERIC,
	   Rsh_IsNumeric(stack);)

RCP_OP(VECSUBSET,
	   Rsh_VecSubset(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(MATSUBSET,
	   Rsh_MatSubset(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(VECSUBASSIGN,
	   Rsh_VecSubassign(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(MATSUBASSIGN,
	   Rsh_MatSubassign(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(AND1ST,
	   Rboolean condition = Rsh_And1st(stack, GETCONST_IMM(0));
	   ,
	   if (condition)
		   GOTO_IMM(1);)

RCP_OP(AND2ND,
	   Rsh_And2nd(stack, GETCONST_IMM(0));)

RCP_OP(OR1ST,
	   Rboolean condition = Rsh_Or1st(stack, GETCONST_IMM(0));
	   ,
	   if (condition)
		   GOTO_IMM(1);)

RCP_OP(OR2ND,
	   Rsh_Or2nd(stack, GETCONST_IMM(0));)

RCP_OP(GETVAR_MISSOK,
	   Rsh_GetVarMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(DDVAL_MISSOK,
	   Rsh_DdValMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());)

RCP_OP(VISIBLE,
	   Rsh_Visible(stack);)

RCP_OP(SETVAR2,
	   Rsh_SetVar2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(STARTASSIGN2,
	   Rsh_StartAssign2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(ENDASSIGN2,
	   Rsh_EndAssign2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SETTER_CALL,
	   Rsh_SetterCall(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());)

RCP_OP(GETTER_CALL,
	   Rsh_GetterCall(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SWAP,
	   Rsh_SpecialSwap(stack);)

RCP_OP(DUP2ND,
	   Rsh_Dup2nd(stack);)

#ifndef SWITCH_SPECIALIZE
RCP_OP(SWITCH,
	   int dest = Rsh_Switch(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONST_IMM(2), GETCONST_IMM(3));
	   ,
	   GOTO_VAL(dest);)
#else
RCP_OP_EX(SWITCH, 000)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	SEXP call = GETCONST_IMM(0);
	SEXP names = GETCONST_IMM(1);
	SEXP coffsets = GETCONST_IMM(2);
	SEXP ioffsets = GETCONST_IMM(3);
	assert(names != R_NilValue);
	assert(coffsets != R_NilValue);
	assert(ioffsets != R_NilValue);

	Rboolean is_names_null = FALSE;
	R_xlen_t names_length = XLENGTH_0(names);
	ASSUME(names_length != 1);
	R_xlen_t ioffsets_length = XLENGTH_0(ioffsets);
	ASSUME(ioffsets_length != 1);

	int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
							 is_names_null, TYPEOF(names) == STRSXP, names_length,
							 TYPEOF(ioffsets) == INTSXP, ioffsets_length,
							 TYPEOF(coffsets) == INTSXP, XLENGTH_0(coffsets) == XLENGTH_0(names));

	POP_VAL(-RCP_BC_STACK_EFFECT_SWITCH);
	GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 010)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	SEXP call = GETCONST_IMM(0);
	SEXP names = GETCONST_IMM(1);
	SEXP coffsets = GETCONST_IMM(2);
	SEXP ioffsets = GETCONST_IMM(3);
	assert(names != R_NilValue);
	assert(coffsets != R_NilValue);
	assert(ioffsets != R_NilValue);

	Rboolean is_names_null = FALSE;
	R_xlen_t names_length = 1;
	R_xlen_t ioffsets_length = XLENGTH_0(ioffsets);
	ASSUME(ioffsets_length != 1);
	assert(ioffsets_length <= R_SHORT_LEN_MAX);

	int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
							 is_names_null, TYPEOF(names) == STRSXP, names_length,
							 TYPEOF(ioffsets) == INTSXP, ioffsets_length,
							 TYPEOF(coffsets) == INTSXP, XLENGTH_0(coffsets) == XLENGTH_0(names));

	POP_VAL(-RCP_BC_STACK_EFFECT_SWITCH);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 100)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	SEXP call = GETCONST_IMM(0);
	SEXP names = GETCONST_IMM(1);
	SEXP coffsets = GETCONST_IMM(2);
	SEXP ioffsets = GETCONST_IMM(3);
	assert(names != R_NilValue);
	assert(coffsets != R_NilValue);
	assert(ioffsets != R_NilValue);

	Rboolean is_names_null = TRUE;
	R_xlen_t names_length = 0;
	R_xlen_t ioffsets_length = XLENGTH_0(ioffsets);
	ASSUME(ioffsets_length != 1);
	assert(ioffsets_length <= R_SHORT_LEN_MAX);

	int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
							 is_names_null, TYPEOF(names) == STRSXP, names_length,
							 TYPEOF(ioffsets) == INTSXP, ioffsets_length,
							 TYPEOF(coffsets) == INTSXP, XLENGTH_0(coffsets) == XLENGTH_0(names));

	POP_VAL(-RCP_BC_STACK_EFFECT_SWITCH);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 101)
{
	PROLOGUE;
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tSTART\n");
	SEXP call = GETCONST_IMM(0);
	SEXP names = GETCONST_IMM(1);
	SEXP coffsets = GETCONST_IMM(2);
	SEXP ioffsets = GETCONST_IMM(3);
	assert(names != R_NilValue);
	assert(coffsets != R_NilValue);
	assert(ioffsets != R_NilValue);

	Rboolean is_names_null = TRUE;
	R_xlen_t names_length = 0;
	R_xlen_t ioffsets_length = 1;

	int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
							 is_names_null, TYPEOF(names) == STRSXP, names_length,
							 TYPEOF(ioffsets) == INTSXP, ioffsets_length,
							 TYPEOF(coffsets) == INTSXP, XLENGTH_0(coffsets) == XLENGTH_0(names));

	POP_VAL(-RCP_BC_STACK_EFFECT_SWITCH);
	TRACE_PRINT(__FUNCTION__);
	TRACE_PRINT("\tDONE\n");
	GOTO_VAL(dest);
}
#endif

RCP_OP(RETURNJMP,
	   ,
	   PUSH_VAL(1); // to hold return value
	   Rsh_ReturnJmp(stack, GET_RHO());)

RCP_OP(STARTSUBSET_N,
	   Rboolean condition = Rsh_StartSubsetN(stack, GETCONST_IMM(0), GET_RHO());
	   ,
	   if (__builtin_expect(condition, FALSE))
		   GOTO_IMM(1);)

RCP_OP(STARTSUBASSIGN_N, Rboolean condition = Rsh_StartSubassignN(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(1);
    GOTO_IMM(1); })

RCP_OP(VECSUBSET2,
	   Rsh_VecSubset2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(MATSUBSET2,
	   Rsh_MatSubset2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(VECSUBASSIGN2,
	   Rsh_VecSubassign2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(MATSUBASSIGN2,
	   Rsh_MatSubassign2(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(STARTSUBSET2_N,
	   Rboolean condition = Rsh_StartSubset2N(stack, GETCONST_IMM(0), GET_RHO());
	   ,
	   if (__builtin_expect(condition, FALSE))
		   GOTO_IMM(1);)

RCP_OP(STARTSUBASSIGN2_N, Rboolean condition = Rsh_StartSubassign2N(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) {
    POP_VAL(1);
    GOTO_IMM(1); })

RCP_OP(SUBSET_N,
	   Rsh_SubsetN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
	   POP_VAL(GET_IMM(1));)

RCP_OP(SUBSET2_N,
	   Rsh_Subset2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
	   POP_VAL(GET_IMM(1));)

RCP_OP(SUBASSIGN_N,
	   Rsh_SubassignN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
	   POP_VAL(GET_IMM(1));)

RCP_OP(SUBASSIGN2_N,
	   Rsh_Subassign2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
	   POP_VAL(GET_IMM(1));)

RCP_OP(LOG,
	   Rsh_Log(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(LOGBASE,
	   Rsh_LogBase(stack, GETCONST_IMM(0), GET_RHO());)

// MATH1 specializations
#define X(a, b, c)                                       \
	RCP_OP_EX(MATH1, b)                                  \
	{                                                    \
		PROLOGUE;                                        \
		Rsh_Math1(stack, GETCONST_IMM(0), b, GET_RHO()); \
		NEXT;                                            \
	}

X_MATH1_EXT_OPS

#undef X

// DOTCALL: .Call(pkg:::C_fun, arg1, ..., argN) with NativeSymbolInfo
//
// GET_IMM(1) encodes nargs + 1 (includes the op slot), so nargs = GET_IMM(1) - 1.
//
// Stack layout when DOTCALL executes:
//
//   stack →  (top)
//     argN     ← last argument
//     ...
//     arg1     ← first argument
//     op       ← the NativeSymbolInfo (.Call target)
//
// Rsh_DotCall calls the C function and writes the result into the op slot,
// but does not adjust the stack pointer. POP_VAL(nargs) pops the argument
// slots so that stack[-1] points at the op slot where the result now lives.
RCP_OP(DOTCALL,
	   Rsh_DotCall(stack, GET_IMM(1) - 1, GETCONST_IMM(0), GET_RHO());
	   POP_VAL(GET_IMM(1) - 1);)

RCP_OP(COLON,
	   Rsh_Colon(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SEQALONG,
	   Rsh_SeqAlong(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(SEQLEN,
	   Rsh_SeqLen(stack, GETCONST_IMM(0), GET_RHO());)

RCP_OP(BASEGUARD, PUSH_VAL(1); Rboolean condition = Rsh_BaseGuard(stack, GETCONST_IMM(0), GET_RHO());, if (__builtin_expect(condition, FALSE)) { GOTO_IMM(1); } else {
    POP_VAL(1);
    NEXT; })

RCP_OP(INCLNKSTK,
	   Rsh_IncLnkStk(stack);)

RCP_OP(DECLNKSTK,
	   Rsh_DecLnkStk(stack);)
