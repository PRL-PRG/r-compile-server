package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

/// Load a named environment variable (or function). Has no arguments.
public record Load(LoadType type, NamedVariable variable) implements Expression {
  @EnumSerialCaseIs(StringCase.SNAKE)
  public enum LoadType {
    LOCAL_VAR,
    SUPER_VAR,
    LOCAL_FUN,
    GLOBAL_FUN,
    BASE_FUN
  }
}
