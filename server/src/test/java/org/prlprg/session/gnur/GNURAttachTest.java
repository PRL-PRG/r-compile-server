package org.prlprg.session.gnur;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.time.Duration;
import org.junit.jupiter.api.Test;
import org.prlprg.session.TestRSession;

class GNURAttachTest {
  /// An eval doesn't see the packages that an earlier eval in the same process attached.
  @Test
  void testEvalDetachesEarlierPackages() {
    try (var r = new RestartingGNURProcess(new TestRSession(), Duration.ofSeconds(30))) {
      for (var i = 0; i < 2; i++) {
        assertEquals(
            "Loading required package: splines\n",
            r.capturingEval("invisible(require(splines))").second());
      }
    }
  }
}
