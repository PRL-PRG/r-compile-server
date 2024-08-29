package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableBiMap;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BoolSXP;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.DotsSymSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.ScalarIntSXP;
import org.prlprg.sexp.ScalarLglSXP;
import org.prlprg.sexp.ScalarRealSXP;
import org.prlprg.sexp.ScalarStrSXP;

/**
 * An IR node that, at runtime, is guaranteed to be a single statically-known constant value: {@link
 * Constant#value()}.
 *
 * <p>Environments aren't constants, because even though they are guaranteed to be a single
 * statically-known value, the value itself isn't constant. As such, creating a constant {@link
 * EnvSXP} throws {@link IllegalArgumentException}. To represent global environments, use {@link
 * StaticEnv Envs.SOMETHING}. To represent locally-created environments, use an "env" instruction.
 */
public sealed interface Constant<T> extends GlobalNode<T> {
  @SuppressWarnings("unchecked")
  static <T> Constant<? extends T> of(T constant) {
    if (constant == SEXPs.DOTS_SYMBOL) {
      return (Constant<? extends T>) DOTS;
    } else if (constant == ConstantImpl.TRUE_SEXP) {
      return (Constant<? extends T>) ConstantImpl.TRUE_SEXP;
    } else if (constant == ConstantImpl.FALSE_SEXP) {
      return (Constant<? extends T>) ConstantImpl.FALSE_SEXP;
    } else if (constant == ConstantImpl.NA_LOGICAL_SEXP) {
      return (Constant<? extends T>) ConstantImpl.NA_LOGICAL_SEXP;
    }

    return new ConstantImpl<>(constant);
  }

  Constant<DotsSymSXP> DOTS = new ConstantImpl<>(SEXPs.DOTS_SYMBOL);

  /** Logical {@link Node} of a constant boolean (simple non-NA logical) {@link SEXP}. */
  static Constant<? extends BoolSXP> bool(boolean value) {
    return value ? ConstantImpl.TRUE_SEXP : ConstantImpl.FALSE_SEXP;
  }

  /** {@link Node} of a constant simple logical {@link SEXP}. */
  static Constant<? extends ScalarLglSXP> lglSxp(Logical value) {
    return switch (value) {
      case TRUE -> ConstantImpl.TRUE_SEXP;
      case FALSE -> ConstantImpl.FALSE_SEXP;
      case NA -> ConstantImpl.NA_LOGICAL_SEXP;
    };
  }

  /** {@link Node} of a constant simple integer {@link SEXP}. */
  static Constant<? extends ScalarIntSXP> intSxp(int value) {
    return new ConstantImpl<>(SEXPs.integer(value));
  }

  /** {@link Node} of a constant simple real {@link SEXP}. */
  static Constant<? extends ScalarRealSXP> realSxp(double value) {
    return new ConstantImpl<>(SEXPs.real(value));
  }

  /** {@link Node} of a constant simple string {@link SEXP}. */
  static Constant<? extends ScalarStrSXP> strSxp(String value) {
    return new ConstantImpl<>(SEXPs.string(value));
  }

  /** {@link Node} of a constant {@link RegSymSXP}. */
  static Constant<? extends RegSymSXP> symbol(String name) {
    return new ConstantImpl<>(SEXPs.symbol(name));
  }

  /** {@link Node} of a constant {@link BuiltinSXP}. */
  static Constant<? extends BuiltinSXP> bltSxp(BuiltinId name) {
    return new ConstantImpl<>(SEXPs.builtin(name));
  }

  /**
   * The node's value.
   *
   * <p>The only value at runtime of variables represented by this node.
   */
  T value();

  @ParseMethod
  private static Constant<?> parse(Parser p) {
    return p.parse(ConstantImpl.class);
  }
}

record ConstantImpl<T>(T value) implements Constant<T> {
  static final Constant<? extends BoolSXP> TRUE_SEXP = new ConstantImpl<>(SEXPs.TRUE);
  static final Constant<? extends BoolSXP> FALSE_SEXP = new ConstantImpl<>(SEXPs.FALSE);
  static final Constant<? extends ScalarLglSXP> NA_LOGICAL_SEXP =
      new ConstantImpl<>(SEXPs.NA_LOGICAL);

  ConstantImpl {
    if (value instanceof EnvSXP) {
      throw new IllegalArgumentException("Global environments aren't constants.");
    }
  }

  @Override
  public RType type() {
    return RType.exact(value);
  }

  @Override
  public GlobalNodeId<T> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  // region serialization and deserialization
  private static final ImmutableBiMap<Class<?>, String> EXPLICIT_TYPE_SPECIFIERS =
      ImmutableBiMap.of(
          Integer.class, "Int",
          Double.class, "Real",
          String.class, "Str",
          Boolean.class, "Bool");

  private static @Nullable String explicitSpecifierForClass(Class<?> clazz) {
    if (SEXP.class.isAssignableFrom(clazz)) {
      return null;
    }

    var explicitSpecifier = EXPLICIT_TYPE_SPECIFIERS.get(clazz);
    if (explicitSpecifier != null) {
      return explicitSpecifier;
    }

    throw new UnsupportedOperationException(
        "Need to add type specifier for constant so it can be parsed and printed: "
            + clazz.getSimpleName());
  }

  private static Class<?> classForExplicitSpecifier(@Nullable String specifier) {
    if (specifier == null) {
      return SEXP.class;
    }

    var clazz = EXPLICIT_TYPE_SPECIFIERS.inverse().get(specifier);
    if (clazz != null) {
      return clazz;
    }

    throw new UnsupportedOperationException(
        "Need to add type specifier for constant so it can be parsed and printed: " + specifier);
  }

  @ParseMethod
  private static ConstantImpl<?> parse(Parser p) {
    var s = p.scanner();

    String explicitSpecifier = null;
    if (s.trySkip('[')) {
      explicitSpecifier = s.readJavaIdentifierOrKeyword();
      s.assertAndSkip(']');
    }
    var clazz = classForExplicitSpecifier(explicitSpecifier);

    var value = p.parse(clazz);
    return new ConstantImpl<>(value);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    var explicitSpecifier = explicitSpecifierForClass(value.getClass());
    if (explicitSpecifier != null) {
      w.write('[');
      w.write(explicitSpecifier);
      w.write(']');
    }

    p.print(value);
  }

  @Override
  public String toString() {
    return value.toString();
  }
  // endregion serialization and deserialization
}
