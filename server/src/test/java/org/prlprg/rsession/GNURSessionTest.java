package org.prlprg.rsession;

import java.io.IOException;
import java.nio.file.Path;
import java.util.Objects;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.prlprg.RVersion;
import org.prlprg.session.GNURSession;

public class GNURSessionTest {
  private static final Path RDir;

  static {
    var rHome = System.getenv("R_HOME");
    RDir = Path.of(Objects.requireNonNullElse(rHome, "../external/R/"));
  }

  // TODO: rather create a temporary library directory for the tests?
  private static final Path libDir = RDir.resolve("library");
  @TempDir Path tempDir;

  static {
    System.out.println(new java.io.File("").getAbsolutePath());
  }

  @Test
  public void testReadPackageDatabase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);

    session.loadPackage("yaml", "2.3.10");

    var ns = session.getNamespace("yaml", "2.3.10");

    Assertions.assertFalse(ns.bindings().isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, null);
    session.loadBase();

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }

  @Test
  public void testVersionMismatch() {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);

    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("yaml", "1.0.0");
        });
  }

  @Test
  public void testLoadNonInstalledPackage() throws IOException, InterruptedException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);

    // Assuming "nonexistentpkg" is not installed
    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("nonexistentpkg", "1.0.0");
        });
  }

  @Test
  public void testRetrieveNamespaceAfterLoadingPackage() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);

    session.loadPackage("yaml", "2.3.10");

    var ns = session.getNamespace("yaml", "2.3.10");

    Assertions.assertNotNull(ns);
  }

  @Test
  public void testMissingDescriptionFile() {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);

    // Assuming "pkgwithnomissingdesc" has no DESCRIPTION file
    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("pkgwithnomissingdesc", "1.0.0");
        });
  }
}
