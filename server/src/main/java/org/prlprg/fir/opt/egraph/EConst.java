package org.prlprg.fir.opt.egraph;

import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.value.Value;

/// E-node of a constant
public record EConst(Value value) implements ENode {
  @Override
  public Argument out() {
    return new Constant(value);
  }
}
