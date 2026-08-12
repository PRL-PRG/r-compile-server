#pragma once
/* Loop-context (STARTLOOPCNTXT / ENDLOOPCNTXT) trampoline interface.
 *
 * Shared by the three translation units that have to agree on it: the stencils
 * that call these helpers (src/stencils/stencils_bc.c), their definitions
 * (src/stencils-runtime.c), and the generated relocation table that takes their
 * addresses (stencils-build/stencils_data.c, see src/extractor).
 *
 * Include after <Rinternals.h> (for R_bcstack_t, RCNTXT and rcpEval_locals).
 *
 * See stencils-runtime.c for why loop contexts need a trampoline at all.
 */

/* What Rsh_RunLoopCntxt hands back once the loop it drove is over. Two
 * pointers, so it comes back in registers -- deliberately NOT an out-parameter:
 * taking the address of a stencil local would make its frame escape, and GCC
 * then refuses to turn the stencil's closing jump into a sibling call, leaking
 * one frame per loop entry. */
typedef struct
{
	/* Where to carry on, i.e. the instruction after the matching
	 * ENDLOOPCNTXT. NULL means the JIT chain hit a RETURN inside the loop
	 * instead; the value to propagate is then Rsh_LoopCntxtRetVal(). */
	void *resume;
	/* Node stack top at ENDLOOPCNTXT. */
	R_bcstack_t *stack;
} RcpLoopExit;

/* STARTLOOPCNTXT: begin the loop context and run the loop inside this frame.
 * `body` is the instruction after STARTLOOPCNTXT, `brk` the loop's break
 * target. Returns only when the loop is done. */
extern RcpLoopExit Rsh_RunLoopCntxt(R_bcstack_t *stack, rcpEval_locals *locals, RCNTXT *cntxt,
									SEXP rho, void *body, void *brk);

/* The value a RETURN inside the loop produced (only meaningful when
 * RcpLoopExit.resume is NULL). Kept out of RcpLoopExit so the common path
 * stays in two registers. */
extern R_bcstack_t Rsh_LoopCntxtRetVal(void);

/* ENDLOOPCNTXT: end the loop context and unwind the JIT chain back to the
 * Rsh_RunLoopCntxt frame that owns it, which resumes at `resume`. The returned
 * value is a placeholder that Rsh_RunLoopCntxt discards. */
extern R_bcstack_t Rsh_EndLoopCntxtJmp(R_bcstack_t *stack, RCNTXT *cntxt, void *resume);
