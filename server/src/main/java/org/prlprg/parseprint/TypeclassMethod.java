package org.prlprg.parseprint;

import java.lang.reflect.Method;

/**
 * Checks invariants and caches metadata for a "typeclass method".
 *
 * <p>A "typeclass method" is a {@link Method Method} with an annotation from {@link TypeclassMap}.
 *
 * @see TypeclassMap
 */
interface TypeclassMethod {

  /** Object class for which this method is a typeclass method. */
  Class<?> objectClass();

  /** Context class for this method, or {@link Void} if none. */
  default Class<?> contextClass() {
    return Void.class;
  }

  default boolean takesContext() {
    return contextClass() != Void.class;
  }
}
