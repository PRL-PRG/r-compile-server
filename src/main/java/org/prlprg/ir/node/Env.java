package org.prlprg.ir.node;

/**
 * IR node which correspond to the {@code rho} environment in the interpeter. {@link RValue}s may be
 * envs, but those correspond to SEXPs on the stack in the interpreter.
 */
public interface Env extends Node {}
