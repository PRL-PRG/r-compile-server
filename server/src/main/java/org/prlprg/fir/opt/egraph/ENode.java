package org.prlprg.fir.opt.egraph;

import org.prlprg.fir.ir.argument.Argument;

public sealed interface ENode permits EConst, EInstruction, EParam {
  Argument out();
}
