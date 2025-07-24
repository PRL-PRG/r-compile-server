package org.prlprg.util.gnur;

import org.prlprg.session.RSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

public interface GNUR extends AutoCloseable {
  boolean isAlive();

  SEXP eval(String source);

  SEXP eval(String source, SEXP input);

  Pair<SEXP, String> capturingEval(String source);

  /// Evaluates the source code, then returns an environment containing all its bindings.
  EnvSXP evalEnvironment(String source);

  @Override
  void close() throws Exception;

  RSession getSession();
}
