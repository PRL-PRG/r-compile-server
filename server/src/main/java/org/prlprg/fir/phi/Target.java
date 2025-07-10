package org.prlprg.fir.phi;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import org.prlprg.fir.cfg.BB;
import org.prlprg.fir.instruction.Expression;

public record Target(BB bb, ImmutableList<Expression> phiArgs) {
  public Target(BB label, Expression... phiArgs) {
    this(label, ImmutableList.copyOf(phiArgs));
  }

  @Override
  public String toString() {
    return bb + "(" + Joiner.on(", ").join(phiArgs) + ")";
  }
}
