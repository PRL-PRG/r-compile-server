package org.prlprg.ir.type;

import org.prlprg.sexp.SEXP;

/** The type of an unboxed value, i.e. not an {@link SEXP}. */
public final class RUnboxedType implements RType {
  private final Class<?> clazz;

  /** Returns an {@link RType} representing the type of an unboxed value with the given class. */
  public static RUnboxedType of(Class<?> clazz) {
    return new RUnboxedType(clazz);
  }

  // This is private, and `of(clazz)` is exposed, to make the API the same as `RSexpType.of`.
  private RUnboxedType(Class<?> clazz) {
    if (SEXP.class.isAssignableFrom(clazz)) {
      throw new IllegalArgumentException("Unboxed types must not be subclasses of SEXP.");
    }

    this.clazz = clazz;
  }

  @Override
  public Class<?> clazz() {
    return clazz;
  }
}
