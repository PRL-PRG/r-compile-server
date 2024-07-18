package org.prlprg;

import java.io.IOException;
import java.io.InputStream;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.rds.RDSReader;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.GNUR;
import org.prlprg.util.IO;

/** Tests that require an {@link RSession} and running instance of GNU-R. */
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class AbstractGNURBasedTest {
  protected static RSession rsession = new TestRSession();

  // Gets initialized in `@BeforeAll`.
  @SuppressWarnings("NotNullFieldNotInitialized")
  protected GNUR R;

  @BeforeAll
  public void startR() {
    R = GNUR.spawn(rsession);
  }

  // It's not constant if `startR` fails.
  @SuppressWarnings("ConstantValue")
  @AfterAll
  public void stopR() {
    if (R != null) {
      R.close();
    }
  }

  protected SEXP readRDS(InputStream input) throws IOException {
    return RDSReader.readStream(rsession, IO.maybeDecompress(input));
  }
}
