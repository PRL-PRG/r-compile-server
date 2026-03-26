package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.StringCase;

public record Load(LoadType type, NamedVariable variable) implements Expression {
  @EnumSerialCaseIs(StringCase.SNAKE)
  public enum LoadType {
    LOCAL_VAR,
    SUPER_VAR,
    LOCAL_FUN,
    GLOBAL_FUN,
    BASE_FUN
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return this;
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
              case LOCAL_VAR -> "ld ";
              case SUPER_VAR -> "ld-super ";
              case LOCAL_FUN -> "ldf ";
              case GLOBAL_FUN -> "ldf-glob ";
              case BASE_FUN -> "ldf-base ";
            });
    p.print(variable);
  }
}
