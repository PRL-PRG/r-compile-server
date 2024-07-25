package org.prlprg.ir.cfg;

import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * An IR node that, at runtime, is guaranteed to be a single statically-known constant value:
 * {@link Constant#value()}.
 *
 * <p>Environments aren't constants, because even though they are guaranteed to be a single
 * statically-known value, the value itself isn't constant. As such, creating a constant
 * {@link EnvSXP} throws {@link IllegalArgumentException}. To represent global environments, use
 * {@link StaticEnv Envs.SOMETHING}. To represent locally-created environments, use an "env"
 * instruction.
 */
public sealed interface Constant<T> extends GlobalNode<T> {
  static <T> Constant<? extends T> of(T constant) {
    return new ConstantImpl<>(constant);
  }

  Constant<DotsSXP> DOTS = new ConstantImpl<>(SEXPs.DOTS_SYMBOL);

  /** Logical {@link Node} of a constant boolean (simple non-NA logical) {@link SEXP}. */
  static Constant<BoolSXP> bool(boolean value) {
    return value ? ConstantImpl.TRUE_SEXP : ConstantImpl.FALSE_SEXP;
  }

  /** {@link Node} of a constant simple logical {@link SEXP}. */
  static Constant<SimpleLglSXP> lglSxp(Logical value) {
    return switch (value) {
      case TRUE -> ConstantImpl.TRUE_SEXP;
      case FALSE -> ConstantImpl.FALSE_SEXP;
      case NA -> ConstantImpl.NA_LOGICAL_SEXP;
    };
  }

  /** {@link Node} of a constant simple integer {@link SEXP}. */
  static Constant<SimpleIntSXP> intSxp(int value) {
    return new ConstantImpl<>(SEXPs.integer(value));
  }

  /** {@link Node} of a constant simple real {@link SEXP}. */
  static Constant<SimpleRealSXP> realSxp(double value) {
    return new ConstantImpl<>(SEXPs.real(value));
  }

  /** {@link Node} of a constant simple string {@link SEXP}. */
  static Constant<SimpleStrSXP> strSxp(String value) {
    return new ConstantImpl<>(SEXPs.string(value));
  }

  /** {@link Node} of a constant {@link RegSymSXP}. */
  static Constant<RegSymSXP> symbol(String name) {
    return new ConstantImpl<>(SEXPs.symbol(name));
  }

  /** {@link Node} of a constant {@link BuiltinSXP}. */
  static Constant<BuiltinSXP> bltSxp(BuiltinId name) {
    return new ConstantImpl<>(SEXPs.builtin(name));
  }

  /**
   * The node's value.
   *
   * <p>The only value at runtime of variables represented by this node.
   */
  T value();
}

record ConstantImpl<T>(T value) implements Constant<T> {
  static final Constant<BoolSXP> TRUE_SEXP = new ConstantImpl<>(SEXPs.TRUE);
  static final Constant<BoolSXP> FALSE_SEXP = new ConstantImpl<>(SEXPs.FALSE);
  static final Constant<SimpleLglSXP> NA_LOGICAL_SEXP = new ConstantImpl<>(SEXPs.NA_LOGICAL);

  ConstantImpl {
    if (value instanceof EnvSXP) {
      throw new IllegalArgumentException("Global environments aren't constants.");
    }
  }

  @Override
  @SuppressWarnings("unchecked")
  public Class<T> type() {
    // The exact cast is OK because we only expose `Constant<? extends T>` from `Constant#of`,
    // and other methods where `T` is `constant`'s exact type.`
    return (Class<T>) value.getClass();
  }

  @Override
  public GlobalNodeId<T> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String toString() {
    return value.toString();
  }
}
