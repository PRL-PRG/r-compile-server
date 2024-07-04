package org.prlprg.ir.analysis.abstractNode;

import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public sealed interface AbstractLoad {
  static AbstractLoad of(AbstractRValue value) {
    return new AbstractLoadImpl(AbstractEnvImpl.UNKNOWN_PARENT, value);
  }

  static AbstractLoad of(@IsEnv RValue env, AbstractRValue value) {
    return new AbstractLoadImpl(env, value);
  }

  @IsEnv
  RValue env();

  AbstractRValue result();
}

record AbstractLoadImpl(@Override @IsEnv RValue env, @Override AbstractRValue result)
    implements AbstractLoad {
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
}
