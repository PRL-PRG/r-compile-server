package org.prlprg.ir;

/** Tuple of a command and the value it produced. */
public record CFGAction<Ret>(CFGCommand<Ret> command, Ret output) {}
