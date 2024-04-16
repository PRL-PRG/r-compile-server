package org.prlprg.util;

import java.io.IOException;

/** Zero-argument returning function which may throw an {@link IOException}. */
@FunctionalInterface
public interface IOThrowingSupplier<T> {
  T get() throws IOException;
}
