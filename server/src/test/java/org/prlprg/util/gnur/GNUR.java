package org.prlprg.util.gnur;

import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

public interface GNUR extends AutoCloseable {
  boolean isAlive();

  SEXP eval(String source);

  Pair<SEXP, String> capturingEval(String source);

  SEXP eval(String source, SEXP input);

  @Override
  void close() throws Exception;

  RSession getSession();
}
