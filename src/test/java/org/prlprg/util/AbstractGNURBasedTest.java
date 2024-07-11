package org.prlprg.util;

import java.io.IOException;
import java.io.InputStream;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.rds.RDSReader;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;

@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class AbstractGNURBasedTest {
  protected static RSession rsession = new TestRSession();
  protected GNUR R;

  @BeforeAll
  public void startR() {
    R = GNUR.spawn(rsession);
  }

  @AfterAll
  public void stopR() {
    R.close();
  }

  protected SEXP readRDS(InputStream input) throws IOException {
    return RDSReader.readStream(rsession, IO.maybeDecompress(input));
  }
}
