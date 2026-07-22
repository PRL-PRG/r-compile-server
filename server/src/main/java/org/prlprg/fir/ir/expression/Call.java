package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.callee.Callee;

/// Call a function. The owning statement's arguments are `[calleeArg, ...callArgs]`: the callee's
/// own argument (a [StaticFnCallee][org.prlprg.fir.ir.callee.StaticFnCallee]'s closure-with-env or
/// a [DynamicCallee][org.prlprg.fir.ir.callee.DynamicCallee]'s actual callee) at index 0, then the
/// call arguments.
public record Call(Callee callee) implements Expression {}
