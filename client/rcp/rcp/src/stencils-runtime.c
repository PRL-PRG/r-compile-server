// stencils-runtime.c
//
// Helper functions compiled as part of the package shared library (.so)
// with frame pointers (-fno-omit-frame-pointer), so that perf can unwind
// through them with --call-graph fp.
//
// The stencils reference these as external symbols (Rsh_Call,
// Rsh_StartLoopCntxt), resolved at JIT time through the existing
// RELOC_RUNTIME_SYMBOL / RELOC_RUNTIME_SYMBOL_GOT infrastructure.

#define RSH_INLINE // INLINE = always_inline (so helpers inline runtime.h internals)

#define RSH
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#undef USE_RINTERNALS
#undef RSH

#include <runtime.h>

#include "rcp_loopcntxt.h"

#ifdef STEPFOR_SPECIALIZE
Rboolean RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho)
{
	return Rsh_StepFor(stack, cell, rho);
}
#endif

void rcp_smc_copy(void *dst, const void *src, void *jmp, size_t size)
{
    // Note: the argument order we use allows the registers on x86-64 to be exactly where we need them,
    // so the memcpy is just one instruction and the jump another. Any change would break this.

    //fprintf(stderr, "rcp_smc_copy: dst=%p, src=%p, jmp=%p, size=%zu\n", dst, src, jmp, size);
	memcpy(dst, src, size);
	void (*call)(void) = (const void *const)(jmp);
	return call();
}

/* --------------------------------------------------------------------------
 * Loop contexts (STARTLOOPCNTXT / ENDLOOPCNTXT)
 *
 * A loop that may see a non-local `break`/`next` (one whose body calls
 * eval(), a closure, ...) gets an RCNTXT whose cjmpbuf is the landing pad for
 * findcontext()'s siglongjmp. The setjmp must therefore live in a C frame that
 * is still alive when the jump happens.
 *
 * That is what bcEval does (the SETJMP is inline in the interpreter loop) and
 * what the rsh C backend gets for free (Rsh_StartLoopCntxt is static and
 * inlines into the generated function). The copy-and-patch backend cannot:
 * every stencil is its own function, and a helper that just does
 * `begincontext(); return sigsetjmp(...)` has already returned -- and had its
 * frame overwritten by the loop body's own calls -- by the time the jump comes
 * back to it. Resuming there re-runs an epilogue reading garbage: `pop %rbx`
 * loads junk into the register holding the R node stack pointer and `ret`
 * jumps to a stale return address.
 *
 * So instead of returning, the helper *stays on the stack for as long as the
 * loop context is live* and drives the JIT chain itself:
 *
 *   STARTLOOPCNTXT  -> Rsh_RunLoopCntxt()   begincontext + sigsetjmp, then
 *                                           calls (does NOT tail-jump to) the
 *                                           loop body; `next`/`break` land back
 *                                           in this same frame and re-dispatch,
 *                                           so repeated jumps cost no stack.
 *   ENDLOOPCNTXT    -> Rsh_EndLoopCntxtJmp() endcontext, record where to carry
 *                                           on, and `return` -- every stencil
 *                                           chains by tail jump, so this
 *                                           unwinds straight back to the
 *                                           Rsh_RunLoopCntxt frame that owns
 *                                           this loop, popping it.
 *
 * STARTLOOPCNTXT then tail-jumps to the recorded resume point, so entering a
 * loop pushes one frame and leaving it pops one. Net cost is one C frame per
 * *live* loop context (bounded by loop nesting depth), not one per loop entry
 * and not one per `next` -- both of which would blow the C stack on a hot
 * nested loop.
 *
 * Both of those closing jumps have to stay sibling calls, which is why nothing
 * here hands a stencil local's address to a helper: an escaped frame makes GCC
 * fall back to a plain call, and the leak is back.
 * -------------------------------------------------------------------------- */

#if __GNUC__ >= 14
#define RCP_JIT_ABI __attribute__((no_callee_saved_registers))
#else
#define RCP_JIT_ABI
#endif

typedef Value(RCP_JIT_ABI *RcpJitFn)(void);

/* Where ENDLOOPCNTXT wants execution to carry on, handed to the
 * Rsh_RunLoopCntxt frame it unwinds to. Nothing can run between the write and
 * the read (the return path is unwind -> return -> read), so a single slot is
 * enough even for nested loop contexts. A NULL `resume` means "the chain did a
 * real RETURN" instead, and rcp_loop_retval holds the value to propagate. */
static RcpLoopExit rcp_loop_exit = {NULL, NULL};
static Value rcp_loop_retval;

/* Enter JIT code with the RCP private calling convention (node stack and
 * locals in the agreed callee-saved registers), exactly as rcpNativeCaller in
 * eval.c does for the function entry. */
static __attribute__((noinline)) Value rcp_enter_jit(Value *stack, rcpEval_locals *locals,
													 RcpJitFn call)
{
	register Value *stack_reg __asm__(RSH_RCP_REGISTER_STACK) = stack;
	asm volatile("" : : "r"(stack_reg));
	register rcpEval_locals *locals_reg __asm__(RSH_RCP_REGISTER_LOCALS) = locals;
	asm volatile("" : : "r"(locals_reg));
	return call();
}

RcpLoopExit Rsh_RunLoopCntxt(Value *stack, rcpEval_locals *locals, RCNTXT *cntxt, SEXP rho,
							 void *body, void *brk)
{
	RSH_CHECK_BCPROT();
	Rf_begincontext(cntxt, CTXT_LOOP, R_NilValue, rho, R_BaseEnv, R_NilValue, R_NilValue);

	/* Reached three ways: falling in (0), a `next` jump, and a `break` jump.
	 * `next` and `break` both land here rather than in a dead frame, so the
	 * only state we need back is which label to (re-)enter at; `stack` is the
	 * loop-entry node stack top, which is what both resume points expect --
	 * the same thing bcEval restores from its saved loop locals. */
	RcpJitFn target = (RcpJitFn)(sigsetjmp(cntxt->cjmpbuf, 0) == CTXT_BREAK ? brk : body);

	rcp_loop_exit.resume = NULL;
	Value res = rcp_enter_jit(stack, locals, target);

	/* Must NOT become a sibling call: cntxt->cjmpbuf points at this frame and
	 * the context stays live for as long as the loop body runs. Letting `res`
	 * escape through the asm keeps the frame addressed and the call non-tail. */
	asm volatile("" : : "r"(&res), "r"(cntxt) : "memory");

	RcpLoopExit exit = rcp_loop_exit;
	rcp_loop_exit.resume = NULL;
	if (exit.resume == NULL)
	{
		/* No ENDLOOPCNTXT ran, so the chain unwound past us on a RETURN inside
		 * the loop. Park the value for the stencil to pick up and keep
		 * propagating. Nothing allocates between here and that pick-up, so the
		 * SEXP does not need protecting. */
		rcp_loop_retval = res;
	}
	return exit;
}

Value Rsh_LoopCntxtRetVal(void)
{
	return rcp_loop_retval;
}

Value Rsh_EndLoopCntxtJmp(Value *stack, RCNTXT *cntxt, void *resume)
{
	RSH_CHECK_BCPROT();
	Rf_endcontext(cntxt);
	rcp_loop_exit.resume = resume;
	rcp_loop_exit.stack = stack;
	Value unused = {0}; /* discarded by Rsh_RunLoopCntxt */
	return unused;
}
