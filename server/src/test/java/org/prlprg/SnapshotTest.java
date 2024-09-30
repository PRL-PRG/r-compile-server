package org.prlprg;

import java.nio.file.Path;
import java.util.Optional;
import javax.annotation.Nullable;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.util.ThrowingSupplier;

public abstract class SnapshotTest<T> {
  public static final String SNAPSHOT_BASE_DIR = "src/test/resources";
  public static final String SNAPSHOTS_DIR = "snapshots";
  private @Nullable TestInfo currentTestInfo = null;

  @BeforeEach
  protected final void setUp(TestInfo testInfo) {
    this.currentTestInfo = testInfo;
  }

  protected void doVerify(String snapshotName, T actual, @Nullable ThrowingSupplier<T> oracle) {
    var expectedOpt = Optional.<T>empty();
    T expected;

    try {
      expectedOpt = load(snapshotName);
    } catch (Exception e) {
      throw new RuntimeException("Unable to load snapshot: " + snapshotName, e);
    }

    if (expectedOpt.isPresent()) {
      expected = expectedOpt.get();
    } else {
      if (oracle != null) {
        expected = oracle.get();
        try {
          checkShape(expected);
        } catch (Exception e) {
          throw new RuntimeException(
              "Invalid value computed by test oracle for snapshot: "
                  + snapshotName
                  + " : "
                  + expected,
              e);
        }
      } else {
        expected = actual;
        try {
          checkShape(expected);
        } catch (Exception e) {
          throw new RuntimeException(
              "Invalid value for snapshot: " + snapshotName + " : " + expected, e);
        }
      }

      try {
        save(snapshotName, expected);
      } catch (Exception e) {
        throw new RuntimeException("Unable to save snapshot: " + snapshotName, e);
      }
    }

    checkEqual(expected, actual);
  }

  protected String getTestName() {
    assert currentTestInfo != null;
    return currentTestInfo
        .getTestMethod()
        .orElseThrow(() -> new IllegalStateException("Unable to get the current test method"))
        .getName();
  }

  protected Class<?> getTestClass() {
    assert currentTestInfo != null;
    return currentTestInfo
        .getTestClass()
        .orElseThrow(() -> new IllegalStateException("Unable to get the current test class"));
  }

  protected Path getTestPath() {
    var currentClass = getTestClass();

    var packageName = currentClass.getPackageName();
    var className = currentClass.getSimpleName();

    return Path.of(
        SNAPSHOT_BASE_DIR, packageName.replace(".", "/"), SNAPSHOTS_DIR, className, getTestName());
  }

  protected abstract Optional<T> load(String snapshotName) throws Exception;

  protected abstract void save(String snapshotName, T value) throws Exception;

  protected abstract void checkEqual(T expected, T actual);

  /**
   * Check the shape of the value. This method should throw an exception if the shape of the value
   * is not as expected.
   *
   * <p>This will be called on both the expected and actual values. It provides a way to prevent
   * storing a malformed value in the snapshot file.
   *
   * @param value to check if it has the expected shape
   */
  protected void checkShape(T value) {}
}
