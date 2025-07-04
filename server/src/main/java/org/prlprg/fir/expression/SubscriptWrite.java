package org.prlprg.fir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;

public record SubscriptWrite(Expression target, Expression index, Expression value)
    implements Expression {
  @Override
  public @NotNull String toString() {
    return target + "[" + index + "] = " + value;
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(target, index, value);
  }
}
