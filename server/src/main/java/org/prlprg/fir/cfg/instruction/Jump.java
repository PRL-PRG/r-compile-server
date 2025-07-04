package org.prlprg.fir.cfg.instruction;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;

public sealed interface Jump extends Instruction permits Branch, Goto, Return, Unreachable {
  @UnmodifiableView
  Collection<Target> targets();
}
