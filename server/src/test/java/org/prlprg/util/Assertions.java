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
   * content. If {@code snapshotPath} doesn't exist, it instead writes the produced string to it and
   * logs that it was created.
   *
   * <p>Additionally, test failures are written to a file next to {@code snapshotPath} which gets
   * automatically deleted after the test passes; this file can be diffed with the snapshot to see
   * the regression, and if the snapshot was supposed to change it can be moved to {@code
   * snapshotPath} to update it.
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

    var failingSnapshotPath =
        Paths.withExtension(snapshotPath, ".fail" + Paths.getExtension(snapshotPath));
    Files.deleteIfExists(failingSnapshotPath);

    if (!Files.exists(snapshotPath)) {
      Files.writeString(snapshotPath, secondActual);
      System.err.println("Created snapshot: " + snapshotPath);
    } else {
      var expected = Files.readString(snapshotPath);
      if (!expected.equals(secondActual)) {
        Files.writeString(failingSnapshotPath, secondActual);
        throw new AssertionFailedError("Regression in " + snapshotName, expected, secondActual);
      }
    }
  }

  private Assertions() {}
}
