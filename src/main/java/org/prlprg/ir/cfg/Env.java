package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/**
 * IR node which may correspond to the {@code rho} environment in the interpeter. Other {@link
 * RValue}s may be envs, but only correspond to SEXPs on the stack in the interpreter.
 */
public interface Env extends RValue {
  /** Parent environment, if known. */
  @Nullable Env parent();

  /** If this is a global environment, the {@link SEXP} it refers to. */
  @Nullable SEXP sexp();

  @Override
  NodeId<? extends Env> id();

  @Override
  default RType type() {
    return RTypes.simple(SEXPType.ENV);
  }

  /** Is this a static environment? */
  default boolean isStatic() {
    return cfg() == null;
  }
}
