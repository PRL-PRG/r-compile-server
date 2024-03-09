package org.prlprg.util;

import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.RSession;
import org.prlprg.rsession.TestRSession;

@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class AbstractGNURBasedTest {
  protected RSession rsession;
  protected GNUR R;

  @BeforeAll
  public void startR() {
    rsession = new TestRSession();
    R = GNUR.spawn(rsession);
  }

  @AfterAll
  public void stopR() {
    R.close();
  }
}
