package org.prlprg.fir.opt.egraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// e-node of a pure or side-effecting instruction
///
/// `pos` is null iff pure
public record EInstruction(@Override Register ret, Expression expression, @Nullable CfgPosition pos)
    implements ENode {
  @Override
  public Argument out() {
    return new Read(ret);
  }
}
