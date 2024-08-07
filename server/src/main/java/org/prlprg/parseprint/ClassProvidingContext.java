package org.prlprg.parseprint;

import javax.annotation.Nullable;

/** A {@link Parser} context which provides classes to parse records. */
public interface ClassProvidingContext {
  /**
   * Lookup the class with the given name.
   *
   * @return the class or {@code null} if there is none with that name.
   */
  @Nullable Class<?> getClass(String className);
}
