package org.prlprg;

import java.io.IOException;
import java.nio.file.Path;
import java.util.logging.LogManager;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.rsession.TestRSession;
import org.prlprg.util.GNUR;
import org.prlprg.util.Tests;

/** Tests that require an {@link RSession} and running instance of GNU-R. */
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class AbstractGNURBasedTest implements Tests {
  protected static RSession rsession = new TestRSession();

  // Gets initialized in `@BeforeAll`.
  @SuppressWarnings("NotNullFieldNotInitialized")
  protected GNUR R;

  @BeforeAll
  public void initializeLogging() throws IOException {
    var config = getResourceAsStream(Path.of("/logging.properties"));
    LogManager.getLogManager().readConfiguration(config);
  }

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
}
