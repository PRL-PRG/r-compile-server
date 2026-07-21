package org.prlprg.fir.ir.assumption;

import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;

/// Assume that the target argument is a closure of the specific function and a global environment.
public record AssumeFunction(FunctionRef functionRef) implements Assumption {
  public AssumeFunction(Function function) {
    this(new FunctionRef(function));
  }

  public Function function() {
    return functionRef.get();
  }
}
