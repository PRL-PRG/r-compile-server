package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * A constant {@link RValue}: an IR node of a {@link SEXP} constant.
 *
 * <p>Global environments aren't constants. Use {@link StaticEnv Envs.SOMETHING} instead.
 */
@SuppressFBWarnings("SING_SINGLETON_HAS_NONPRIVATE_CONSTRUCTOR")
public record Constant(SEXP constant) implements RValue, GlobalNode {
  private static final Constant TRUE = new Constant(SEXPs.TRUE);
  private static final Constant FALSE = new Constant(SEXPs.FALSE);
  private static final Constant NA_LOGICAL = new Constant(SEXPs.NA_LOGICAL);

  public Constant {
    if (constant instanceof EnvSXP) {
      throw new IllegalArgumentException(
          "Global environments aren't constants. Use Envs.SOMETHING instead.");
    }
  }

  /** Logical {@link Node} of a simple boolean constant. */
  public static Constant bool(boolean value) {
    return value ? TRUE : FALSE;
  }

  /** {@link Node} of a simple logical constant. */
  public static synchronized Constant logical(Logical value) {
    return switch (value) {
      case TRUE -> TRUE;
      case FALSE -> FALSE;
      case NA -> NA_LOGICAL;
    };
  }

  /** {@link Node} of a simple integer constant. */
  public static Constant integer(int value) {
    return new Constant(SEXPs.integer(value));
  }

  /** {@link Node} of a simple real constant. */
  public static Constant real(double value) {
    return new Constant(SEXPs.real(value));
  }

  /** {@link Node} of a simple string constant. */
  public static Constant string(String value) {
    return new Constant(SEXPs.string(value));
  }

  /** {@link Node} of a symbol. */
  public static Constant symbol(String name) {
    return new Constant(SEXPs.symbol(name));
  }

  /** {@link Node} of a builtin. */
  public static Constant builtin(BuiltinId name) {
    return new Constant(SEXPs.builtin(name));
  }

  @Override
  public RType type() {
    return RTypes.exact(constant);
  }

  @Override
  public @Nullable InstrOrPhi origin() {
    return null;
  }

  @Override
  public GlobalNodeId<Constant> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String toString() {
    return constant.toString();
  }
}
