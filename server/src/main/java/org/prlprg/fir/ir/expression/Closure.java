package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;

/// Create a closure of the given function. Has no arguments.
public record Closure(boolean isStatic, FunctionRef codeRef) implements Expression {
  public Closure(boolean isStatic, Function code) {
    this(isStatic, new FunctionRef(code));
  }

  public Function code() {
    return codeRef.get();
  }
}
