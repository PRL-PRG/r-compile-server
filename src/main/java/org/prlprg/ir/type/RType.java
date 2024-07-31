package org.prlprg.ir.type;

import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.SEXP; /**
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
  /** The type of an expression which hangs, errors, or otherwise diverts control flow. */
  RType<Void> NOTHING = new RNothingType();

  RType<Object> ANY = new RAnyType();

  /**
   * This encodes {@link T}: the type that this represents.
   *
   * <p>This is exclusively used to combat Java's type erasure and manually check that a value is
   * not a variable, field, record component, etc. with the wrong {@link T} type.
   */
  Class<T> clazz();

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
