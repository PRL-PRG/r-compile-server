package org.prlprg.session.gnur;

import java.time.Duration;
import java.util.function.UnaryOperator;
import org.jspecify.annotations.Nullable;
import org.prlprg.TestConfig;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

class RestartingGNURProcess implements GNUR {
  static @Nullable RestartingGNURProcess INSTANCE;
  static @Nullable RestartingGNURProcess RSH_INSTANCE;

  private final TestRSession session;
  private final Duration timeout;
  private @Nullable GNUR R;

  RestartingGNURProcess(TestRSession session) {
    this(session, Duration.ofSeconds(TestConfig.R_EVAL_TIMEOUT));
  }

  /// `timeout` is how long each evaluation may take before the process is killed.
  RestartingGNURProcess(TestRSession session, Duration timeout) {
    this.session = session;
    this.timeout = timeout;
  }

  private void check() {
    if (R == null || !R.isAlive()) {
      R = new SingleGNURProcess(session, timeout);
    }
  }

  @Override
  public boolean isAlive() {
    return R != null && R.isAlive();
  }

  @Override
  public SEXP eval(String source) {
    check();
    assert R != null;
    return R.eval(source);
  }

  @Override
  public SEXP eval(String source, SEXP input) {
    check();
    assert R != null;
    return R.eval(source, input);
  }

  @Override
  public SEXP eval(String source, SEXP input, UnaryOperator<SEXP> callback) {
    check();
    assert R != null;
    return R.eval(source, input, callback);
  }

  @Override
  public Pair<SEXP, String> capturingEval(String source) {
    check();
    assert R != null;
    return R.capturingEval(source);
  }

  @Override
  public EnvSXP evalEnvironment(String source) {
    check();
    assert R != null;
    return R.evalEnvironment(source);
  }

  @Override
  public void close() {
    if (R != null) {
      R.close();
    }
  }

  @Override
  public RSession getSession() {
    return session;
  }
}
