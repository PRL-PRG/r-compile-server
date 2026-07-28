package org.prlprg.fir.ir.expression;

import javax.annotation.concurrent.Immutable;

/// The operation of a [Statement][org.prlprg.fir.ir.instruction.Statement]. Argument-free metadata
/// (opcode plus non-argument operands such as the [Load] variable, [Cast] type, or [Call] callee);
/// the operation's [Argument][org.prlprg.fir.ir.argument.Argument]s live on the owning
/// [Statement][org.prlprg.fir.ir.instruction.Statement] in the canonical flat order.
@Immutable
public sealed interface Expression
    permits Assume,
        Call,
        Cast,
        Closure,
        Dup,
        Force,
        Load,
        MkEnv,
        MkVector,
        Noop,
        PopEnv,
        Promise,
        ReflectiveLoad,
        ReflectiveStore,
        Store,
        SubscriptRead,
        SubscriptWrite {}
