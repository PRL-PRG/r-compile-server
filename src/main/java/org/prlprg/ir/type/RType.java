package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.sexp.RSexpType;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

/**
 * The type of a ({@link Node}), i.e. the set of all possible values it can represent at runtime.
 *
 * <p>This encompasses both {@link SEXP}s and unboxed values.
 *
 * <p>This data-structure is essentially an enhanced {@link Class} that provides intersection,
 * union, and "BOTTOM" (the subtype of all other types); helpers for {@link SEXP} types (e.g. get
 * whether the type is a promise, or return the same type but promise-wrapped); and can express more
 * fine-grained types (e.g. generics, but also things like vectors of specific lengths. The un-
 * enhanced class that this represents is exposed via {@link #clazz()} (e.g. an {@link RType} of an
 * unboxed integer's {@link #clazz()} returns {@link Integer}).
 *
 * <p>Unlike {@link Class}, this doesn't have a type parameter. The reason is that intersection,
 * union, and many of the helper methods can't provide good type inference, so the parameter must be
 * unsafely casted a lot, and that is not good. ({@link Class}'s type parameter also tends to be
 * casted a lot, perhaps it wasn't a good idea either...)
 */
public interface RType extends BoundedLattice<RType> {
  /** The type of an expression which hangs, errors, or otherwise diverts control flow.
   *
   * <p>AKA "BOTTOM", the subtype of all other types (because if the expression never returns, we
   * can optimize as if it returned whatever helps optimization the most).
   */
  RNothingType NOTHING = new RNothingType();

  /** Anything can be an instance of this (including an {@link SEXP} or unboxed value).
   *
   * <p>AKA "TOP", the supertype of all other types.
   */
  RType ANY = new RAnyType();

  /** Parse a type written in a tiny DSL. TODO: document syntax. */
  static RType parse(String string) {
    return Parser.fromString(string, RType.class);
  }

  /** Returns an {@link RType} representing the given {@link Class}, i.e. all instances of the type
   * are instances of the class and vice versa.
   */
  // The cast is trivially safe.
  @SuppressWarnings("unchecked")
  static RType of(Class<?> clazz) {
    return SEXP.class.isAssignableFrom(clazz)
        ? RSexpType.of((Class<? extends SEXP>) clazz)
        : RUnboxedType.of(clazz);
  }

  /** The most specific {@link RType} that the given value is an instance of.
   *
   * <p>If the value is an {@link SEXP}, this is guaranteed to be {@link RSexpType}. If you want to
   * rely on this, use {@link RSexpType#exact(SEXP)} instead of casting. */
  static RType exact(Object instance) {
    if (instance instanceof SEXP) {
      return RSexpType.exact((SEXP) instance);
    } else {
      return RUnboxedType.of(instance.getClass());
    }
  }

  /**
   * The class of instances that are instances of this type.
   *
   * <p>As its documentation explains, {@link RType} is essentially an enhanced {@link Class}. This
   * property returns the regular, "un-enhanced" class it represents.
   *
   * <p>An example of this property's use case {@link #isInstance(Object)}.
   *
   * <p>This is {@code null} for {@link #NOTHING}, because there is no Java class for BOTTOM
   * ({@link Void} is similar, but is not a subclass of all other classes).
   */
  @Nullable Class<?> clazz();

  /**
   * Whether the given value is an instance of this type.
   *
   * <p>This is essentially {@link #clazz()}{@link Class#isInstance(Object) .isInstance(obj)}.
   */
  default boolean isInstance(Object value) {
    var clazz = clazz();
    return clazz == null || clazz.isInstance(value);
  }


  /**
   * Whether the given class is a superclass of this class.
   *
   * <p>This is essentially {@link Class#isInstance(Object) other.isAssignableFrom(}{@link #clazz()
   * clazz())}.
   */
  default boolean isSubsetOf(Class<?> other) {
    var clazz = clazz();
    return clazz == null || other.isAssignableFrom(clazz);
  }

  /**
   * Whether this is {@link #NOTHING}, the subtype of all other types.
   *
   * <p>If true, an instance will never exist, and any code which would produce an instance actually
   * either crashes, hangs, or otherwise diverts control flow.
   */
  default boolean isNothing() {
    return this == NOTHING;
  }

  /**
   * Whether this is {@link #ANY}, the supertype of all other types.
   *
   * <p>If true, every possible runtime value is an instance of this type.
   */
  default boolean isAny() {
    return this == ANY;
  }
}

