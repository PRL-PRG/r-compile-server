package org.prlprg.ir.cfg;

import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * A constant {@link ISexp}: an IR node of a {@link SEXP} constant.
 *
 * <p>Global environments aren't constants. Use {@link StaticEnv Envs.SOMETHING} instead.
 */
public record Constant<T>(T constant) implements GlobalNode<T> {
  public static final Constant<DotsSXP> DOTS = new Constant<>(SEXPs.DOTS_SYMBOL);
  private static final Constant<BoolSXP> TRUE_SEXP = new Constant<>(SEXPs.TRUE);
  private static final Constant<BoolSXP> FALSE_SEXP = new Constant<>(SEXPs.FALSE);
  private static final Constant<SimpleLglSXP> NA_LOGICAL_SEXP = new Constant<>(SEXPs.NA_LOGICAL);

  public Constant {
    if (constant instanceof EnvSXP) {
      throw new IllegalArgumentException("Global environments aren't constants.");
    }
  }

  /** Logical {@link Node} of a simple boolean constant. */
  public static Constant<BoolSXP> bool(boolean value) {
    return value ? TRUE_SEXP : FALSE_SEXP;
  }

  /** {@link Node} of a constant simple logical {@link SEXP}. */
  public static synchronized Constant<SimpleLglSXP> lglSxp(Logical value) {
    return switch (value) {
      case TRUE -> TRUE_SEXP;
      case FALSE -> FALSE_SEXP;
      case NA -> NA_LOGICAL_SEXP;
    };
  }

  /** {@link Node} of a constant simple integer {@link SEXP}. */
  public static Constant<SimpleIntSXP> intSxp(int value) {
    return new Constant<>(SEXPs.integer(value));
  }

  /** {@link Node} of a constant simple real {@link SEXP}. */
  public static Constant<SimpleRealSXP> realSxp(double value) {
    return new Constant<>(SEXPs.real(value));
  }

  /** {@link Node} of a constant simple string {@link SEXP}. */
  public static Constant<SimpleStrSXP> strSxp(String value) {
    return new Constant<>(SEXPs.string(value));
  }

  /** {@link Node} of a constant {@link RegSymSXP}. */
  public static Constant<RegSymSXP> symbol(String name) {
    return new Constant<>(SEXPs.symbol(name));
  }

  /** {@link Node} of a constant {@link BuiltinSXP}. */
  public static Constant<BuiltinSXP> bltSxp(BuiltinId name) {
    return new Constant<>(SEXPs.builtin(name));
  }

  @Override
  public GlobalNodeId<T> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String toString() {
    return constant.toString();
  }
}
