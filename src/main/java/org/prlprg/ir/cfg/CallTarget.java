package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.Closure;
import org.prlprg.primitive.BuiltinId;

/**
 * A function called by a {@link StmtData.Call}, AKA "callee".
 *
 * <p>It may be completely statically resolved ({@link StaticBuiltinCall} or {@link
 * StaticCompiledCall}) or unresolved ({@link DynamicCall}).
 */
public sealed interface CallTarget {
  record DynamicCall(ISexp value) implements CallTarget {}

  record StaticBuiltinCall(BuiltinId id) implements CallTarget {}

  record StaticCompiledCall(Closure closure) implements CallTarget {}
}
