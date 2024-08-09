package org.prlprg.rsession;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
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
    var r_dir = Path.of("/usr/local/lib/R/");
    var lib_dir = "/usr/local/lib/R/library/";
    //    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    session.loadPackage("yaml", "2.3.10");

    var ns = session.getNamespace("yaml", "2.3.10");

    Assertions.assertFalse(ns.bindings().isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var p = Path.of("/usr/local/lib/R/");
    var session = new GNURSession(RVersion.LATEST_AWARE, p, null);
    session.loadBase();

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }

  @Test
  public void testGetPackageVersion() throws IOException {
    // Create a temporary DESCRIPTION file with a version entry
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(descriptionFile, "Package: testpkg\nVersion: 1.2.3\n");

    // Create a GNURSession instance
    GNURSession session = new GNURSession(RVersion.LATEST_AWARE, tempDir, tempDir);

    // Call getPackageVersion and assert the returned version
    String version = session.getPackageVersion(tempDir);
    Assertions.assertEquals("1.2.3", version);
  }

  @Test
  public void testGetPackageVersionNoVersion() throws IOException {
    // Create a temporary DESCRIPTION file without a version entry
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(descriptionFile, "Package: testpkg\n");

    // Create a GNURSession instance
    GNURSession session = new GNURSession(RVersion.LATEST_AWARE, tempDir, tempDir);

    // Call getPackageVersion and assert that it throws an IOException
    Assertions.assertThrows(
        IOException.class,
        () -> {
          session.getPackageVersion(tempDir);
        });
  }

  @Test
  public void testLoadPackageWhenNotInstalled() throws IOException, InterruptedException {
    // Create a temporary directory for R libraries
    Path libDir = tempDir.resolve("library");
    Files.createDirectories(libDir);

    // Create a GNURSession instance
    GNURSession session = new GNURSession(RVersion.LATEST_AWARE, tempDir, libDir);

    // Call loadPackage and assert that the package directory is created
    session.loadPackage("yaml", "2.3.10");
    File pkgDir = libDir.resolve("yaml").toFile();
    Assertions.assertTrue(pkgDir.exists() && pkgDir.isDirectory());
  }

  @Test
  public void testLoadPackageWhenAlreadyInstalled() throws IOException {
    // Create a temporary directory for R libraries
    Path libDir = tempDir.resolve("library");
    Files.createDirectories(libDir);

    // Create a mock package directory
    Path pkgDir = libDir.resolve("yaml");
    Files.createDirectories(pkgDir);

    // Create a GNURSession instance
    GNURSession session = new GNURSession(RVersion.LATEST_AWARE, tempDir, libDir);

    // Call loadPackage and assert that the package directory is not modified
    session.loadPackage("yaml", "2.3.10");
    Assertions.assertTrue(pkgDir.toFile().exists() && pkgDir.toFile().isDirectory());
  }

  @Test
  public void testLoadPackageVersionMismatch() throws IOException, InterruptedException {
    // Create a temporary directory for R libraries
    Path libDir = tempDir.resolve("library");
    Files.createDirectories(libDir);

    // Create a GNURSession instance
    GNURSession session = new GNURSession(RVersion.LATEST_AWARE, tempDir, libDir);

    // Create a DESCRIPTION file with a different version
    Path descriptionFile = libDir.resolve("yaml/DESCRIPTION");
    Files.createDirectories(descriptionFile.getParent());
    Files.writeString(descriptionFile, "Package: yaml\nVersion: 2.3.9\n");

    // Call loadPackage and assert that a RuntimeException is thrown
    Assertions.assertThrows(
        RuntimeException.class,
        () -> {
          session.loadPackage("yaml", "2.3.10");
        });
  }
}
