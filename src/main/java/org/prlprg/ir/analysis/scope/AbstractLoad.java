package org.prlprg.ir.analysis.scope;

import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * An {@link AbstractRValue} produced from an "abstract load" operation, and the environment (either
 * concrete or {@linkplain AbstractEnv#UNKNOWN_PARENT unknown}) it was loaded from.
 */
public final class AbstractLoad {
  private final @IsEnv RValue env;
  private final AbstractRValue result;

  public AbstractLoad(AbstractRValue value) {
    env = AbstractEnv.UNKNOWN_PARENT;
    result = value;
  }

  public AbstractLoad(@IsEnv RValue env, AbstractRValue value) {
    this.env = env;
    this.result = value;
  }

  public @IsEnv RValue env() {
    return env;
  }

  public AbstractRValue result() {
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
