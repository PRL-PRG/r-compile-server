package org.prlprg.util;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.nio.file.Path;
import java.util.function.Supplier;
import org.opentest4j.AssertionFailedError;

public class Assertions {
  /**
   * First it asserts that producing the string twice results in the same string.
   *
   * <p>Then, if {@code snapshotPath} exists, it asserts that the produced string matches its
   * content, and if not, writes the produced string to a file next to {@code snapshotPath}. If
   * {@code snapshotPath} doesn't exist, it instead writes the produced string to it and logs that
   * it was created.
   *
   * @param snapshotPath The absolute path to the snapshot file.
   * @param snapshotName A human-readable name for the snapshot, used in the assertion messages.
   */
  public static void assertSnapshot(
      Path snapshotPath, Supplier<String> actual, String snapshotName) {
    if (!snapshotPath.isAbsolute()) {
      throw new IllegalArgumentException(
          "Snapshot path must be absolute: "
              + snapshotPath
              + "\nUse Tests.getSnapshot to get an absolute path from a relative one.");
    }
    var firstActual = actual.get();
    var secondActual = actual.get();
    assertEquals(firstActual, secondActual, "Non-determinism in " + snapshotName);

    if (!Files.exists(snapshotPath)) {
      Files.writeString(snapshotPath, firstActual);
      System.err.println("Created snapshot: " + snapshotPath);
    } else {
      var expected = Files.readString(snapshotPath);
      if (!expected.equals(secondActual)) {
        throw new AssertionFailedError("Regression in " + snapshotName, expected, secondActual);
      }
    }
  }

  private Assertions() {}
}
