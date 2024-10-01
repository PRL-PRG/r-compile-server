package org.prlprg.util;

import static org.junit.jupiter.api.Assumptions.assumeTrue;
import static org.prlprg.TestConfig.VERBOSE;
import static org.prlprg.util.TestsPrivate.SNAPSHOT_RESOURCES_ROOT;
import static org.prlprg.util.TestsPrivate.TEST_RESOURCES_ROOT;

import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.Objects;
import java.util.logging.LogManager;
import javax.annotation.Nullable;
import org.junit.jupiter.api.BeforeAll;

public interface Tests {
  @BeforeAll
  static void initializeLogging() throws IOException {
    var config = Tests.class.getResourceAsStream("/logging.properties");
    LogManager.getLogManager().readConfiguration(config);
  }

  // region resources
  // region resource paths

  /**
   * The absolute path of the resource at {@code path}, within the source directory, or {@code null}
   * if the directory isn't available.
   *
   * <p>{@code path} is relative to this class's package.
   */
  default @Nullable Path getSourceResourcePath(Path path) {
    return getSourceResourcePath(getClass(), path);
  }

  /**
   * The absolute path of the snapshot resource at {@code path}.
   *
   * <p>{@code path} is relative to {@code anchor}'s package. <b>Be aware that it may not exist,
   * although parent directories will be created if necessary.</b>
   */
  default Path getSnapshotResourcePath(Path path) {
    return getSnapshotResourcePath(getClass(), path);
  }

  /**
   * The absolute path of the resource at {@code path}.
   *
   * <p>{@code path} is relative to this class's package.
   */
  default Path getResourcePath(Path path) {
    return getResourcePath(getClass(), path);
  }

  /**
   * The absolute path of the snapshot resource at {@code path}. {@code path} is relative to {@code
   * anchor}'s package. <b>Be aware that it may not exist, although parent directories will be
   * created if necessary.</b>
   */
  static Path getSnapshotResourcePath(Class<?> anchor, Path path) {
    if (path.isAbsolute()) {
      throw new IllegalArgumentException(
          "getSnapshotResourcePath doesn't support absolute paths: " + path);
    }
    var snapshotPath =
        SNAPSHOT_RESOURCES_ROOT.resolve(anchor.getPackageName().replace('.', '/')).resolve(path);
    Files.createDirectories(snapshotPath.getParent());
    return snapshotPath;
  }

  /**
   * The absolute path of the resource at {@code path}, within the source directory, or {@code null}
   * if the directory isn't available.
   *
   * <p>{@code path} is relative to {@code anchor}'s package.
   */
  static @Nullable Path getSourceResourcePath(Class<?> anchor, Path path) {
    if (path.isAbsolute()) {
      throw new IllegalArgumentException(
          "getSourceResourcePath doesn't support absolute paths: " + path);
    }
    if (TEST_RESOURCES_ROOT == null) {
      return null;
    }
    return TEST_RESOURCES_ROOT.resolve(anchor.getPackageName().replace('.', '/')).resolve(path);
  }

  /**
   * The absolute path of the resource at {@code path}.
   *
   * <p>{@code path} is relative to {@code anchor}'s package.
   */
  static Path getResourcePath(Class<?> anchor, Path path) {
    return Files.pathFromFileUrl(getResource(anchor, path));
  }

  /**
   * The URL of the resource at {@code path}.
   *
   * <p>{@code path} is relative to {@code anchor}'s package.
   */
  static URL getResource(Class<?> anchor, Path path) {
    return Objects.requireNonNull(
        anchor.getResource(path.toString()),
        "Resource not found in " + anchor.getPackageName() + ": " + path);
  }

  // endregion resource paths

  // region resource as streams

  /**
   * Reads the resource at {@code path}.
   *
   * <p>{@code path} is relative to this class's package.
   */
  default InputStream getResourceAsStream(Path path) {
    return getResourceAsStream(getClass(), path);
  }

  /** Reads the resource at {@code path}. {@code path} is relative to {@code anchor}'s package. */
  static InputStream getResourceAsStream(Class<?> anchor, Path path) {
    return Objects.requireNonNull(
        anchor.getResourceAsStream(path.toString()),
        "Resource not found in " + anchor.getPackageName() + ": " + path);
  }

  // endregion resources as streams
  // endregion resources

  // region command-line

  /** Run a command. */
  static void cmd(Object... command) {
    var commandStrs = Arrays.stream(command).map(Object::toString).toList();
    var commandStr = String.join(" ", commandStrs);
    try {
      var process = new ProcessBuilder(commandStrs).inheritIO().start();
      var exitCode = process.waitFor();
      if (exitCode != 0) {
        throw new RuntimeException("Command failed with exit code " + exitCode + ": " + commandStr);
      }
    } catch (InterruptedException e) {
      throw new RuntimeException("Command was interrupted: " + commandStr, e);
    } catch (IOException e) {
      throw new RuntimeException("Command failed with IO exception: " + commandStr, e);
    }
  }

  // endregion command-line

  // region assumptions

  /** Abort the test (different than reporting failure) if the values aren't equal. */
  static void assumeEquals(Object expected, Object actual) {
    assumeTrue(expected.equals(actual), () -> "Expected " + expected + ", got " + actual);
  }

  // endregion assumptions

  // region logging

  /**
   * {@code System.out.println} if {@link org.prlprg.TestConfig#VERBOSE VERBOSE} is set, otherwise
   * no-op.
   */
  static void printlnIfVerbose(Object message) {
    if (VERBOSE) {
      System.out.println(message);
    }
  }

  /**
   * {@code System.out.println} if {@link org.prlprg.TestConfig#VERBOSE VERBOSE} is set, otherwise
   * no-op.
   */
  static void printlnIfVerbose() {
    if (VERBOSE) {
      System.out.println();
    }
  }
  // endregion logging
}

class TestsPrivate {
  static final @Nullable Path TEST_RESOURCES_ROOT;
  static final Path SNAPSHOT_RESOURCES_ROOT;

  static {
    var basePath = Files.pathFromFileUrl(ClassLoader.getSystemResource("."));
    while (basePath != null && !basePath.endsWith("target")) {
      basePath = basePath.getParent();
    }
    if (basePath == null) {
      System.err.println("Can't infer snapshot resources root, so we'll use a temporary directory");
      TEST_RESOURCES_ROOT = null;
      SNAPSHOT_RESOURCES_ROOT = Files.createTempDirectory(".snapshots");
    } else {
      var testPath = basePath.getParent().resolve("src/test");
      TEST_RESOURCES_ROOT = testPath.resolve("resources");
      SNAPSHOT_RESOURCES_ROOT = testPath.resolve("snapshots");
    }
  }

  private TestsPrivate() {}
}
