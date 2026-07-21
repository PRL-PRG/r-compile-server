package org.prlprg.fir.ir.assumption;

import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Type;

/// Assume that the target argument has a certain type.
public record AssumeType(Type type) implements Assumption {
  public AssumeType {
    if (type.kind().repr() != Repr.SEXP) {
      throw new IllegalArgumentException("never assume non-SEXP type: " + type);
    }
  }
}
