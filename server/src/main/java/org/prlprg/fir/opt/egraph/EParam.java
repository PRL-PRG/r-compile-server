package org.prlprg.fir.opt.egraph;

import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Register;

/// E-graph node of phi or parameter
public record EParam(Register param) implements ENode {
  @Override
  public Argument out() {
    return new Read(param);
  }
}
