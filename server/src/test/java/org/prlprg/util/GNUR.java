package org.prlprg.util;

import org.prlprg.sexp.SEXP;

public interface GNUR extends AutoCloseable {
  boolean isAlive();

  SEXP eval(String source);

  Pair<SEXP, String> capturingEval(String source);

  @Override
  void close() throws Exception;
}
