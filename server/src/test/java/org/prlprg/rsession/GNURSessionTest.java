package org.prlprg.rsession;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Path;
import java.util.regex.Pattern;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.prlprg.AppConfig;
import org.prlprg.RVersion;
import org.prlprg.session.GNURSession;

public class GNURSessionTest {
  private static final Path RDir = Path.of("../external/R/");
  // TODO: rather create a temporary library directory for the tests?
  private static final Path libDir = Path.of("../external/R/library/");
  @TempDir Path tempDir;

  static {
    System.out.println(new java.io.File("").getAbsolutePath());
  }

  @Test
  public void testReadPackageDatabase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, RDir, libDir);
    var version = installedYamlVersion();

    session.loadPackage("yaml", version);

    var ns = session.getNamespace("yaml", version);

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
    var version = installedYamlVersion();

    session.loadPackage("yaml", version);

    var ns = session.getNamespace("yaml", version);

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

  // GNURSession.loadPackage installs the current CRAN yaml when it is not already present, so the
  // version is whatever CRAN currently ships. Query it instead of hardcoding it, so the test does
  // not break every time yaml is updated.
  private static String installedYamlVersion() {
    try {
      var builder =
          new ProcessBuilder(
              AppConfig.R_BIN,
              "--vanilla",
              "--slave",
              "-e",
              "if (!requireNamespace('yaml', quietly = TRUE)) install.packages('yaml', repos ="
                  + " 'https://cloud.r-project.org'); cat(as.character(packageVersion('yaml')))");
      var process = builder.start();
      var output = new String(process.getInputStream().readAllBytes(), StandardCharsets.UTF_8);
      process.waitFor();

      // `cat` prints the version to stdout; install.packages progress goes to stderr. Take the last
      // version-like token to be safe.
      var matcher = Pattern.compile("\\d+(\\.\\d+)+").matcher(output);
      String version = null;
      while (matcher.find()) {
        version = matcher.group();
      }
      if (version == null) {
        throw new RuntimeException("Could not determine the installed yaml version: " + output);
      }
      return version;
    } catch (IOException | InterruptedException e) {
      throw new RuntimeException(e);
    }
  }
}
