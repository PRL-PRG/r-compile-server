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

public record Store(StoreType type, NamedVariable variable, Argument value) implements Expression {
  @EnumSerialCaseIs(StringCase.SNAKE)
  public enum StoreType {
    LOCAL_VAR,
    SUPER_VAR,
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(value);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer()
        .write(
            switch (type) {
              case LOCAL_VAR -> "st ";
              case SUPER_VAR -> "st-super ";
            });
    p.print(variable);
    p.writer().write(" = ");
    p.print(value);
  }
}
