#include "stencils_internals.h"
#include <opcodes_internals.h>

enum
{
	RSH_RECORDING_NILSXP = 0,
	RSH_RECORDING_SYMSXP = 1,
	RSH_RECORDING_LISTSXP = 2,
	RSH_RECORDING_CLOSXP = 3,
	RSH_RECORDING_ENVSXP = 4,
	RSH_RECORDING_PROMSXP = 5,
	RSH_RECORDING_LANGSXP = 6,
	RSH_RECORDING_SPECIALSXP = 7,
	RSH_RECORDING_BUILTINSXP = 8,
	RSH_RECORDING_CHARSXP = 9,
	RSH_RECORDING_LGLSXP = 10,
	RSH_RECORDING_LGLSXP_SIMPLE_SCALAR = 11,
	RSH_RECORDING_LGLSXP_SIMPLE_VECTOR = 12,
	RSH_RECORDING_INTSXP = 13,
	RSH_RECORDING_REALSXP = 14,
	RSH_RECORDING_CPLXSXP = 15,
	RSH_RECORDING_STRSXP = 16,
	RSH_RECORDING_DOTSXP = 17,
	RSH_RECORDING_ANYSXP = 18,
	RSH_RECORDING_VECSXP = 19,
	RSH_RECORDING_EXPRSXP = 20,
	RSH_RECORDING_BCODESXP = 21,
	RSH_RECORDING_EXTPTRSXP = 22,
	RSH_RECORDING_WEAKREFSXP = 23,
	RSH_RECORDING_RAWSXP = 24,
	RSH_RECORDING_OBJSXP = 25,
	RSH_RECORDING_INTSXP_SIMPLE_SCALAR = 26,
	RSH_RECORDING_INTSXP_SIMPLE_VECTOR = 27,
	RSH_RECORDING_REALSXP_SIMPLE_SCALAR = 28,
	RSH_RECORDING_REALSXP_SIMPLE_VECTOR = 29,
	RSH_RECORDING_STRSXP_SIMPLE_SCALAR = 30,
	RSH_RECORDING_STRSXP_SIMPLE_VECTOR = 31,
};

RCP_STENCIL_FUNCTION(_RCP_CUSTOM_RECORDING_BITMAP)
{
	PROLOGUE;
	unsigned *recording_types = (unsigned *)GETCUSTOM_REL(0);
	char type;
	StackVal val = *GET_VAL(-1);
	if (VAL_IS_SXP(val))
	{
		SEXP sexp = VAL_SXP(val);

		switch (TYPEOF(sexp))
		{
			case LGLSXP:
			case INTSXP:
			case REALSXP:
			case STRSXP:
			{
				if (ATTRIB(sexp) == R_NilValue && !ALTREP(sexp))
				{
					switch (TYPEOF(sexp))
					{
						case LGLSXP:
							type = RSH_RECORDING_LGLSXP_SIMPLE_VECTOR;
							break;
						case INTSXP:
							type = RSH_RECORDING_INTSXP_SIMPLE_VECTOR;
							break;
						case REALSXP:
							type = RSH_RECORDING_REALSXP_SIMPLE_VECTOR;
							break;
						case STRSXP:
							type = RSH_RECORDING_STRSXP_SIMPLE_VECTOR;
							break;
						default:
							UNREACHABLE();
					}
					assert(sexp->sxpinfo.scalar == 0 || sexp->sxpinfo.scalar == 1);
					type -= sexp->sxpinfo.scalar;
					break;
				}
			}
			default:
			{
				ASSUME(TYPEOF(sexp) < 26);
				type = TYPEOF(sexp);
			}
		}
	}
	else
	{
		switch (val.tag)
		{
			case LGLSXP:
				type = RSH_RECORDING_LGLSXP_SIMPLE_SCALAR;
				break;
			case INTSXP:
				type = RSH_RECORDING_INTSXP_SIMPLE_SCALAR;
				break;
			case REALSXP:
				type = RSH_RECORDING_REALSXP_SIMPLE_SCALAR;
				break;
			case ISQSXP:
				assert(TYPEOF(val_as_sexp(val)) == INTSXP);
				type = RSH_RECORDING_INTSXP;
				break;
			default:
				UNREACHABLE();
				break;
		}
	}
	*recording_types |= (1U << type);
	NEXT;
}

// Self-modifying constant-recording lattice (SMC group "RECCONST").
//
//   variant 0 = entry: record the value
//   variant 1 = monomorphic
//   variant 2 = ambiguous / inert   (no-op dispatch to the next instruction)
//
// Transitions are monotonic (0 -> 1 -> 2). Each transition rewrites the live
// slot in place with the successor's pre-patched body via rcp_smc_copy and then
// tail-continues, so the lower states' guards disappear from the instruction
// stream and make the stencils smaller and faster.
#define RECCONST_VARIANT_CHECK 1
#define RECCONST_VARIANT_INERT 2

RCP_STENCIL_FUNCTION(_RCP_SMC_RECCONST_2) // ambiguous / inert
{
	PROLOGUE;
	NEXT;
}

// The recording_constant placeholder symbol is a scalar (its definition drives
// the relocation encoding), but we deliberately reinterpret it as a larger
// StackVal. Silence -Warray-bounds locally rather than globally
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
RCP_STENCIL_FUNCTION(_RCP_SMC_RECCONST_1) // monomorphic
{
	PROLOGUE;
	StackVal *recording_constant = (StackVal *)GETCUSTOM_REL(0);
	if (!eq_val(*recording_constant, *GET_VAL(-1)))
	{
		// Diverged (different pointer, or an unboxed value now): record ambiguity and
		// install the inert variant.
		recording_constant->tag = -1;
		EPILOGUE;
		return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(RECCONST_VARIANT_INERT), GET_NEXT_PTR(), GETSMCVARIANTSIZE(RECCONST_VARIANT_INERT));
	}
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_SMC_RECCONST_0) // entry: record
{
	PROLOGUE;
	StackVal *recording_constant = (StackVal *)GETCUSTOM_REL(0);
	*recording_constant = *GET_VAL(-1);
	if (VAL_IS_SXP(*GET_VAL(-1)))
	{
		SEXP *protect = (SEXP *)GETCUSTOM_REL(1);
		*protect = VAL_SXP(*GET_VAL(-1));
		MARK_NOT_MUTABLE(VAL_SXP(*GET_VAL(-1)));

		// FIXME: this is inefficient. Find a better solution to protect SEXPs from the GC.
		CHECK_OLD_TO_NEW((SEXP)GETCUSTOM(2), VAL_SXP(*GET_VAL(-1)));
	}
	EPILOGUE;
	return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(RECCONST_VARIANT_CHECK), GET_NEXT_PTR(), GETSMCVARIANTSIZE(RECCONST_VARIANT_CHECK));
}
#pragma GCC diagnostic pop

// Same monotonic lattice as RECCONST, but for the function pushed by GETFUN.
// GETFUN leaves the function at GET_VAL(-3), with the two call-frame
// placeholders at GET_VAL(-2)/GET_VAL(-1), so this records slot -3 instead of
// the top of stack. GETFUN always pushes a boxed value, so the recorded
// constant is stored directly as a bare SEXP rather than a StackVal.
#define RECFUN_VARIANT_CHECK 1
#define RECFUN_VARIANT_INERT 2

RCP_STENCIL_FUNCTION(_RCP_SMC_RECFUN_2) // ambiguous / inert
{
	PROLOGUE;
	NEXT;
}

// recording_constant aliases the scalar placeholder symbol as a SEXP slot; the
// -Warray-bounds diagnostic misreads that as an over-read, so silence it here.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
RCP_STENCIL_FUNCTION(_RCP_SMC_RECFUN_1) // monomorphic
{
	PROLOGUE;
	SEXP *recording_constant = (SEXP *)GETCUSTOM_REL(0);
	assert(VAL_IS_SXP(*GET_VAL(-3))); // GETFUN always pushes a SEXP
	if (UNLIKELY(*recording_constant != VAL_SXP(*GET_VAL(-3))))
	{
		*recording_constant = NULL;

		// Uncomment to let GC claim the recorded constant at the expense of a small performance hit.
		// SEXP *protect = (SEXP *)GETCUSTOM_REL(1);
		// *protect = R_NilValue;

		EPILOGUE;
		return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(RECFUN_VARIANT_INERT), GET_NEXT_PTR(), GETSMCVARIANTSIZE(RECFUN_VARIANT_INERT));
	}
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_SMC_RECFUN_0) // entry: record
{
	PROLOGUE;
	SEXP *recording_constant = (SEXP *)GETCUSTOM_REL(0);
	assert(VAL_IS_SXP(*GET_VAL(-3))); // GETFUN always pushes a SEXP
	*recording_constant = VAL_SXP(*GET_VAL(-3));

	SEXP *protect = (SEXP *)GETCUSTOM_REL(1);
	*protect = VAL_SXP(*GET_VAL(-3));
	MARK_NOT_MUTABLE(VAL_SXP(*GET_VAL(-3)));
	// FIXME: this is inefficient. Find a better solution to protect SEXPs from the GC.
	CHECK_OLD_TO_NEW((SEXP)GETCUSTOM(2), VAL_SXP(*GET_VAL(-3)));

	EPILOGUE;
	return rcp_smc_copy(GETSELFADDR(), GETSMCVARIANT(RECFUN_VARIANT_CHECK), GET_NEXT_PTR(), GETSMCVARIANTSIZE(RECFUN_VARIANT_CHECK));
}
#pragma GCC diagnostic pop
