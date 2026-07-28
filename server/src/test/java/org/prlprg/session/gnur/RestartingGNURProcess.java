package org.prlprg.session.gnur;

import org.jspecify.annotations.Nullable;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

class RestartingGNURProcess implements GNUR {
  static @Nullable RestartingGNURProcess INSTANCE;

  private final TestRSession session;
  private @Nullable GNUR R;

  RestartingGNURProcess(TestRSession session) {
    this.session = session;
  }

  private void check() {
    if (R == null || !R.isAlive()) {
      R = new SingleGNURProcess(session);
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
