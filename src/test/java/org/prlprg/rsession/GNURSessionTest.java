package org.prlprg.rsession;

import java.io.IOException;
import java.nio.file.Path;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.prlprg.RVersion;
import org.prlprg.session.GNURSession;

public class GNURSessionTest {
  private static final String R_HOME = System.getenv("R_HOME");

  @Test
  public void testReadPackageDatabase() throws IOException {
    var r_dir = Path.of("/usr/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.3/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    var session = new GNURSession(RVersion.LATEST_AWARE, r_dir, Path.of(lib_dir));

    session.prepareNamespace("yaml", "2.3.8");
    var funs = GNURSession.readPackageDatabase(session, Path.of(lib_dir), "yaml");

    Assertions.assertFalse(funs.isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var p = Path.of("/usr/lib/R/");
    var session = new GNURSession(RVersion.LATEST_AWARE, p, null);
    session.loadBase();

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }
}
