package org.prlprg.ir.type;

import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

/**
 * The type of a ({@link Node}), i.e. the set of all possible values it can represent at runtime.
 *
 * <p>This encompasses both {@link SEXP}s and unboxed values.
 *
 * <p>This data-structure is essentially an enhanced {@link Class} that provides more detail. Like
 * {@link Class}, {@link T} is the Java type this data-structure represents, e.g.
 * {@code RType<Integer>} is a type representing an unboxed integer. {@link #clazz()} encodes what
 * {@link T} is supposed to be at runtime, since it can be improperly casted (Java type erasure);
 * {@link #clazz()} is occasionally checked so that an improper cast will still throw an exception,
 * although it may be later in the program's execution.
 *
 * <p>Unlike {@link Class}, this provides better intersection and union operations. {@link Class}
 * intersection isn't always possible because packages can declare arbitrary classes, but this type
 * hierarchy is sealed. Also, the intersection and union operations are more efficient, because they
 * don't have to iterate over the entire set of supertypes or subtypes.
 */
public interface RType<T> extends BoundedLattice<RType<?>> {
    /** Parse a type ({@link Parser#parse(Class)}), and {@link #cast(Class)} it to the given type. */
  static <T> RType<? extends T> parse(Parser p, Class<T> type) {
    return RType.cast(p.parse(RType.class), type);
  }

  /** {@link #cast(Class)}, but call on a raw type. */
  @SuppressWarnings("rawtypes")
  static <U> RType<? extends U> cast(RType type, Class<U> clazz) {
    return ((RType<?>) type).cast(clazz);
  }

  /**
   * Cast {@code RType<? extends A>} to {@code RType<? extends B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #clazz()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  default <U> RType<? extends U> cast(Class<U> clazz) {
    // `Void` is special-cased to allow `InvalidRType` to emulate subclassing every other `RType`,
    // even though Java's type system can't encode BOTTOM.
    if (!clazz.isAssignableFrom(clazz()) && clazz() != Void.class) {
      if (clazz().getSimpleName().equals(clazz.getSimpleName())) {
        throw new ClassCastException(
            "Can't cast "
                + this
                + " (with erased type parameter "
                + clazz().getName()
                + ") type parameter to "
                + clazz.getName()
                + " (they have the same simple name, but are different classes)");
      } else {
        throw new ClassCastException(
            "Can't cast "
                + this
                + " (with erased type parameter "
                + clazz().getSimpleName()
                + ") to type parameter "
                + clazz.getSimpleName());
      }
    }
    return (RType<? extends U>) this;
  }

  /** The type of an expression which hangs, errors, or otherwise diverts control flow. */
  RNothingType<Void> NOTHING = new RNothingType<>();

  RAnyType ANY = new RAnyType();

  /**
   * This encodes {@link T}: the type that this represents.
   *
   * <p>This is exclusively used to combat Java's type erasure and manually check that a value is
   * not a variable, field, record component, etc. with the wrong {@link T} type.
   */
  Class<? extends T> clazz();

  /**
   * Whether this is {@link #NOTHING}.
   *
   * <p>If true, an instance will never exist, and any code which would produce an instance actually
   * either crashes, hangs, or otherwise diverts control flow.
   */
  default boolean isNothing() {
    return this == NOTHING;
  }

  /**
   * Whether this is {@link #ANY}.
   *
   * <p>If true, every possible runtime value is an instance.
   */
  default boolean isAny() {
    return this == ANY;
  }
}

