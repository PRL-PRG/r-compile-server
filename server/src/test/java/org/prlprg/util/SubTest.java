package org.prlprg.util;

import org.opentest4j.AssertionFailedError;

public class SubTest {
  /** Runs the test and attaches {@code name} output and errors. */
  public static void run(String name, ThrowingRunnable test) {
    System.out.println("- " + name);
    try {
      test.run();
    } catch (AssertionFailedError e) {
      // Keep IntelliJ's `<Click to see difference>`
      throw new AssertionFailedError(
          "In " + name + ", " + e.getMessage(), e.getExpected(), e.getActual(), e.getCause());
    } catch (Throwable e) {
      throw new RuntimeException("Failed " + name, e);
    }
  }

  private SubTest() {}
}
