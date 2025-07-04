package org.prlprg.fir.cfg.instruction;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import org.jetbrains.annotations.NotNull;
import org.prlprg.fir.cfg.BB;

public record Target(BB label, ImmutableList<Expression> phiArgs) {
  public Target(BB label, Expression... phiArgs) {
    this(label, ImmutableList.copyOf(phiArgs));
  }

  @Override
  public @NotNull String toString() {
    return label + "(" + Joiner.on(", ").join(phiArgs) + ")";
  }
}
