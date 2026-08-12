package org.prlprg.session;

import static org.prlprg.service.RshCompiler.R_DIRECTORY;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.prlprg.RVersion;

public class GNURSessionTest {
  private static final Path RDir = R_DIRECTORY;
  // TODO: rather create a temporary library directory for the tests?
  private static final Path libDir = R_DIRECTORY.resolve("library");

  /// Package these tests load to exercise [GNURSession#loadPackage]. `make setup-gnur` installs it
  /// into [#libDir]; nothing else in the repository uses it.
  private static final String PKG = "yaml";

  @TempDir Path tempDir;

  static {
    System.out.println(new java.io.File("").getAbsolutePath());
  }

  /// The version of [#PKG] actually installed in [#libDir].
  ///
  /// Read rather than pinned: neither `make setup-gnur` nor
  /// [GNURSession#loadPackage]'s own fallback install asks CRAN for a specific version, so a
  /// literal here turns into a spurious "Version mismatch" failure the next time CRAN publishes a
  /// release (it did -- the pinned 2.3.10 against an installed 2.3.12). [#testVersionMismatch]
  /// still covers the mismatch path, with a version that cannot exist.
  private static String installedPkgVersion() throws IOException {
    var description = libDir.resolve(PKG).resolve("DESCRIPTION");
    if (!Files.isRegularFile(description)) {
      throw new IllegalStateException(
          "`" + PKG + "` is not installed in " + libDir + "; run `make setup-gnur`");
    }
    return new DESCRIPTION(description).getVersion();
  }

  @Test
  public void testReadPackageDatabase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);
    var version = installedPkgVersion();

    session.loadPackage(PKG, version);

    var ns = session.getNamespace(PKG, version);

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
          session.loadPackage(PKG, "1.0.0");
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
    var version = installedPkgVersion();

    session.loadPackage(PKG, version);

    var ns = session.getNamespace(PKG, version);

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
