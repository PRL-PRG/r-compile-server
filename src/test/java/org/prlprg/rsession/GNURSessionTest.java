package org.prlprg.rsession;

import java.io.IOException;
import java.nio.file.Path;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.prlprg.RVersion;
import org.prlprg.session.GNURSession;

public class GNURSessionTest {
  @Test
  public void testReadPackageDatabase() throws IOException {
    var session = new GNURSession(RVersion.LATEST_AWARE, null);
    var p = "/home/pierre/R/x86_64-pc-linux-gnu-library/4.3/";
    p = p.replaceFirst("^~", System.getProperty("user.home"));
    var funs = session.readPackageDatabase(Path.of(p), "askpass");

    Assertions.assertFalse(funs.isEmpty());
  }
}
