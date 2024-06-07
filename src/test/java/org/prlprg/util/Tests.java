package org.prlprg.util;

import static org.junit.jupiter.api.Assumptions.assumeTrue;
import static org.prlprg.TestConfig.VERBOSE;
import static org.prlprg.util.TestsPrivate.SNAPSHOT_RESOURCES_ROOT;

import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.Objects;

public interface Tests {
  /** Reads the resource at {@code path}. {@code path} is relative to {@code anchor}'s package. */
  static InputStream getResourceAsStream(Class<?> anchor, String path) {
    return Objects.requireNonNull(
        anchor.getResourceAsStream(path),
        "Resource not found in " + anchor.getPackageName() + ": " + path);
  }

  /**
   * The absolute path of the snapshot resource at {@code path}. {@code path} is relative to {@code
   * anchor}'s package. <b>Be aware that it may not exist, although parent directories will be
   * created if necessary.</b>
   */
  static Path getSnapshotPath(Class<?> anchor, String path) {
    if (path.startsWith("/")) {
      throw new IllegalArgumentException("getSnapshotPath doesn't support absolute paths: " + path);
    }
    var snapshotPath =
        SNAPSHOT_RESOURCES_ROOT.resolve(anchor.getPackageName().replace('.', '/')).resolve(path);
    Files.createDirectories(snapshotPath.getParent());
    return snapshotPath;
  }

  /**
   * The absolute path of the snapshot resource at {@code path}. {@code path} is relative to {@code
   * anchor}'s package. <b>Be aware that it may not exist, although parent directories will be
   * created if necessary.</b>
   */
  static Path getSnapshotPath(Class<?> anchor, Path path) {
    return getSnapshotPath(anchor, path.toString());
  }

  /**
   * The absolute path of the resource at {@code path}. {@code path} is relative to {@code anchor}'s
   * package.
   */
  static Path getResourcePath(Class<?> anchor, String path) {
    return Files.pathFromFileUrl(getResource(anchor, path));
  }

  /**
   * The URL of the resource at {@code path}. {@code path} is relative to {@code anchor}'s package.
   */
  static URL getResource(Class<?> anchor, String path) {
    return Objects.requireNonNull(
        anchor.getResource(path), "Resource not found in " + anchor.getPackageName() + ": " + path);
  }

  /** Reads the resource at {@code path}. {@code path} is relative to this class's package. */
  default InputStream getResourceAsStream(String path) {
    return getResourceAsStream(getClass(), path);
  }

  /**
   * The absolute path of the resource at {@code path}. {@code path} is relative to this class's
   * package.
   */
  default Path getResourcePath(String path) {
    return getResourcePath(getClass(), path);
  }

  /**
   * The absolute path of the resource at {@code path}. {@code path} is relative to this class's
   * package.
   */
  default Path getResourcePath(Path path) {
    return getResourcePath(path.toString());
  }

  /**
   * The absolute path of the snapshot resource at {@code path}. {@code path} is relative to {@code
   * anchor}'s package. <b>Be aware that it may not exist, although parent directories will be
   * created if necessary.</b>
   */
  default Path getSnapshotPath(Path path) {
    return getSnapshotPath(getClass(), path);
  }

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

  /** Abort the test (different than reporting failure) if the values aren't equal. */
  static void assumeEquals(Object expected, Object actual) {
    assumeTrue(expected.equals(actual), () -> "Expected " + expected + ", got " + actual);
  }

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
}

class TestsPrivate {
  static final Path SNAPSHOT_RESOURCES_ROOT = getSnapshotPathsRoot();

  private static Path getSnapshotPathsRoot() {
    var basePath = Files.pathFromFileUrl(ClassLoader.getSystemResource("."));
    while (basePath != null && !basePath.endsWith("target")) {
      basePath = basePath.getParent();
    }
    if (basePath == null) {
      System.err.println("Can't infer snapshot resources root, so we'll use a temporary directory");
      return Files.createTempDirectory(".snapshots");
    }
    return basePath.getParent().resolve("src/test/snapshots");
  }

  private TestsPrivate() {}
}
