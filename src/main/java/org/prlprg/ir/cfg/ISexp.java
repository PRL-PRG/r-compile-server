package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.SEXP;

/**
 * IR node which corresponds to a {@link SEXP} at runtime.
 *
 * <p>This includes (SEXP) {@link Constant}s and {@link Instr}s which produce a single {@link SEXP}.
 */
public interface ISexp extends Node {
  /**
   * The type of the {@link SEXP} (restricts the possible {@link SEXP}s this can be at runtime).
   *
   * <p>The type of the constant or return type of the instruction.
   */
  RType type();

  /** Additional information if this is guaranteed to be an environment. */
  default @Nullable EnvAux envAux() {
    return null;
  }

  @Override
  NodeId<? extends ISexp> id();

  /**
   * Is this guaranteed to be an environment?
   *
   * <p>{@code = }{@link #type()}{@code .}{@link RType#relation(Lattice, Lattice) relation}{@code
   * (}{@link RType#ANY_ENV ANY_ENV}{@code )}
   */
  default Maybe isEnv() {
    return type().relation(RType.ANY_ENV);
  }

  /**
   * Is this value guaranteed to be an instance of the given type?
   *
   * <p>{@code = }{@link #type()}{@code .}{@link RType#relation(Lattice, Lattice) relation}{@code
   * (type)}
   *
   * @see RType#isSubsetOf(RType)
   */
  default Maybe isInstanceOf(RType type) {
    return type().relation(type);
  }
}
