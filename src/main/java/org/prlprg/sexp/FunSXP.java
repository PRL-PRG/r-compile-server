package org.prlprg.sexp;

/** A callable {@link SEXP}: a closure, "builtin" (primitive function), or "special" (another type
 * of primitive function). */
public sealed interface FunSXP extends SEXP permits CloSXP, BuiltinOrSpecialSXP {}
