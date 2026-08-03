#include "stencils_internals.h"
#include <opcodes_internals.h>

#include "../rcp_hooks.h"

static __attribute__((always_inline)) inline SEXP rcp_binding_value(SEXP binding_cell)
{
	if (BNDCELL_TAG(binding_cell))
	{
		return R_NilValue;
	}
	return CAR0(binding_cell);
}

static __attribute__((always_inline)) inline int rcp_value_type(SEXP val)
{
	if (TYPEOF(val) == PROMSXP)
	{
		SEXP prval = PRVALUE(val);
		return (prval != R_UnboundValue) ? TYPEOF(prval) : PROMSXP;
	}
	return TYPEOF(val);
}

static __attribute__((always_inline)) inline int rcp_binding_type(SEXP binding_cell)
{
	return BNDCELL_TAG(binding_cell) ? BNDCELL_TAG(binding_cell) : rcp_value_type(CAR0(binding_cell));
}

RCP_STENCIL_FUNCTION(_RCP_ENTRY_HOOK)
{
	PROLOGUE;
	// do we actually need an entry hook for the types?
	// If we have evaluated promises, and an argument is assigned with another type
	// later in the function, yes...
	// But that should be rare.

#ifdef RCP_TRACE
	Rprintf("Entry hook\n");
#endif
	NEXT;
}

RCP_STENCIL_FUNCTION(_RCP_EXIT_HOOK)
{
	PROLOGUE;
#ifdef RCP_TRACE
	Rprintf("Exit hook\n");
#endif
	TypeTrace *trace = (TypeTrace *)GETCUSTOM(0);
	SEXP rho = GET_RHO();

	// Resize if needed
	if (trace->count >= trace->capacity)
	{
		trace->capacity *= 2;
		trace->types = realloc(trace->types, trace->capacity * sizeof(TypeRecord));
	}

	TypeRecord *rec = &trace->types[trace->count];

	// Skip locals (arguments are expected to start at first_arg_sym)
	SEXP b = FRAME(rho);
	while (b != R_NilValue && TAG(b) != trace->first_arg_sym)
		b = CDR(b);

	// Use argument count known at compile time from FORMALS
	size_t nargs = trace->argument_count;
	if (b == R_NilValue)
		nargs = 0;

	rec->count = nargs;
	rec->arguments = malloc(nargs * sizeof(int));
	rec->dots_names = NULL;
	rec->dots_types = NULL;
	rec->dots_count = 0;

	// Record argument types (promises are forced by now for used args)
	size_t i = 0;
	for (SEXP f = b; f != R_NilValue; f = CDR(f))
	{
		SEXP tag = TAG(f);
		if (tag == R_DotsSymbol)
		{
			SEXP dots_val = rcp_binding_value(f);
			if (TYPEOF(dots_val) == PROMSXP)
			{
				SEXP prval = PRVALUE(dots_val);
				if (prval != R_UnboundValue)
					dots_val = prval;
			}

			if (dots_val != R_MissingArg && TYPEOF(dots_val) == DOTSXP)
			{
				size_t ndots = 0;
				for (SEXP d = dots_val; d != R_NilValue; d = CDR(d))
					ndots++;
				rec->dots_count = ndots;
				rec->dots_names = malloc(ndots * sizeof(SEXP));
				rec->dots_types = malloc(ndots * sizeof(int));

				size_t di = 0;
				for (SEXP d = dots_val; d != R_NilValue; d = CDR(d), di++)
				{
					SEXP dtag = TAG(d);
					SEXP dval = CAR(d);
					rec->dots_names[di] = dtag;
					rec->dots_types[di] = (dval == R_MissingArg) ? RCP_ARG_MISSING : rcp_value_type(dval);
				}
			}
			continue;
		}

		if (i >= nargs)
			continue;

		// A missing argument (no default, not supplied) appears as R_MissingArg
		// in the frame. Record RCP_ARG_MISSING (== NA_INTEGER) so it serialises
		// to NA, matching injectr, instead of being mis-recorded as `symbol`.
		SEXP argval = rcp_binding_value(f);
		rec->arguments[i] = (argval == R_MissingArg) ? RCP_ARG_MISSING : rcp_binding_type(f);

#ifdef RCP_TRACE
		if (tag != R_NilValue && TYPEOF(tag) == SYMSXP)
		{
			Rprintf("Arg %s: %s\n", CHAR(PRINTNAME(tag)), type2char(rec->arguments[i]));
		}
		else
		{
			Rprintf("Arg <non-symbol>: %s\n", type2char(rec->arguments[i]));
		}
#endif
		i++;
	}

	// Record return value type (top of stack before RETURN)
	rec->ret = TYPEOF_VAL(*GET_VAL(-1));

	trace->count++;
	NEXT;
}
