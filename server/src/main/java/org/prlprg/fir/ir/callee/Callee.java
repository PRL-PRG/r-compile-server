package org.prlprg.fir.ir.callee;

import javax.annotation.concurrent.Immutable;

/// The metadata of a [Call][org.prlprg.fir.ir.expression.Call]. Argument-free: the callee's own
/// argument (a [StaticFnCallee]'s closure-with-env, or a [DynamicCallee]'s actual callee) is the
/// owning statement's argument at index 0, and the call arguments follow it.
@Immutable
public sealed interface Callee permits StaticFnCallee, DynamicCallee {}
