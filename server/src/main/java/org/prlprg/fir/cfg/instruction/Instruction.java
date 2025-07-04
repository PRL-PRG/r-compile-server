package org.prlprg.fir.cfg.instruction;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;

public sealed interface Instruction permits Expression, Jump {
  @UnmodifiableView
  Collection<Expression> children();
}
