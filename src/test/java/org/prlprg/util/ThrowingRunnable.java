package org.prlprg.util;

/** {@link Runnable} that may throw an error or exception. */
@FunctionalInterface
public interface ThrowingRunnable {
  void run() throws Throwable;
}
