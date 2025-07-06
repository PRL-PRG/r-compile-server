package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;
import org.prlprg.sexp.SEXP;

/// Currently any {@link SEXP} can be a literal, but we may want to make this more specific
/// (e.g. only scalars).
public record Literal(SEXP sexp) implements Expression {
  @Override
  public String toString() {
    return sexp.toString();
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
