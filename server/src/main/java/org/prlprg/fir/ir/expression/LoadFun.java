package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.StringCase;

/// Load a function by name.
public record LoadFun(NamedVariable variable, Env env) implements Expression {
  @EnumSerialCaseIs(StringCase.SNAKE)
  public enum Env {
    LOCAL,
    GLOBAL,
    BASE
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("ldf ");
    p.print(variable);
    if (env != Env.LOCAL) {
      w.write(" in ");
      p.print(env);
    }
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }
}
