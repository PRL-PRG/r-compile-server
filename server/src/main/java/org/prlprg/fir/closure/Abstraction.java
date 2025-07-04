package org.prlprg.fir.closure;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.cfg.CFG;
import org.prlprg.fir.cfg.variable.Register;
import org.prlprg.fir.cfg.variable.Variable;

public record Abstraction(ImmutableList<Register> args, ImmutableList<Variable> locals, CFG cfg) {
  // TODO: toString
}
