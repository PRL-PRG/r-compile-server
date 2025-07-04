package org.prlprg.fir.cfg.variable;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;

public sealed interface Variable extends Expression permits NamedVariable, Register {
  String name();

  @Override
  default @UnmodifiableView Collection<Expression> children() {
    return List.of();
  }
}
