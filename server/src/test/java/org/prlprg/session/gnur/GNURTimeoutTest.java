package org.prlprg.session.gnur;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.time.Duration;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Timeout;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.SEXPs;

class GNURTimeoutTest {
  /// Code that reads stdin consumes the request ID, so without the timeout it would hang forever.
  @Test
  @Timeout(30)
  void testTimeoutKillsAndRestarts() {
    try (var r = new RestartingGNURProcess(new TestRSession(), Duration.ofSeconds(2))) {
      var e =
          assertThrows(
              EvalException.class,
              () ->
                  r.capturingEval("cat('before\\n'); readLines(stdin(), n = 1); Sys.sleep(1000)"));
      assertTrue(e.getMessage().startsWith("R REPL timed out after 2 s"), e.getMessage());
      assertTrue(e.outputLog().contains("before"), e.outputLog());

      assertEquals(SEXPs.integer(42), r.eval("42L"));
    }
  }
}
