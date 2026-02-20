// stencils-runtime.c
//
// Helper functions compiled as part of the package shared library (.so)
// with frame pointers (-fno-omit-frame-pointer), so that perf can unwind
// through them with --call-graph fp.
//
// The stencils reference these as external symbols (Rsh_Call,
// Rsh_StartLoopCntxt), resolved at JIT time through the existing
// RELOC_RUNTIME_SYMBOL / RELOC_RUNTIME_SYMBOL_GOT infrastructure.

#define RSH_INLINE   // INLINE = always_inline (so helpers inline runtime.h internals)
#define RCP

#define RSH
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#undef USE_RINTERNALS
#undef RSH

#include <runtime.h>

#ifdef STEPFOR_SPECIALIZE
Rboolean RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho) {
    return Rsh_StepFor(stack, cell, rho);
}
#endif
