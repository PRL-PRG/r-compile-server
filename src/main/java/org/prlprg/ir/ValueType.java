package org.prlprg.ir;

/**
 * Restricts the set of possible runtime values of a {@link Value} IR node. Note that, while in
 * GNU-R every runtime value is an SEXP, we may compile unboxed or otherwise differently-shaped
 * values. Also, this can be both more general and specific than GNU-R's SEXPTYPE; it can represent
 * a union of SEXPTYPEs (more general), and it can encode flags like {@code isScalar} (more
 * specific).
 */
public record ValueType() {}
