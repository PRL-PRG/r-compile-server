package org.prlprg.ir.analysis.scope;

import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * An {@link AbstractISexp} produced from an "abstract load" operation, and the environment (either
 * concrete or {@linkplain StaticEnv#UNKNOWN not closed}) it was loaded from.
 */
public final class AbstractLoad {
  private final ISexp env;
  private final AbstractISexp result;

  public AbstractLoad(AbstractISexp value) {
    env = StaticEnv.UNKNOWN;
    result = value;
  }

  public AbstractLoad(ISexp env, AbstractISexp value) {
    this.env = env;
    this.result = value;
  }

  public ISexp env() {
    return env;
  }

  public AbstractISexp result() {
    return result;
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(result);
    w.write(" from ");
    p.print(env);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}