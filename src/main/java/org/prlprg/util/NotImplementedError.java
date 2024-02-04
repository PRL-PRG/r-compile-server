package org.prlprg.util;

public class NotImplementedError extends Error {
  public NotImplementedError(Object switchCase) {
    super("Sorry, this case is not yet implemented: " + switchCase);
  }

  public NotImplementedError() {
    super("Sorry, this code is not yet implemented");
  }
}
