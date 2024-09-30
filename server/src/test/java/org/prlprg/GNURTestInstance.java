package org.prlprg;

import org.junit.jupiter.api.AfterAll;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.GNUR;
import org.prlprg.util.GNURFactory;
import org.prlprg.util.Pair;

public interface GNURTestInstance extends GNUR {
  RSession Rsession = new TestRSession();
  GNUR R = GNURFactory.createRestarting(Rsession);

  @AfterAll
  static void stopR() throws Exception {
    R.close();
  }

  @Override
  default boolean isAlive() {
    return R.isAlive();
  }

  @Override
  default SEXP eval(String source) {
    return R.eval(source);
  }

  @Override
  default Pair<SEXP, String> capturingEval(String source) {
    return R.capturingEval(source);
  }

  @Override
  default SEXP eval(String source, SEXP input) {
    return R.eval(source, input);
  }

  @Override
  default void close() throws Exception {
    R.close();
  }

  default RSession getRSession() {
    return Rsession;
  }
}
