package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

/// Store the argument into the named environment variable.
public record Store(StoreType type, NamedVariable variable) implements Expression {
  @EnumSerialCaseIs(StringCase.SNAKE)
  public enum StoreType {
    LOCAL_VAR,
    SUPER_VAR,
  }
}
