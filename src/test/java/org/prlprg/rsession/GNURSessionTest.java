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
    var session = new GNURSession(RVersion.LATEST_AWARE, null);
    var p = "~/R/x86_64-pc-linux-gnu-library/4.3/";
    p = p.replaceFirst("^~", System.getProperty("user.home"));
    var funs = GNURSession.readPackageDatabase(session, Path.of(p), "yaml");

    Assertions.assertFalse(funs.isEmpty());
  }

  @Test
  public void testLoadBase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, null);
    var p = "/usr/lib/R/library";
    session.loadBase(Path.of(p));

    Assertions.assertFalse(session.baseNamespace().isEmpty());
  }
}
