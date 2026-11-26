package org.prlprg.fir.ir.callee;

import org.prlprg.fir.ir.type.Signature;

/// A call from a version's [fallback][org.prlprg.fir.ir.abstraction.LazyBody#fallback()] to
/// another version of the same function, in the same closure environment.
///
/// The callee is the best version that can be called with `signature` *other than the one the
/// fallback belongs to* (see [org.prlprg.fir.ir.module.Function#guess(Signature,
/// org.prlprg.fir.ir.abstraction.Abstraction)]). This is what distinguishes it from a
/// [StaticFnCallee] with the same signature, which may resolve to the fallback's own version: e.g.
/// a copy of the baseline has the baseline's signature and is dispatched before it.
///
/// The owning statement's argument at index 0 is unused (by convention,
/// [ELIDED_CLOSURE][org.prlprg.fir.ir.argument.Constant#ELIDED_CLOSURE]), because there's no
/// closure to get the environment from: the callee runs in the environment the caller was called
/// with. The call arguments follow it.
///
/// Only valid in a fallback. It has no textual form that parses, because fallbacks (and
/// unevaluated versions in general) aren't printed.
public record FallbackCallee(Signature signature) implements Callee {}
