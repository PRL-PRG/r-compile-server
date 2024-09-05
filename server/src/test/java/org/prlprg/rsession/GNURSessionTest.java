package org.prlprg.rsession;

import java.io.IOException;
import java.nio.file.Path;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.prlprg.RVersion;
import org.prlprg.session.GNURSession;

public class GNURSessionTest {
  private static final String R_HOME = System.getenv("R_HOME");
  @TempDir Path tempDir;

  @Test
  public void testReadPackageDatabase() throws IOException {
    var r_dir = Path.of("/usr/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.4/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    session.loadPackage("yaml", "2.3.10");

    var ns = session.getNamespace("yaml", "2.3.10");

    Assertions.assertFalse(ns.bindings().isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var p = Path.of("/usr/lib/R/");
    var session = new GNURSession(RVersion.LATEST_AWARE, p, null);
    session.loadBase();

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }

  @Test
  public void testVersionMismatch() {
    var r_dir = Path.of("/usr/local/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.4/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("yaml", "1.0.0");
        });
  }

  @Test
  public void testLoadNonInstalledPackage() throws IOException, InterruptedException {
    var r_dir = Path.of("/usr/local/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.4/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    // Assuming "nonexistentpkg" is not installed
    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("nonexistentpkg", "1.0.0");
        });
  }

  @Test
  public void testRetrieveNamespaceAfterLoadingPackage() throws IOException {
    var r_dir = Path.of("/usr/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.4/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    session.loadPackage("yaml", "2.3.10");

    var ns = session.getNamespace("yaml", "2.3.10");

    Assertions.assertNotNull(ns);
  }

  @Test
  public void testMissingDescriptionFile() {
    var r_dir = Path.of("/usr/local/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.4/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    // Assuming "pkgwithnomissingdesc" has no DESCRIPTION file
    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("pkgwithnomissingdesc", "1.0.0");
        });
  }
}
