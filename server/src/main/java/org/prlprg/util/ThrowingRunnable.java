package org.prlprg.util;

/** {@link Runnable} that may throw an error or exception. */
@FunctionalInterface
public interface ThrowingRunnable extends Runnable {

  static void run(ThrowingRunnable runnable) {
    runnable.run();
  }

  void runWithException() throws Exception;

  @Override
  default void run() {
    try {
      runWithException();
    } catch (Exception e) {
      throw new RuntimeException(e.getMessage(), e.getCause());
    }
  }
}
