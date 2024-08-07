package org.prlprg.rsession;

import static org.prlprg.AppConfig.R_LIBS;

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
    var p = Path.of("/usr/lib/R/");
    var session = new GNURSession(RVersion.LATEST_AWARE, p, R_LIBS.get(0));

    session.loadPackage("yaml", "2.3.8");

    var ns = session.getNamespace("yaml", "2.3.8");

    Assertions.assertFalse(ns.bindings().isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var p = Path.of("/usr/lib/R/");
    var session = new GNURSession(RVersion.LATEST_AWARE, p, null);
    session.loadBase();

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }
}
