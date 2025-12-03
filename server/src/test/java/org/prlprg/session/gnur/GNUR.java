package org.prlprg.session.gnur;

import org.prlprg.session.RSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;
import org.prlprg.util.SingletonClass;

@SingletonClass(RestartingGNURProcess.class)
public interface GNUR extends AutoCloseable {
  boolean isAlive();

  SEXP eval(String source);

  /// Evaluate R source with input SEXP. The SEXP is passed from Java to the R world using RDS.
  SEXP eval(String source, SEXP input);

  Pair<SEXP, String> capturingEval(String source);

  /// Evaluates the source code, then returns an environment containing all its bindings.
  EnvSXP evalEnvironment(String source);

  @Override
  void close();

  RSession getSession();
}
