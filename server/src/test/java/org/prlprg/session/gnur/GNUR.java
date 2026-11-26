package org.prlprg.session.gnur;

import java.util.function.UnaryOperator;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;
import org.prlprg.util.SingletonClass;

@SingletonClass(RestartingGNURProcess.class)
public interface GNUR extends AutoCloseable {
  /// Lazily create the instance.
  static GNUR instance() {
    if (RestartingGNURProcess.INSTANCE == null) {
      RestartingGNURProcess.INSTANCE = new RestartingGNURProcess(new TestRSession());
    }
    return RestartingGNURProcess.INSTANCE;
  }

  /// Lazily create the instance that runs compiled FIŘ code, with the `rsh` package (which
  /// provides the runtime and the connection to the compile server) loaded.
  ///
  /// Separate from [#instance()] so that `rsh`'s symbols, which it loads globally, don't reach the
  /// standalone modules the other tests load (on Linux, they'd take over the same-named symbols
  /// in those).
  static GNUR rshInstance() {
    if (RestartingGNURProcess.RSH_INSTANCE == null) {
      RestartingGNURProcess.RSH_INSTANCE = new RestartingGNURProcess(new TestRSession());
    }
    return RestartingGNURProcess.RSH_INSTANCE;
  }

  boolean isAlive();

  SEXP eval(String source);

  /// Evaluate R source with input SEXP. The SEXP is passed from Java to the R world using RDS.
  SEXP eval(String source, SEXP input);

  /// Like [#eval(String, SEXP)], but the R code can call `.rcs_callback(x)`, which returns
  /// `callback.apply(x)`, and `callback` can call this method again: R evaluates that source
  /// while its call of `.rcs_callback` waits. If `callback` throws, R abandons the evaluation
  /// (and those that wait for it), and this throws the same.
  ///
  /// Unlike the other methods, this doesn't write files, and an error in the R code is fatal.
  SEXP eval(String source, SEXP input, UnaryOperator<SEXP> callback);

  Pair<SEXP, String> capturingEval(String source);

  /// Evaluates the source code, then returns an environment containing all its bindings.
  EnvSXP evalEnvironment(String source);

  @Override
  void close();

  RSession getSession();
}
