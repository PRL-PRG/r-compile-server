package org.prlprg.util.gnur;

import org.prlprg.RSession;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

public interface GNUR extends AutoCloseable {
  boolean isAlive();

  SEXP eval(String source);

  Pair<SEXP, String> capturingEval(String source);

  @Override
  void close() throws Exception;

  RSession getSession();
}
