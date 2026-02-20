// stencils-runtime.c
//
// Helper functions compiled as part of the package shared library (.so)
// with frame pointers (-fno-omit-frame-pointer), so that perf can unwind
// through them with --call-graph fp.
//
// The stencils reference these via the rcp_ prefix as external symbols,
// resolved at JIT time through the existing RELOC_RUNTIME_SYMBOL /
// RELOC_RUNTIME_SYMBOL_GOT infrastructure.

#define RSH_INLINE   // INLINE = always_inline (so helpers inline runtime.h internals)
#define RCP
// #define ASSERTS

#define RSH
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#undef USE_RINTERNALS
#undef RSH

// Rename static runtime.h functions to avoid conflict with our global wrappers
#define Rsh_Call Rsh_Call_impl
#define Rsh_StartLoopCntxt Rsh_StartLoopCntxt_impl
#include <runtime.h>
#undef Rsh_Call
#undef Rsh_StartLoopCntxt

// Global functions with frame pointers (visible in .so, findable by dlsym)
void rcp_Rsh_Call(Value *stack, SEXP call, SEXP rho) {
    Rsh_Call_impl(stack, call, rho);
}

Rboolean rcp_Rsh_StartLoopCntxt(Value *stack, RCNTXT *cntxt, SEXP rho) {
    return Rsh_StartLoopCntxt_impl(stack, cntxt, rho);
}

Rboolean rcp_RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho) {
    return Rsh_StepFor(stack, cell, rho);
}
