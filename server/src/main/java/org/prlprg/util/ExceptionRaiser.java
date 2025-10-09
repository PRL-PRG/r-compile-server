package org.prlprg.util;

public class ExceptionRaiser {
  /// Throws the given exception in expression context.
  public static <T, E extends Throwable> T raise(E exception) throws E {
    throw exception;
  }

  private ExceptionRaiser() {}
}
