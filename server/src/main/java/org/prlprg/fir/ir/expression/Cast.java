package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Type;

/// Cast the target argument to a different type.
public record Cast(Type type) implements Expression {
  public Cast {
    if (type.kind().repr() != Repr.SEXP) {
      throw new IllegalArgumentException("never cast to non-SEXP type: " + type);
    }
  }
}
